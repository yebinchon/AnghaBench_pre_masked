
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct mem_ctl_info {struct ecc_settings* pvt_info; } ;
struct ecc_settings {int dummy; } ;
typedef struct ecc_settings amd64_pvt ;
struct TYPE_2__ {struct pci_dev* misc; } ;


 int FUNC_0 (int) ;
 struct ecc_settings** VAR_0 ;
 struct mem_ctl_info* FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_3 (int *) ;
 int FUNC_4 (struct ecc_settings*) ;
 int FUNC_5 (struct ecc_settings*) ;
 TYPE_1__* FUNC_6 (unsigned int) ;
 int FUNC_7 (struct ecc_settings*,unsigned int,struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(unsigned int VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_6(VAR_1)->misc;
 struct ecc_settings *VAR_3 = VAR_0[VAR_1];
 struct mem_ctl_info *VAR_4;
 struct amd64_pvt *VAR_5;

 VAR_4 = FUNC_3(&VAR_2->dev);
 FUNC_0(!VAR_4);


 VAR_4 = FUNC_1(&VAR_2->dev);
 if (!VAR_4)
  return;

 VAR_5 = VAR_4->pvt_info;

 FUNC_7(VAR_3, VAR_1, VAR_2);

 FUNC_4(VAR_5);

 FUNC_5(VAR_0[VAR_1]);
 VAR_0[VAR_1] = ((void*)0);


 VAR_4->pvt_info = ((void*)0);

 FUNC_5(VAR_5);
 FUNC_2(VAR_4);
}
