
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct gpio_desc *VAR_3, int VAR_4,
 unsigned long *VAR_5, unsigned long *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = VAR_3 ? FUNC_1(VAR_3) : -VAR_0;

 switch (VAR_10) {
 case 129:
  VAR_7 = FUNC_0(7);
  VAR_8 = FUNC_0(1);
  VAR_9 = FUNC_0(3);
  break;
 case 128:
  VAR_7 = FUNC_0(1);
  VAR_8 = FUNC_0(7);
  VAR_9 = FUNC_0(3);
  break;
 default:
  VAR_7 = FUNC_0(3);
  VAR_8 = FUNC_0(1);
  VAR_9 = FUNC_0(7);
  break;
 }

 if (VAR_5 && VAR_6 && !*VAR_5 && !*VAR_6)
  *VAR_5 = *VAR_6 = 500;

 FUNC_5(&VAR_2);

 switch (VAR_4) {
 case 130:
 case 131:
  if (!FUNC_2(VAR_8) &&
      !FUNC_2(VAR_9))
   FUNC_4(VAR_1, 0);
  FUNC_4(VAR_7, 0);
  if (FUNC_3(VAR_10))
   FUNC_4(VAR_10, VAR_4);
  break;
 case 132:
  if (FUNC_3(VAR_10))
   FUNC_4(VAR_10, 0);
  FUNC_4(VAR_1, 1);
  FUNC_4(VAR_7, 1);
  break;
 }

 FUNC_6(&VAR_2);

 return 0;
}
