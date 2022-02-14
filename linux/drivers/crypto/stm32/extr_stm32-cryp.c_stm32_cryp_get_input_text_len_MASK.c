
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_cryp {unsigned int authsize; TYPE_1__* areq; } ;
struct TYPE_2__ {unsigned int cryptlen; } ;


 scalar_t__ FUNC_0 (struct stm32_cryp*) ;

__attribute__((used)) static unsigned int FUNC_1(struct stm32_cryp *VAR_0)
{
 return FUNC_0(VAR_0) ? VAR_0->areq->cryptlen :
      VAR_0->areq->cryptlen - VAR_0->authsize;
}
