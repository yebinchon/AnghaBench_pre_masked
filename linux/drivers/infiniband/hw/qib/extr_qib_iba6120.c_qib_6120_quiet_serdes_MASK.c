
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int control; TYPE_1__* cspec; } ;
struct TYPE_2__ {scalar_t__ iblnkerrdelta; scalar_t__ iblnkerrsnap; scalar_t__ ibdeltainprog; scalar_t__ ibsymdelta; scalar_t__ ibsymsnap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_pportdata*,int ,int ) ;
 int FUNC_3 (struct qib_devdata*,int ,int) ;
 int FUNC_4 (struct qib_devdata*,int ) ;
 int FUNC_5 (struct qib_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct qib_pportdata *VAR_12)
{
 struct qib_devdata *VAR_13 = VAR_12->dd;
 u64 VAR_14;

 FUNC_2(VAR_12, 0, VAR_4);


 VAR_13->control &= ~VAR_3;
 FUNC_3(VAR_13, VAR_9,
         VAR_13->control | VAR_2);

 if (VAR_13->cspec->ibsymdelta || VAR_13->cspec->iblnkerrdelta ||
     VAR_13->cspec->ibdeltainprog) {
  u64 VAR_15;


  VAR_15 = FUNC_1(VAR_13, VAR_10);
  FUNC_3(VAR_13, VAR_10,
          VAR_15 | FUNC_0(VAR_1, VAR_0));

  if (VAR_13->cspec->ibsymdelta || VAR_13->cspec->ibdeltainprog) {
   VAR_14 = FUNC_4(VAR_13, VAR_8);
   if (VAR_13->cspec->ibdeltainprog)
    VAR_14 -= VAR_14 - VAR_13->cspec->ibsymsnap;
   VAR_14 -= VAR_13->cspec->ibsymdelta;
   FUNC_5(VAR_13, VAR_8, VAR_14);
  }
  if (VAR_13->cspec->iblnkerrdelta || VAR_13->cspec->ibdeltainprog) {
   VAR_14 = FUNC_4(VAR_13, VAR_7);
   if (VAR_13->cspec->ibdeltainprog)
    VAR_14 -= VAR_14 - VAR_13->cspec->iblnkerrsnap;
   VAR_14 -= VAR_13->cspec->iblnkerrdelta;
   FUNC_5(VAR_13, VAR_7, VAR_14);
  }


  FUNC_3(VAR_13, VAR_10, VAR_15);
 }

 VAR_14 = FUNC_1(VAR_13, VAR_11);
 VAR_14 |= FUNC_0(VAR_5, VAR_6);
 FUNC_3(VAR_13, VAR_11, VAR_14);
}
