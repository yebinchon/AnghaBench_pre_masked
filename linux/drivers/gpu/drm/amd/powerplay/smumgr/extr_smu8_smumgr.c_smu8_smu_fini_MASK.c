
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kaddr; int mc_addr; int handle; } ;
struct TYPE_4__ {int kaddr; int mc_addr; int handle; } ;
struct smu8_smumgr {TYPE_1__ smu_buffer; TYPE_2__ toc_buffer; } ;
struct pp_hwmgr {struct smu8_smumgr* smu_backend; int * device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct smu8_smumgr*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1)
{
 struct smu8_smumgr *VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->device == ((void*)0))
  return -VAR_0;

 VAR_2 = VAR_1->smu_backend;
 if (VAR_2) {
  FUNC_0(&VAR_2->toc_buffer.handle,
     &VAR_2->toc_buffer.mc_addr,
     &VAR_2->toc_buffer.kaddr);
  FUNC_0(&VAR_2->smu_buffer.handle,
     &VAR_2->smu_buffer.mc_addr,
     &VAR_2->smu_buffer.kaddr);
  FUNC_1(VAR_2);
 }

 return 0;
}
