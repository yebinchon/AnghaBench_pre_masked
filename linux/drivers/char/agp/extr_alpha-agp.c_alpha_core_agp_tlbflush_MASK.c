
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct agp_memory {int dummy; } ;
struct TYPE_4__ {int hose; } ;
typedef TYPE_1__ alpha_agp_info ;
struct TYPE_6__ {TYPE_1__* dev_private_data; } ;
struct TYPE_5__ {int (* mv_pci_tbi ) (int ,int ,int) ;} ;


 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct agp_memory *VAR_2)
{
 alpha_agp_info *VAR_3 = VAR_0->dev_private_data;
 VAR_1.mv_pci_tbi(VAR_3->hose, 0, -1);
}
