
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct pci_dev {int dummy; } ;
struct hfi1_devdata {scalar_t__ pport; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*,unsigned long long,int ) ;
 struct hfi1_devdata* FUNC_1 (struct pci_dev*) ;
 unsigned long long FUNC_2 (scalar_t__,int ,int ) ;

__attribute__((used)) static pci_ers_result_t
FUNC_3(struct pci_dev *VAR_4)
{
 u64 VAR_5 = 0U;
 struct hfi1_devdata *VAR_6 = FUNC_1(VAR_4);
 pci_ers_result_t VAR_7 = VAR_3;

 if (VAR_6 && VAR_6->pport) {
  VAR_5 = FUNC_2(VAR_6->pport, VAR_1, VAR_0);
  if (VAR_5 == ~0ULL)
   VAR_7 = VAR_2;
  FUNC_0(VAR_6,
       "HFI1 mmio_enabled function called, read wordscntr %llx, returning %d\n",
       VAR_5, VAR_7);
 }
 return VAR_7;
}
