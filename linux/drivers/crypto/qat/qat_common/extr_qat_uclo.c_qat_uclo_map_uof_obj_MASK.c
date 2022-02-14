
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_filehdr {int dummy; } ;
struct icp_qat_uclo_objhandle {struct icp_qat_uclo_objhandle* obj_buf; struct icp_qat_uclo_objhandle* obj_hdr; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct icp_qat_uclo_objhandle*) ;
 struct icp_qat_uclo_objhandle* FUNC_1 (void*,int,int ) ;
 struct icp_qat_uclo_objhandle* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct icp_qat_uof_filehdr*) ;
 struct icp_qat_uclo_objhandle* FUNC_5 (char*,struct icp_qat_uof_filehdr*,int ) ;
 scalar_t__ FUNC_6 (struct icp_qat_fw_loader_handle*) ;

__attribute__((used)) static int FUNC_7(struct icp_qat_fw_loader_handle *VAR_3,
    void *VAR_4, int VAR_5)
{
 struct icp_qat_uof_filehdr *VAR_6;
 struct icp_qat_uclo_objhandle *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->obj_buf = FUNC_1(VAR_4, VAR_5, VAR_1);
 if (!VAR_7->obj_buf)
  goto out_objbuf_err;
 VAR_6 = (struct icp_qat_uof_filehdr *)VAR_7->obj_buf;
 if (FUNC_4(VAR_6))
  goto out_objhdr_err;
 VAR_7->obj_hdr = FUNC_5((char *)VAR_7->obj_buf, VAR_6,
          VAR_2);
 if (!VAR_7->obj_hdr) {
  FUNC_3("QAT: object file chunk is null\n");
  goto out_objhdr_err;
 }
 VAR_3->obj_handle = VAR_7;
 if (FUNC_6(VAR_3))
  goto out_overlay_obj_err;
 return 0;

out_overlay_obj_err:
 VAR_3->obj_handle = ((void*)0);
 FUNC_0(VAR_7->obj_hdr);
out_objhdr_err:
 FUNC_0(VAR_7->obj_buf);
out_objbuf_err:
 FUNC_0(VAR_7);
 return -VAR_0;
}
