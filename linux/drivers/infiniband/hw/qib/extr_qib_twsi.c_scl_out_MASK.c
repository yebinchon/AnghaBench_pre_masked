
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qib_devdata {unsigned long gpio_scl_num; int (* f_gpio_mod ) (struct qib_devdata*,int ,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,char*,int) ;
 int FUNC_2 (struct qib_devdata*,int ,int,int) ;
 int FUNC_3 (struct qib_devdata*,int ,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct qib_devdata *VAR_1, u8 VAR_2)
{
 u32 VAR_3;

 FUNC_4(1);

 VAR_3 = 1UL << VAR_1->gpio_scl_num;


 VAR_1->f_gpio_mod(VAR_1, 0, VAR_2 ? 0 : VAR_3, VAR_3);





 if (!VAR_2)
  FUNC_4(2);
 else {
  int VAR_4;

  for (VAR_4 = VAR_0; VAR_4 > 0; VAR_4 -= 2) {
   if (VAR_3 & VAR_1->f_gpio_mod(VAR_1, 0, 0, 0))
    break;
   FUNC_4(2);
  }
  if (VAR_4 <= 0)
   FUNC_1(VAR_1, "SCL interface stuck low > %d uSec\n",
        VAR_0);
 }
 FUNC_0(VAR_1);
}
