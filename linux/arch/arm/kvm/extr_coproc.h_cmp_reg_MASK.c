
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coproc_reg {scalar_t__ CRn; scalar_t__ CRm; scalar_t__ Op1; scalar_t__ Op2; int is_64bit; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(const struct coproc_reg *VAR_0,
     const struct coproc_reg *VAR_1)
{
 FUNC_0(VAR_0 == VAR_1);
 if (!VAR_0)
  return 1;
 else if (!VAR_1)
  return -1;
 if (VAR_0->CRn != VAR_1->CRn)
  return VAR_0->CRn - VAR_1->CRn;
 if (VAR_0->CRm != VAR_1->CRm)
  return VAR_0->CRm - VAR_1->CRm;
 if (VAR_0->Op1 != VAR_1->Op1)
  return VAR_0->Op1 - VAR_1->Op1;
 if (VAR_0->Op2 != VAR_1->Op2)
  return VAR_0->Op2 - VAR_1->Op2;
 return VAR_1->is_64bit - VAR_0->is_64bit;
}
