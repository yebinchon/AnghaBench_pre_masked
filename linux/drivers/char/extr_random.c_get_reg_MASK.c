
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct fast_pool {int reg_idx; } ;
typedef int __u32 ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static __u32 FUNC_2(struct fast_pool *VAR_0, struct pt_regs *VAR_1)
{
 __u32 *VAR_2 = (__u32 *) VAR_1;
 unsigned int VAR_3;

 if (VAR_1 == ((void*)0))
  return 0;
 VAR_3 = FUNC_0(VAR_0->reg_idx);
 if (VAR_3 >= sizeof(struct pt_regs) / sizeof(__u32))
  VAR_3 = 0;
 VAR_2 += VAR_3++;
 FUNC_1(VAR_0->reg_idx, VAR_3);
 return *VAR_2;
}
