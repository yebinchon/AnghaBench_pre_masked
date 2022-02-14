
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kaddr; int mc_addr; int handle; } ;
struct TYPE_3__ {int kaddr; int mc_addr; int handle; } ;
struct smu7_smumgr {int * toc; TYPE_2__ smu_buffer; TYPE_1__ header_buffer; } ;
struct pp_hwmgr {int * smu_backend; scalar_t__ not_vf; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct pp_hwmgr *VAR_0)
{
 struct smu7_smumgr *VAR_1 = (struct smu7_smumgr *)(VAR_0->smu_backend);

 FUNC_0(&VAR_1->header_buffer.handle,
     &VAR_1->header_buffer.mc_addr,
     &VAR_1->header_buffer.kaddr);

 if (VAR_0->not_vf)
  FUNC_0(&VAR_1->smu_buffer.handle,
     &VAR_1->smu_buffer.mc_addr,
     &VAR_1->smu_buffer.kaddr);


 FUNC_1(VAR_1->toc);
 VAR_1->toc = ((void*)0);
 FUNC_1(VAR_0->smu_backend);
 VAR_0->smu_backend = ((void*)0);
 return 0;
}
