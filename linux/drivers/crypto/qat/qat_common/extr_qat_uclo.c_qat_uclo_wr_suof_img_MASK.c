
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_suof_img_hdr {scalar_t__ simg_len; scalar_t__ simg_buf; } ;
struct TYPE_2__ {unsigned int num_simgs; struct icp_qat_suof_img_hdr* simg_hdr; } ;
struct icp_qat_suof_handle {TYPE_1__ img_table; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_suof_handle* sobj_handle; } ;
struct icp_qat_fw_auth_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct icp_qat_fw_loader_handle*,struct icp_qat_fw_auth_desc*) ;
 scalar_t__ FUNC_1 (struct icp_qat_fw_loader_handle*,struct icp_qat_fw_auth_desc*) ;
 scalar_t__ FUNC_2 (struct icp_qat_fw_loader_handle*,char*,unsigned int,struct icp_qat_fw_auth_desc**) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,struct icp_qat_fw_auth_desc**) ;

__attribute__((used)) static int FUNC_4(struct icp_qat_fw_loader_handle *VAR_1)
{
 unsigned int VAR_2;
 struct icp_qat_fw_auth_desc *VAR_3 = ((void*)0);
 struct icp_qat_suof_handle *VAR_4 = VAR_1->sobj_handle;
 struct icp_qat_suof_img_hdr *VAR_5 = VAR_4->img_table.simg_hdr;

 for (VAR_2 = 0; VAR_2 < VAR_4->img_table.num_simgs; VAR_2++) {
  if (FUNC_2(VAR_1,
      (char *)VAR_5[VAR_2].simg_buf,
      (unsigned int)
      (VAR_5[VAR_2].simg_len),
      &VAR_3))
   goto wr_err;
  if (FUNC_0(VAR_1, VAR_3))
   goto wr_err;
  if (FUNC_1(VAR_1, VAR_3))
   goto wr_err;
  FUNC_3(VAR_1, &VAR_3);
 }
 return 0;
wr_err:
 FUNC_3(VAR_1, &VAR_3);
 return -VAR_0;
}
