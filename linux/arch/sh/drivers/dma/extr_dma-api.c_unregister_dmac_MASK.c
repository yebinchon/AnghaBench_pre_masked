
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_info {unsigned int nr_channels; int flags; int pdev; int list; scalar_t__ channels; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct dma_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct dma_info *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_channels; VAR_2++)
  FUNC_0(VAR_1->channels + VAR_2, VAR_1);

 if (!(VAR_1->flags & VAR_0))
  FUNC_1(VAR_1->channels);

 FUNC_2(&VAR_1->list);
 FUNC_3(VAR_1->pdev);
}
