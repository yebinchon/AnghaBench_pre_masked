
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pt_regs {int dummy; } ;


 scalar_t__ FUNC_0 (int,int*) ;
 int FUNC_1 (struct pt_regs*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_0(VAR_2, &VAR_3))
  return 1;

 VAR_2 += 1;
 if (FUNC_0(VAR_2, &VAR_4))
  return 1;

 VAR_2 += 1;
 if (FUNC_0(VAR_2, &VAR_5))
  return 1;

 VAR_2 += 1;
 if (FUNC_0(VAR_2, &VAR_6))
  return 1;

 VAR_3 |= VAR_4 << 8;
 VAR_3 |= VAR_5 << 16;
 VAR_3 |= VAR_6 << 24;

 FUNC_1(VAR_0, VAR_1, VAR_3);

 return 0;
}
