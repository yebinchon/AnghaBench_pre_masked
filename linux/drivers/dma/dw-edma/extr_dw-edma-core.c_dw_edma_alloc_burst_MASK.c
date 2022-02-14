
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_edma_chunk {struct dw_edma_burst* burst; scalar_t__ bursts_alloc; } ;
struct dw_edma_burst {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dw_edma_burst* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct dw_edma_burst *FUNC_4(struct dw_edma_chunk *VAR_1)
{
 struct dw_edma_burst *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (FUNC_3(!VAR_2))
  return ((void*)0);

 FUNC_0(&VAR_2->list);
 if (VAR_1->burst) {

  VAR_1->bursts_alloc++;
  FUNC_2(&VAR_2->list, &VAR_1->burst->list);
 } else {

  VAR_1->bursts_alloc = 0;
  VAR_1->burst = VAR_2;
 }

 return VAR_2;
}
