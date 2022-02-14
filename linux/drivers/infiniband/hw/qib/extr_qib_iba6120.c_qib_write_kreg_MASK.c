
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u16 ;
struct qib_devdata {int flags; int * kregbase; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(const struct qib_devdata *VAR_1,
      const u16 VAR_2, u64 VAR_3)
{
 if (VAR_1->kregbase && (VAR_1->flags & VAR_0))
  FUNC_0(VAR_3, &VAR_1->kregbase[VAR_2]);
}
