
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_uclo_objhandle {int uimage_num; struct icp_qat_uclo_encapme* ae_uimage; } ;
struct icp_qat_uclo_encapme {TYPE_1__* page; scalar_t__ uwords_num; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_2__ {scalar_t__ micro_words_num; scalar_t__ beg_addr_p; } ;



__attribute__((used)) static void FUNC_0(struct icp_qat_fw_loader_handle *VAR_0)
{
 struct icp_qat_uclo_objhandle *VAR_1 = VAR_0->obj_handle;
 struct icp_qat_uclo_encapme *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->uimage_num; VAR_3++) {
  VAR_2 = &VAR_1->ae_uimage[VAR_3];
  VAR_2->uwords_num = VAR_2->page->beg_addr_p +
     VAR_2->page->micro_words_num;
 }
}
