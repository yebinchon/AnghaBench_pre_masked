
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int end; int parent; } ;
struct TYPE_2__ {int m64_base; int m64_segsize; } ;
struct pnv_phb {TYPE_1__ ioda; } ;
struct pci_dev {struct resource* resource; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 struct pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (struct pnv_phb*,int) ;
 int FUNC_4 (struct pnv_phb*,struct resource*) ;
 int FUNC_5 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1,
      unsigned long *VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_2(VAR_1->bus);
 struct pnv_phb *VAR_4 = VAR_3->private_data;
 struct resource *VAR_5;
 resource_size_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = VAR_4->ioda.m64_base;
 VAR_7 = VAR_4->ioda.m64_segsize;
 for (VAR_11 = 0; VAR_11 <= VAR_0; VAR_11++) {
  VAR_5 = &VAR_1->resource[VAR_11];
  if (!VAR_5->parent || !FUNC_4(VAR_4, VAR_5))
   continue;

  VAR_8 = FUNC_0(VAR_5->start - VAR_6, VAR_7);
  VAR_9 = FUNC_1(VAR_5->end - VAR_6, VAR_7);
  for (VAR_10 = VAR_8 / VAR_7; VAR_10 < VAR_9 / VAR_7; VAR_10++) {
   if (VAR_2)
    FUNC_5(VAR_10, VAR_2);
   else
    FUNC_3(VAR_4, VAR_10);
  }
 }
}
