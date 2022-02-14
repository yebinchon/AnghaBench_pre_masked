
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {scalar_t__ is_write; int Op2; int CRm; int CRn; int Op1; int Op0; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,char*) ;

__attribute__((used)) static inline void FUNC_1(const struct sys_reg_params *VAR_0)
{

 FUNC_0(" { Op0(%2u), Op1(%2u), CRn(%2u), CRm(%2u), Op2(%2u), func_%s },\n",
        VAR_0->Op0, VAR_0->Op1, VAR_0->CRn, VAR_0->CRm, VAR_0->Op2, VAR_0->is_write ? "write" : "read");
}
