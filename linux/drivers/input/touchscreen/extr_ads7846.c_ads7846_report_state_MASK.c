
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {unsigned int x; unsigned int y; unsigned int z1; unsigned int z2; scalar_t__ ignore; scalar_t__ y_buf; scalar_t__ x_buf; } ;
struct ads7846_packet {TYPE_1__ tc; } ;
struct ads7846 {int model; int pressure_max; unsigned int x_plate_ohms; int pendown; TYPE_2__* spi; int core_prop; struct input_dev* input; scalar_t__ penirq_recheck_delay_usecs; struct ads7846_packet* packet; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (struct ads7846*) ;
 int FUNC_2 (struct input_dev*,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct input_dev*,int *,unsigned int,unsigned int,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ads7846 *VAR_3)
{
 struct ads7846_packet *VAR_4 = VAR_3->packet;
 unsigned int VAR_5;
 u16 VAR_6, VAR_7, VAR_8, VAR_9;






 if (VAR_3->model == 7845) {
  VAR_6 = *(u16 *)VAR_4->tc.x_buf;
  VAR_7 = *(u16 *)VAR_4->tc.y_buf;
  VAR_8 = 0;
  VAR_9 = 0;
 } else {
  VAR_6 = VAR_4->tc.x;
  VAR_7 = VAR_4->tc.y;
  VAR_8 = VAR_4->tc.z1;
  VAR_9 = VAR_4->tc.z2;
 }


 if (VAR_6 == VAR_2)
  VAR_6 = 0;

 if (VAR_3->model == 7843) {
  VAR_5 = VAR_3->pressure_max / 2;
 } else if (VAR_3->model == 7845) {
  if (FUNC_1(VAR_3))
   VAR_5 = VAR_3->pressure_max / 2;
  else
   VAR_5 = 0;
  FUNC_0(&VAR_3->spi->dev, "x/y: %d/%d, PD %d\n", VAR_6, VAR_7, VAR_5);
 } else if (FUNC_5(VAR_6 && VAR_8)) {

  VAR_5 = VAR_9;
  VAR_5 -= VAR_8;
  VAR_5 *= VAR_6;
  VAR_5 *= VAR_3->x_plate_ohms;
  VAR_5 /= VAR_8;
  VAR_5 = (VAR_5 + 2047) >> 12;
 } else {
  VAR_5 = 0;
 }






 if (VAR_4->tc.ignore || VAR_5 > VAR_3->pressure_max) {
  FUNC_0(&VAR_3->spi->dev, "ignored %d pressure %d\n",
    VAR_4->tc.ignore, VAR_5);
  return;
 }





 if (VAR_3->penirq_recheck_delay_usecs) {
  FUNC_7(VAR_3->penirq_recheck_delay_usecs);
  if (!FUNC_1(VAR_3))
   VAR_5 = 0;
 }
 if (VAR_5) {
  struct input_dev *VAR_10 = VAR_3->input;

  if (!VAR_3->pendown) {
   FUNC_3(VAR_10, VAR_1, 1);
   VAR_3->pendown = 1;
   FUNC_0(&VAR_3->spi->dev, "DOWN\n");
  }

  FUNC_6(VAR_10, &VAR_3->core_prop, VAR_6, VAR_7, 0);
  FUNC_2(VAR_10, VAR_0, VAR_3->pressure_max - VAR_5);

  FUNC_4(VAR_10);
  FUNC_0(&VAR_3->spi->dev, "%4d/%4d/%4d\n", VAR_6, VAR_7, VAR_5);
 }
}
