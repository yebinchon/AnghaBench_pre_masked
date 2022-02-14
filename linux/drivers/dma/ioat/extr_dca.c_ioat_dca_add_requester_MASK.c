
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ioat_dca_priv {int requester_count; int max_requesters; int iobase; scalar_t__ dca_base; TYPE_1__* req_slots; } ;
struct device {int dummy; } ;
struct dca_provider {int dummy; } ;
struct TYPE_2__ {int rid; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ioat_dca_priv* FUNC_0 (struct dca_provider*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 struct pci_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct dca_provider *VAR_4, struct device *VAR_5)
{
 struct ioat_dca_priv *VAR_6 = FUNC_0(VAR_4);
 struct pci_dev *VAR_7;
 int VAR_8;
 u16 VAR_9;
 u16 VAR_10;


 if (!FUNC_2(VAR_5))
  return -VAR_1;
 VAR_7 = FUNC_4(VAR_5);
 VAR_9 = FUNC_1(VAR_7);

 if (VAR_6->requester_count == VAR_6->max_requesters)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6->max_requesters; VAR_8++) {
  if (VAR_6->req_slots[VAR_8].pdev == ((void*)0)) {

   VAR_6->requester_count++;
   VAR_6->req_slots[VAR_8].pdev = VAR_7;
   VAR_6->req_slots[VAR_8].rid = VAR_9;
   VAR_10 =
         FUNC_3(VAR_6->dca_base + VAR_2);
   FUNC_5(VAR_9 | VAR_3,
          VAR_6->iobase + VAR_10 + (VAR_8 * 4));
   return VAR_8;
  }
 }

 return -VAR_0;
}
