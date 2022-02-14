
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_suof_img_hdr {scalar_t__ css_simg; } ;
struct icp_qat_simg_ae_mode {unsigned int dev_type; unsigned int devmax_ver; unsigned int devmin_ver; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned int revision_id; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (struct icp_qat_fw_loader_handle*) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_fw_loader_handle *VAR_3,
          struct icp_qat_suof_img_hdr *VAR_4)
{
 struct icp_qat_simg_ae_mode *VAR_5 = ((void*)0);
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_3);
 VAR_5 = (struct icp_qat_simg_ae_mode *)VAR_4->css_simg;
 VAR_6 = VAR_1 |
    (VAR_2 & VAR_3->hal_handle->revision_id);
 if (VAR_5->dev_type != VAR_8) {
  FUNC_0("QAT: incompatible product type %x\n",
         VAR_5->dev_type);
  return -VAR_0;
 }
 VAR_7 = VAR_6 & 0xff;
 if ((VAR_7 > VAR_5->devmax_ver) ||
     (VAR_7 < VAR_5->devmin_ver)) {
  FUNC_0("QAT: incompatible device majver 0x%x\n", VAR_7);
  return -VAR_0;
 }
 return 0;
}
