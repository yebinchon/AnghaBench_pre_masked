
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int * regs; int lo; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_1, u32 VAR_2)
{
 VAR_1->lo = VAR_1->regs[FUNC_0(VAR_2)];

 FUNC_1(VAR_0);

 return 0;
}
