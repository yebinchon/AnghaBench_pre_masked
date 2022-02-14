
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct ioat_dca_priv {int max_requesters; int requester_count; TYPE_1__* req_slots; scalar_t__ iobase; scalar_t__ dca_base; } ;
struct device {int dummy; } ;
struct dca_provider {int dummy; } ;
struct TYPE_2__ {scalar_t__ rid; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ioat_dca_priv* FUNC_0 (struct dca_provider*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct pci_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dca_provider *VAR_2,
          struct device *VAR_3)
{
 struct ioat_dca_priv *VAR_4 = FUNC_0(VAR_2);
 struct pci_dev *VAR_5;
 int VAR_6;
 u16 VAR_7;


 if (!FUNC_1(VAR_3))
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_4->max_requesters; VAR_6++) {
  if (VAR_4->req_slots[VAR_6].pdev == VAR_5) {
   VAR_7 =
         FUNC_2(VAR_4->dca_base + VAR_1);
   FUNC_4(0, VAR_4->iobase + VAR_7 + (VAR_6 * 4));
   VAR_4->req_slots[VAR_6].pdev = ((void*)0);
   VAR_4->req_slots[VAR_6].rid = 0;
   VAR_4->requester_count--;
   return VAR_6;
  }
 }
 return -VAR_0;
}
