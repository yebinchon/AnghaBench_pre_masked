
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int state; int num_desc_pages; scalar_t__ free_on_sequence; int * bounce_buffer; int * pages; int direction; int num_pages; int ** desc_pages; } ;
typedef TYPE_1__ drm_via_sg_info_t ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct pci_dev *VAR_2, drm_via_sg_info_t *VAR_3)
{
 int VAR_4;

 switch (VAR_3->state) {
 case 130:
  FUNC_4(VAR_2, VAR_3);

 case 131:
  for (VAR_4 = 0; VAR_4 < VAR_3->num_desc_pages; ++VAR_4) {
   if (VAR_3->desc_pages[VAR_4] != ((void*)0))
    FUNC_0((unsigned long)VAR_3->desc_pages[VAR_4]);
  }
  FUNC_1(VAR_3->desc_pages);

 case 128:
  FUNC_2(VAR_3->pages, VAR_3->num_pages,
       (VAR_3->direction == VAR_0));

 case 129:
  FUNC_3(VAR_3->pages);

 default:
  VAR_3->state = VAR_1;
 }
 FUNC_3(VAR_3->bounce_buffer);
 VAR_3->bounce_buffer = ((void*)0);
 VAR_3->free_on_sequence = 0;
}
