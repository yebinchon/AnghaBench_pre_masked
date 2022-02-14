
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001 {unsigned char* data; scalar_t__ type; struct input_dev* touch_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct input_dev*,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct w8001*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct w8001 *VAR_7)
{
 struct input_dev *VAR_8 = VAR_7->touch_dev;
 unsigned char *VAR_9 = VAR_7->data;
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  bool VAR_14 = VAR_9[0] & (1 << VAR_12);

  FUNC_2(VAR_8, VAR_12);
  FUNC_1(VAR_8, VAR_6, VAR_14);
  if (VAR_14) {
   VAR_10 = (VAR_9[6 * VAR_12 + 1] << 7) | VAR_9[6 * VAR_12 + 2];
   VAR_11 = (VAR_9[6 * VAR_12 + 3] << 7) | VAR_9[6 * VAR_12 + 4];



   FUNC_5(VAR_7, &VAR_10, &VAR_11);

   FUNC_3(VAR_8, VAR_0, VAR_10);
   FUNC_3(VAR_8, VAR_1, VAR_11);
   VAR_13++;
  }
 }





 if (VAR_7->type != VAR_3 &&
       VAR_7->type != VAR_4) {
  VAR_7->type = VAR_13 == 1 ? VAR_2 : VAR_5;
  FUNC_0(VAR_8, 1);
 }

 FUNC_4(VAR_8);
}
