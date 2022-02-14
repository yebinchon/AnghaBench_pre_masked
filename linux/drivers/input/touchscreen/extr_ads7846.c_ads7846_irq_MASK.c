
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct ads7846 {int pendown; TYPE_1__* spi; struct input_dev* input; int stopped; int wait; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ads7846*) ;
 int FUNC_1 (struct ads7846*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct ads7846*) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct ads7846 *VAR_7 = VAR_6;


 FUNC_8(VAR_3);

 while (!VAR_7->stopped && FUNC_3(VAR_7)) {


  FUNC_0(VAR_7);

  if (!VAR_7->stopped)
   FUNC_1(VAR_7);

  FUNC_9(VAR_7->wait, VAR_7->stopped,
       FUNC_7(VAR_4));
 }

 if (VAR_7->pendown && !VAR_7->stopped) {
  struct input_dev *VAR_8 = VAR_7->input;

  FUNC_5(VAR_8, VAR_1, 0);
  FUNC_4(VAR_8, VAR_0, 0);
  FUNC_6(VAR_8);

  VAR_7->pendown = 0;
  FUNC_2(&VAR_7->spi->dev, "UP\n");
 }

 return VAR_2;
}
