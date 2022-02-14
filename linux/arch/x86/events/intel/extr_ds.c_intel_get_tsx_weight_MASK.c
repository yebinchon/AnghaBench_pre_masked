
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hsw_tsx_tuning {scalar_t__ cycles_last_block; scalar_t__ value; } ;
typedef scalar_t__ u64 ;



__attribute__((used)) static inline u64 FUNC_0(u64 VAR_0)
{
 if (VAR_0) {
  union hsw_tsx_tuning VAR_1 = { .value = VAR_0 };
  return VAR_1.cycles_last_block;
 }
 return 0;
}
