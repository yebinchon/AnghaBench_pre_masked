
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int ctl_name; TYPE_1__** csrows; int pdev; } ;
struct TYPE_2__ {int first_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int ,int,int ,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_8, u32 VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_2(VAR_8->pdev);
 u32 VAR_11;
 u32 VAR_12;

 if (!VAR_9)
  return;

 FUNC_1(VAR_10, VAR_2, &VAR_11);

 VAR_12 = (VAR_11 & VAR_3) >>
  VAR_4;


 if (VAR_9 & (VAR_5 |
        VAR_6)) {
  FUNC_0(VAR_1, VAR_8, 1,
         VAR_8->csrows[VAR_12]->first_page, 0, 0,
         VAR_12, 0, -1, VAR_8->ctl_name, "");
 }


 if (VAR_9 & VAR_7)
  FUNC_0(VAR_0, VAR_8, 1,
         VAR_8->csrows[VAR_12]->first_page, 0, 0,
         VAR_12, 0, -1, VAR_8->ctl_name, "");
}
