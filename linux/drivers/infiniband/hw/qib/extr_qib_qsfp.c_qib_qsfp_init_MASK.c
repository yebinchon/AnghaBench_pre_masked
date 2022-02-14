
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_qsfp_data {TYPE_1__* ppd; int work; } ;
struct qib_devdata {int (* f_gpio_mod ) (struct qib_devdata*,int,int,int) ;} ;
struct TYPE_2__ {scalar_t__ hw_pidx; struct qib_devdata* dd; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qib_devdata*,int,int,int) ;
 int FUNC_2 (struct qib_devdata*,int,int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct qib_qsfp_data *VAR_4,
     void (*VAR_5)(struct work_struct *))
{
 u32 VAR_6, VAR_7;

 struct qib_devdata *VAR_8 = VAR_4->ppd->dd;


 FUNC_0(&VAR_4->work, VAR_5);






 VAR_6 = VAR_2 | VAR_1 | VAR_0;
 VAR_7 = VAR_6 - VAR_1;
 if (VAR_4->ppd->hw_pidx) {
  VAR_6 <<= VAR_3;
  VAR_7 <<= VAR_3;
 }
 VAR_8->f_gpio_mod(VAR_8, VAR_7, VAR_6, VAR_6);
 FUNC_3(20);

 VAR_8->f_gpio_mod(VAR_8, VAR_6, VAR_6, VAR_6);
}
