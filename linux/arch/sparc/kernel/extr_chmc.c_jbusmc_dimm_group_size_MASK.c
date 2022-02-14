
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct linux_prom64_registers {scalar_t__ phys_addr; scalar_t__ reg_size; } ;



__attribute__((used)) static u64 FUNC_0(u64 VAR_0,
      const struct linux_prom64_registers *VAR_1,
      int VAR_2)
{
 u64 VAR_3 = VAR_0 + (8UL * 1024 * 1024 * 1024);
 u64 VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  const struct linux_prom64_registers *VAR_6;
  u64 VAR_7;
  u64 VAR_8;

  VAR_6 = &VAR_1[VAR_5];
  VAR_7 = VAR_6->phys_addr;
  VAR_8 = VAR_7 + VAR_6->reg_size;
  if (VAR_0 < VAR_7 || VAR_0 >= VAR_8)
   continue;
  if (VAR_8 > VAR_3)
   VAR_8 = VAR_3;
  if (VAR_8 > VAR_4)
   VAR_4 = VAR_8;
 }

 return VAR_4 - VAR_0;
}
