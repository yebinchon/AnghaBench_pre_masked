
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct dma_ops_domain {TYPE_1__ domain; int iovad; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dma_ops_domain*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dma_ops_domain *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_3(&VAR_0->iovad);

 FUNC_1(&VAR_0->domain);

 if (VAR_0->domain.id)
  FUNC_0(VAR_0->domain.id);

 FUNC_2(VAR_0);
}
