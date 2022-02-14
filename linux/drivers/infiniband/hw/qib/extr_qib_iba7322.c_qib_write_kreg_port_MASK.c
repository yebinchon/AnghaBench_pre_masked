
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct qib_pportdata {TYPE_2__* cpspec; TYPE_1__* dd; } ;
struct TYPE_4__ {int * kpregbase; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(const struct qib_pportdata *VAR_1,
           const u16 VAR_2, u64 VAR_3)
{
 if (VAR_1->cpspec && VAR_1->dd && VAR_1->cpspec->kpregbase &&
     (VAR_1->dd->flags & VAR_0))
  FUNC_0(VAR_3, &VAR_1->cpspec->kpregbase[VAR_2]);
}
