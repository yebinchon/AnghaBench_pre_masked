
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int flags; unsigned int first_user_ctxt; TYPE_1__* cspec; int * rcd; int * int_counter; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int lli_counter; int lli_thresh; int lli_errs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (int ,int*,int *) ;
 int FUNC_4 (struct qib_devdata*,int ) ;
 int FUNC_5 (struct qib_devdata*,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct qib_devdata*,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_15, void *VAR_16)
{
 struct qib_devdata *VAR_17 = VAR_16;
 irqreturn_t VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22 = 0;
 unsigned VAR_23;

 if ((VAR_17->flags & (VAR_4 | VAR_2)) != VAR_4) {






  VAR_18 = VAR_0;
  goto bail;
 }

 VAR_19 = FUNC_4(VAR_17, VAR_14);

 if (FUNC_7(!VAR_19)) {
  VAR_18 = VAR_1;
  goto bail;
 }
 if (FUNC_7(VAR_19 == -1)) {
  FUNC_0(VAR_17);

  VAR_18 = VAR_1;
  goto bail;
 }

 FUNC_6(*VAR_17->int_counter);

 if (FUNC_7(VAR_19 & (~VAR_5 |
         VAR_7 | VAR_6)))
  FUNC_8(VAR_17, VAR_19);







 FUNC_5(VAR_17, VAR_13, VAR_19);






 VAR_20 = VAR_19 &
  ((VAR_8 << VAR_9) |
   (VAR_10 << VAR_11));
 if (VAR_20) {
  VAR_21 = (1U << VAR_9) |
   (1U << VAR_11);
  for (VAR_23 = 0; VAR_23 < VAR_17->first_user_ctxt; VAR_23++) {
   if (VAR_20 & VAR_21) {
    VAR_20 &= ~VAR_21;
    VAR_22 += FUNC_3(VAR_17->rcd[VAR_23],
           &VAR_17->cspec->lli_counter,
           ((void*)0));
   }
   VAR_21 <<= 1;
  }
  if (VAR_22) {
   u32 VAR_24 = VAR_17->cspec->lli_counter;

   VAR_24 += VAR_22;
   if (VAR_24) {
    if (VAR_24 > VAR_17->cspec->lli_thresh) {
     VAR_17->cspec->lli_counter = 0;
     VAR_17->cspec->lli_errs++;
    } else
     VAR_17->cspec->lli_counter += VAR_24;
   }
  }


  if (VAR_20) {
   VAR_20 =
    (VAR_20 >> VAR_9) |
    (VAR_20 >> VAR_11);
   FUNC_1(VAR_17, VAR_20);
  }
 }

 if ((VAR_19 & VAR_12) && (VAR_17->flags & VAR_3))
  FUNC_2(VAR_17);

 VAR_18 = VAR_0;
bail:
 return VAR_18;
}
