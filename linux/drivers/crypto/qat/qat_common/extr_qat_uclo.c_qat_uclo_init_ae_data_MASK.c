
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_uclo_page {int * region; int encap_page; } ;
struct icp_qat_uclo_objhandle {int ustore_phy_size; struct icp_qat_uclo_encapme* ae_uimage; struct icp_qat_uclo_aedata* ae_data; } ;
struct icp_qat_uclo_encapme {int page; TYPE_1__* img_ptr; } ;
struct icp_qat_uclo_aeslice {int * region; struct icp_qat_uclo_page* page; scalar_t__ ctx_mask_assigned; struct icp_qat_uclo_encapme* encap_image; } ;
struct icp_qat_uclo_aedata {size_t slice_num; int eff_ustore_size; struct icp_qat_uclo_aeslice* ae_slices; } ;
struct TYPE_2__ {scalar_t__ ctx_assigned; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_uclo_objhandle *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 struct icp_qat_uclo_aedata *VAR_5;
 struct icp_qat_uclo_encapme *VAR_6;
 struct icp_qat_uclo_page *VAR_7 = ((void*)0);
 struct icp_qat_uclo_aeslice *VAR_8 = ((void*)0);

 VAR_5 = &VAR_2->ae_data[VAR_3];
 VAR_6 = &VAR_2->ae_uimage[VAR_4];
 VAR_8 = &VAR_5->ae_slices[VAR_5->slice_num];
 VAR_8->encap_image = VAR_6;

 if (VAR_6->img_ptr) {
  VAR_8->ctx_mask_assigned =
     VAR_6->img_ptr->ctx_assigned;
  VAR_5->eff_ustore_size = VAR_2->ustore_phy_size;
 } else {
  VAR_8->ctx_mask_assigned = 0;
 }
 VAR_8->region = FUNC_1(sizeof(*VAR_8->region), VAR_1);
 if (!VAR_8->region)
  return -VAR_0;
 VAR_8->page = FUNC_1(sizeof(*VAR_8->page), VAR_1);
 if (!VAR_8->page)
  goto out_err;
 VAR_7 = VAR_8->page;
 VAR_7->encap_page = VAR_6->page;
 VAR_8->page->region = VAR_8->region;
 VAR_5->slice_num++;
 return 0;
out_err:
 FUNC_0(VAR_8->region);
 VAR_8->region = ((void*)0);
 return -VAR_0;
}
