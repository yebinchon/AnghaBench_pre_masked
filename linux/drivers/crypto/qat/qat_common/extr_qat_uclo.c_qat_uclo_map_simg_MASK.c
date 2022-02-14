
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_suof_objhdr {int img_length; } ;
struct icp_qat_suof_img_hdr {unsigned long simg_name; unsigned long appmeta_data; int fw_type; int ae_mask; scalar_t__ css_simg; scalar_t__ css_signature; scalar_t__ css_key; scalar_t__ css_header; scalar_t__ simg_buf; int simg_len; } ;
struct icp_qat_suof_handle {scalar_t__ suof_buf; } ;
struct icp_qat_suof_chunk_hdr {scalar_t__ offset; } ;
struct icp_qat_simg_ae_mode {int fw_type; int appmeta_data; int simg_name; int ae_mask; } ;
struct icp_qat_css_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct icp_qat_suof_handle *VAR_3,
         struct icp_qat_suof_img_hdr *VAR_4,
         struct icp_qat_suof_chunk_hdr *VAR_5)
{
 struct icp_qat_simg_ae_mode *VAR_6;
 struct icp_qat_suof_objhdr *VAR_7;

 VAR_4->simg_buf = (VAR_3->suof_buf +
       VAR_5->offset +
       sizeof(*VAR_7));
 VAR_4->simg_len = ((struct icp_qat_suof_objhdr *)(uintptr_t)
      (VAR_3->suof_buf +
       VAR_5->offset))->img_length;

 VAR_4->css_header = VAR_4->simg_buf;
 VAR_4->css_key = (VAR_4->css_header +
     sizeof(struct icp_qat_css_hdr));
 VAR_4->css_signature = VAR_4->css_key +
          VAR_1 +
          VAR_0;
 VAR_4->css_simg = VAR_4->css_signature +
     VAR_2;

 VAR_6 = (struct icp_qat_simg_ae_mode *)(VAR_4->css_simg);
 VAR_4->ae_mask = VAR_6->ae_mask;
 VAR_4->simg_name = (unsigned long)&VAR_6->simg_name;
 VAR_4->appmeta_data = (unsigned long)&VAR_6->appmeta_data;
 VAR_4->fw_type = VAR_6->fw_type;
}
