
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {scalar_t__ hw_pidx; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; int * int_counter; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct qib_pportdata *VAR_8 = VAR_7;
 struct qib_devdata *VAR_9 = VAR_8->dd;

 if ((VAR_9->flags & (VAR_2 | VAR_1)) != VAR_2)






  return VAR_0;

 FUNC_3(*VAR_9->int_counter);


 FUNC_2(VAR_9, VAR_4, VAR_8->hw_pidx ?
         FUNC_0(VAR_3, 1) :
         FUNC_0(VAR_3, 0));
 FUNC_1(VAR_8, VAR_5);

 return VAR_0;
}
