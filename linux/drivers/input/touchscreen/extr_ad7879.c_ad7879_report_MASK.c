
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct input_dev {int dummy; } ;
struct ad7879 {unsigned int* conversion_data; unsigned int x_plate_ohms; unsigned int x; unsigned int y; unsigned int Rt; int timer; scalar_t__ swap_xy; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ad7879 *VAR_10)
{
 struct input_dev *VAR_11 = VAR_10->input;
 unsigned VAR_12;
 u16 VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_10->conversion_data[VAR_3] & VAR_9;
 VAR_14 = VAR_10->conversion_data[VAR_4] & VAR_9;
 VAR_15 = VAR_10->conversion_data[VAR_5] & VAR_9;
 VAR_16 = VAR_10->conversion_data[VAR_6] & VAR_9;

 if (VAR_10->swap_xy)
  FUNC_5(VAR_13, VAR_14);
 if (FUNC_4(VAR_13 && VAR_15)) {

  VAR_12 = (VAR_16 - VAR_15) * VAR_13 * VAR_10->x_plate_ohms;
  VAR_12 /= VAR_15;
  VAR_12 = (VAR_12 + 2047) >> 12;





  if (VAR_12 > FUNC_0(VAR_11, VAR_0))
   return -VAR_8;







  if (FUNC_6(&VAR_10->timer)) {

   FUNC_2(VAR_11, VAR_7, 1);
   FUNC_1(VAR_11, VAR_1, VAR_10->x);
   FUNC_1(VAR_11, VAR_2, VAR_10->y);
   FUNC_1(VAR_11, VAR_0, VAR_10->Rt);
   FUNC_3(VAR_11);
  }

  VAR_10->x = VAR_13;
  VAR_10->y = VAR_14;
  VAR_10->Rt = VAR_12;

  return 0;
 }

 return -VAR_8;
}
