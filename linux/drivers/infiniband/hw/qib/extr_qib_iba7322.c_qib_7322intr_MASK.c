
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct qib_devdata {int flags; unsigned int first_user_ctxt; scalar_t__* rcd; int * int_counter; TYPE_1__* cspec; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned long long main_int_mask; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long FUNC_1 (int) ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*,char*) ;
 int FUNC_4 (struct qib_devdata*,unsigned long long) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 unsigned long long FUNC_7 (struct qib_devdata*,int ) ;
 int FUNC_8 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_9 (struct qib_devdata*,unsigned long long) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (unsigned long long) ;
 int FUNC_12 (struct qib_devdata*,unsigned long long) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_16, void *VAR_17)
{
 struct qib_devdata *VAR_18 = VAR_17;
 irqreturn_t VAR_19;
 u64 VAR_20;
 u64 VAR_21;
 u64 VAR_22;
 unsigned VAR_23;
 u32 VAR_24;

 if ((VAR_18->flags & (VAR_13 | VAR_3)) != VAR_13) {






  VAR_19 = VAR_1;
  goto bail;
 }

 VAR_20 = FUNC_7(VAR_18, VAR_15);

 if (FUNC_11(VAR_20 == ~0ULL)) {
  FUNC_2(VAR_18);
  FUNC_3(VAR_18, "Interrupt status all f's, skipping\n");

  VAR_19 = VAR_2;
  goto bail;
 }

 VAR_20 &= VAR_18->cspec->main_int_mask;
 if (FUNC_11(!VAR_20)) {

  VAR_19 = VAR_2;
  goto bail;
 }

 FUNC_10(*VAR_18->int_counter);


 if (FUNC_11(VAR_20 & (~VAR_5 | VAR_7 |
         VAR_6 | FUNC_0(VAR_0, 0) |
         FUNC_0(VAR_0, 1))))
  FUNC_12(VAR_18, VAR_20);







 FUNC_8(VAR_18, VAR_14, VAR_20);






 VAR_21 = VAR_20 & (VAR_9 | VAR_11);
 if (VAR_21) {
  VAR_22 = (1ULL << VAR_8) |
   (1ULL << VAR_10);
  for (VAR_23 = 0; VAR_23 < VAR_18->first_user_ctxt; VAR_23++) {
   if (VAR_21 & VAR_22) {
    VAR_21 &= ~VAR_22;
    if (VAR_18->rcd[VAR_23])
     FUNC_6(VAR_18->rcd[VAR_23], ((void*)0), &VAR_24);
   }
   VAR_22 <<= 1;
  }
  if (VAR_21) {
   VAR_21 = (VAR_21 >> VAR_8) |
    (VAR_21 >> VAR_10);
   FUNC_4(VAR_18, VAR_21);
  }
 }

 if (VAR_20 & (FUNC_1(0) | FUNC_1(1)))
  FUNC_9(VAR_18, VAR_20);

 if ((VAR_20 & VAR_12) && (VAR_18->flags & VAR_4))
  FUNC_5(VAR_18);

 VAR_19 = VAR_1;
bail:
 return VAR_19;
}
