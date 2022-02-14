
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u16 ;
struct qib_devdata {int * kregbase; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(const struct qib_devdata *VAR_0,
      const u16 VAR_1, u64 VAR_2)
{
 if (VAR_0->kregbase)
  FUNC_0(VAR_2, &VAR_0->kregbase[VAR_1]);
}
