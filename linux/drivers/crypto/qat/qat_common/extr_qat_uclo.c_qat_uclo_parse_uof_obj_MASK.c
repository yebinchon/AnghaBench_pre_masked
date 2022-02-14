
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_uof_objhdr {int dummy; } ;
struct TYPE_8__ {struct icp_qat_uof_objhdr* obj_hdr; scalar_t__ beg_uof; } ;
struct icp_qat_uclo_objhandle {int uword_in_bytes; int prod_rev; unsigned int uimage_num; int uword_buf; TYPE_2__* ae_uimage; int init_mem_tab; TYPE_4__ encap_uof_obj; int str_table; TYPE_3__* obj_hdr; int ustore_phy_size; int prod_type; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_7__ {scalar_t__ file_buff; } ;
struct TYPE_6__ {int page; } ;
struct TYPE_5__ {int revision_id; int ae_max_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct icp_qat_uclo_objhandle*) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*) ;
 scalar_t__ FUNC_6 (struct icp_qat_fw_loader_handle*,int ) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_3__*,int ,int *) ;
 unsigned int FUNC_9 (struct icp_qat_uclo_objhandle*,TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (struct icp_qat_fw_loader_handle*) ;

__attribute__((used)) static int FUNC_11(struct icp_qat_fw_loader_handle *VAR_11)
{
 struct icp_qat_uclo_objhandle *VAR_12 = VAR_11->obj_handle;
 unsigned int VAR_13;

 VAR_12->encap_uof_obj.beg_uof = VAR_12->obj_hdr->file_buff;
 VAR_12->encap_uof_obj.obj_hdr = (struct icp_qat_uof_objhdr *)
          VAR_12->obj_hdr->file_buff;
 VAR_12->uword_in_bytes = 6;
 VAR_12->prod_type = FUNC_4(VAR_11);
 VAR_12->prod_rev = VAR_8 |
   (VAR_9 & VAR_11->hal_handle->revision_id);
 if (FUNC_3(VAR_12)) {
  FUNC_2("QAT: UOF incompatible\n");
  return -VAR_1;
 }
 VAR_12->uword_buf = FUNC_0(VAR_10, sizeof(uint64_t),
     VAR_3);
 if (!VAR_12->uword_buf)
  return -VAR_2;
 VAR_12->ustore_phy_size = VAR_6;
 if (!VAR_12->obj_hdr->file_buff ||
     !FUNC_8(VAR_12->obj_hdr, VAR_7,
        &VAR_12->str_table)) {
  FUNC_2("QAT: UOF doesn't have effective images\n");
  goto out_err;
 }
 VAR_12->uimage_num =
  FUNC_9(VAR_12, VAR_12->ae_uimage,
        VAR_4 * VAR_5);
 if (!VAR_12->uimage_num)
  goto out_err;
 if (FUNC_6(VAR_11, VAR_11->hal_handle->ae_max_num)) {
  FUNC_2("QAT: Bad object\n");
  goto out_check_uof_aemask_err;
 }
 FUNC_5(VAR_11);
 FUNC_7(&VAR_12->encap_uof_obj,
       &VAR_12->init_mem_tab);
 if (FUNC_10(VAR_11))
  goto out_check_uof_aemask_err;
 return 0;
out_check_uof_aemask_err:
 for (VAR_13 = 0; VAR_13 < VAR_12->uimage_num; VAR_13++)
  FUNC_1(VAR_12->ae_uimage[VAR_13].page);
out_err:
 FUNC_1(VAR_12->uword_buf);
 return -VAR_0;
}
