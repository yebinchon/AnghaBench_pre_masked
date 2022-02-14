
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_edma_desc {int n_tcds; TYPE_1__* tcd; struct fsl_edma_chan* echan; } ;
struct fsl_edma_chan {int tcd_pool; } ;
struct TYPE_2__ {int ptcd; int vtcd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_edma_desc*) ;
 struct fsl_edma_desc* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct fsl_edma_desc*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static struct fsl_edma_desc *FUNC_5(struct fsl_edma_chan *VAR_2,
  int VAR_3)
{
 struct fsl_edma_desc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(FUNC_4(VAR_4, VAR_1, VAR_3), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->echan = VAR_2;
 VAR_4->n_tcds = VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->tcd[VAR_5].vtcd = FUNC_0(VAR_2->tcd_pool,
     VAR_0, &VAR_4->tcd[VAR_5].ptcd);
  if (!VAR_4->tcd[VAR_5].vtcd)
   goto err;
 }
 return VAR_4;

err:
 while (--VAR_5 >= 0)
  FUNC_1(VAR_2->tcd_pool, VAR_4->tcd[VAR_5].vtcd,
    VAR_4->tcd[VAR_5].ptcd);
 FUNC_2(VAR_4);
 return ((void*)0);
}
