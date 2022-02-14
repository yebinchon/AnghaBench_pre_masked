
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {unsigned long gpio_scl_num; unsigned long gpio_sda_num; int (* f_gpio_mod ) (struct qib_devdata*,int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qib_devdata*,char*,int) ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int FUNC_2 (struct qib_devdata*,int ) ;
 int FUNC_3 (struct qib_devdata*,int) ;
 int FUNC_4 (struct qib_devdata*,int ,int ,int) ;
 int FUNC_5 (struct qib_devdata*,int ,int ,int) ;
 int FUNC_6 (int) ;

int FUNC_7(struct qib_devdata *VAR_1)
{
 int VAR_2 = 9;
 int VAR_3 = 0;
 u32 VAR_4, VAR_5;




 VAR_5 = (1UL << VAR_1->gpio_scl_num) | (1UL << VAR_1->gpio_sda_num);






 VAR_1->f_gpio_mod(VAR_1, 0, 0, VAR_5);
 while (VAR_2--) {
  FUNC_1(VAR_1, 0);
  FUNC_1(VAR_1, 1);

  VAR_3 |= FUNC_2(VAR_1, 0);
 }

 if (VAR_3) {





  VAR_4 = VAR_1->f_gpio_mod(VAR_1, 0, 0, 0);
  if ((VAR_4 & VAR_5) != VAR_5)
   FUNC_0(VAR_1, "GPIO pins not at rest: %d\n",
        VAR_4 & VAR_5);

  FUNC_6(1);
  FUNC_3(VAR_1, 0);
  FUNC_6(1);

  FUNC_3(VAR_1, 1);
  FUNC_6(VAR_0);
 }

 return !VAR_3;
}
