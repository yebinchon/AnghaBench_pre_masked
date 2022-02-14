
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct icp_qat_suof_handle* simg_hdr; } ;
struct icp_qat_suof_handle {TYPE_1__ img_table; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_suof_handle* sobj_handle; } ;


 int FUNC_0 (struct icp_qat_suof_handle*) ;

__attribute__((used)) static void FUNC_1(struct icp_qat_fw_loader_handle *VAR_0)
{
 struct icp_qat_suof_handle *VAR_1 = VAR_0->sobj_handle;

 FUNC_0(VAR_1->img_table.simg_hdr);
 VAR_1->img_table.simg_hdr = ((void*)0);
 FUNC_0(VAR_0->sobj_handle);
 VAR_0->sobj_handle = ((void*)0);
}
