
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_4__ {int num_desc; int descriptors_per_page; int direction; TYPE_2__** desc_pages; scalar_t__ chain_start; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
struct TYPE_5__ {scalar_t__ next; int size; int mem_addr; } ;
typedef TYPE_2__ drm_via_descriptor_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,scalar_t__,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct pci_dev *VAR_1, drm_via_sg_info_t *VAR_2)
{
 int VAR_3 = VAR_2->num_desc;
 unsigned VAR_4 = VAR_3 / VAR_2->descriptors_per_page;
 unsigned VAR_5 = VAR_3 % VAR_2->descriptors_per_page;
 drm_via_descriptor_t *VAR_6 = VAR_2->desc_pages[VAR_4] +
  VAR_5;
 dma_addr_t VAR_7 = VAR_2->chain_start;

 while (VAR_3--) {
  if (VAR_5-- == 0) {
   VAR_4--;
   VAR_5 = VAR_2->descriptors_per_page - 1;
   VAR_6 = VAR_2->desc_pages[VAR_4] +
    VAR_5;
  }
  FUNC_1(&VAR_1->dev, VAR_7, sizeof(*VAR_6), VAR_0);
  FUNC_0(&VAR_1->dev, VAR_6->mem_addr, VAR_6->size, VAR_2->direction);
  VAR_7 = (dma_addr_t) VAR_6->next;
  VAR_6--;
 }
}
