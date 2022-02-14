
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {int flags; int * int_counter; } ;
struct qib_ctxtdata {unsigned long long ctxt; struct qib_devdata* dd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_ctxtdata*,int *,int *) ;
 int FUNC_1 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct qib_ctxtdata *VAR_8 = VAR_7;
 struct qib_devdata *VAR_9 = VAR_8->dd;
 u32 VAR_10;

 if ((VAR_9->flags & (VAR_4 | VAR_1)) != VAR_4)






  return VAR_0;

 FUNC_2(*VAR_9->int_counter);


 FUNC_1(VAR_9, VAR_5, ((1ULL << VAR_2) |
         (1ULL << VAR_3)) << VAR_8->ctxt);

 FUNC_0(VAR_8, ((void*)0), &VAR_10);

 return VAR_0;
}
