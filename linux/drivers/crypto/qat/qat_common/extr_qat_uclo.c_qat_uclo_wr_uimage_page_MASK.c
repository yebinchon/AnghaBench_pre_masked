
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct icp_qat_uof_image {int ctx_assigned; int entry_address; int ae_assigned; int ae_mode; } ;
struct icp_qat_uclo_page {TYPE_4__* encap_page; } ;
struct icp_qat_uclo_objhandle {TYPE_3__* ae_data; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_8__ {int def_page; } ;
struct TYPE_7__ {unsigned int slice_num; TYPE_2__* ae_slices; } ;
struct TYPE_6__ {int ctx_mask_assigned; struct icp_qat_uclo_page** cur_page; struct icp_qat_uclo_page* page; } ;
struct TYPE_5__ {unsigned char ae_max_num; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int,int ) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,TYPE_4__*,unsigned char) ;
 int FUNC_4 (unsigned char,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct icp_qat_fw_loader_handle *VAR_1,
        struct icp_qat_uof_image *VAR_2)
{
 struct icp_qat_uclo_objhandle *VAR_3 = VAR_1->obj_handle;
 unsigned int VAR_4, VAR_5;
 struct icp_qat_uclo_page *VAR_6;
 unsigned char VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_2->ae_mode) == VAR_0)
  VAR_4 = 0xff;
 else
  VAR_4 = 0x55;


 for (VAR_7 = 0; VAR_7 < VAR_1->hal_handle->ae_max_num; VAR_7++) {
  if (!FUNC_4(VAR_7, (unsigned long *)&VAR_2->ae_assigned))
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_3->ae_data[VAR_7].slice_num; VAR_5++) {
   if (VAR_2->ctx_assigned & VAR_3->ae_data[VAR_7].
       ae_slices[VAR_5].ctx_mask_assigned)
    break;
  }
  if (VAR_5 >= VAR_3->ae_data[VAR_7].slice_num)
   continue;
  VAR_6 = VAR_3->ae_data[VAR_7].ae_slices[VAR_5].page;
  if (!VAR_6->encap_page->def_page)
   continue;
  FUNC_3(VAR_1, VAR_6->encap_page, VAR_7);

  VAR_6 = VAR_3->ae_data[VAR_7].ae_slices[VAR_5].page;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_3->ae_data[VAR_7].ae_slices[VAR_5].cur_page[VAR_8] =
     (VAR_4 & (1 << VAR_8)) ? VAR_6 : ((void*)0);
  FUNC_1(VAR_1, (unsigned char)VAR_7,
         VAR_2->ctx_assigned);
  FUNC_2(VAR_1, (unsigned char)VAR_7, VAR_2->ctx_assigned,
          VAR_2->entry_address);
 }
}
