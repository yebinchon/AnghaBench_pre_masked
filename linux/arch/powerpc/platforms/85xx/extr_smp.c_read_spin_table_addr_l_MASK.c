
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef int u32 ;
struct epapr_spin_table {int addr_l; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline u32 FUNC_2(void *VAR_0)
{
 FUNC_0((ulong)VAR_0,
  (ulong)VAR_0 + sizeof(struct epapr_spin_table));
 return FUNC_1(&((struct epapr_spin_table *)VAR_0)->addr_l);
}
