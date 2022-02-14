
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pt_regs {scalar_t__ nip; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ,struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_3)
{
 if (FUNC_1(VAR_3))
  return 0;

 if (FUNC_0(1, VAR_2, 0, VAR_3) != 0)
  return 0;

 if (*(u32 *)VAR_3->nip == VAR_0)
  VAR_3->nip += VAR_1;

 return 1;
}
