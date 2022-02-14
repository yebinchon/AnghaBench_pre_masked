
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int dummy; } ;
struct pxad_desc_sw {int nb_desc; struct pxad_desc_hw** hw_desc; } ;
struct pxad_desc_hw {scalar_t__ dtadr; scalar_t__ dsadr; } ;


 struct pxad_desc_sw* FUNC_0 (struct virt_dma_desc*) ;

__attribute__((used)) static bool FUNC_1(struct virt_dma_desc *VAR_0)
{
 struct pxad_desc_sw *VAR_1 = FUNC_0(VAR_0);
 struct pxad_desc_hw *VAR_2 =
  VAR_1->hw_desc[VAR_1->nb_desc - 1];

 return VAR_2->dtadr != (VAR_2->dsadr + 8);
}
