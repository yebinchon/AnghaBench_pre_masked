
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pt_root; int flags; int mode; } ;
struct dma_ops_domain {int iovad; TYPE_1__ domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct dma_ops_domain*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int VAR_5 ;
 struct dma_ops_domain* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static struct dma_ops_domain *FUNC_7(void)
{
 struct dma_ops_domain *VAR_7;

 VAR_7 = FUNC_5(sizeof(struct dma_ops_domain), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_6(&VAR_7->domain))
  goto free_dma_dom;

 VAR_7->domain.mode = VAR_2;
 VAR_7->domain.pt_root = (void *)FUNC_2(VAR_0);
 VAR_7->domain.flags = VAR_4;
 if (!VAR_7->domain.pt_root)
  goto free_dma_dom;

 FUNC_3(&VAR_7->iovad, VAR_3, VAR_1);

 if (FUNC_4(&VAR_7->iovad, VAR_5, ((void*)0)))
  goto free_dma_dom;


 FUNC_0(&VAR_6, &VAR_7->iovad);

 return VAR_7;

free_dma_dom:
 FUNC_1(VAR_7);

 return ((void*)0);
}
