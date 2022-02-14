
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct sbridge_pvt {TYPE_1__* sbridge_dev; TYPE_2__ info; int pci_br0; int pci_sad1; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct TYPE_3__ {int source_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_4)
{
 struct sbridge_pvt *VAR_5 = VAR_4->pvt_info;
 u32 VAR_6;

 if (VAR_5->info.type == VAR_1 || VAR_5->info.type == VAR_0 ||
     VAR_5->info.type == VAR_2)
  FUNC_2(VAR_5->pci_sad1, VAR_3, &VAR_6);
 else
  FUNC_2(VAR_5->pci_br0, VAR_3, &VAR_6);

 if (VAR_5->info.type == VAR_2)
  VAR_5->sbridge_dev->source_id = FUNC_1(VAR_6);
 else
  VAR_5->sbridge_dev->source_id = FUNC_0(VAR_6);
}
