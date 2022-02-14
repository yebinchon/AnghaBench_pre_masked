
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_uof_image {int ae_assigned; int fill_pattern; } ;
struct icp_qat_uclo_objhandle {TYPE_2__* ae_data; } ;
struct icp_qat_uclo_encapme {struct icp_qat_uclo_encap_page* page; struct icp_qat_uof_image* img_ptr; } ;
struct icp_qat_uclo_encap_page {unsigned int beg_addr_p; unsigned int micro_words_num; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_4__ {unsigned int eff_ustore_size; } ;
struct TYPE_3__ {unsigned char ae_max_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int * FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,unsigned int,int *) ;
 int FUNC_4 (unsigned char,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_fw_loader_handle *VAR_3,
    struct icp_qat_uclo_encapme *VAR_4)
{
 unsigned int VAR_5;
 struct icp_qat_uclo_encap_page *VAR_6;
 struct icp_qat_uof_image *VAR_7;
 unsigned char VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 struct icp_qat_uclo_objhandle *VAR_11 = VAR_3->obj_handle;
 uint64_t *VAR_12;

 VAR_7 = VAR_4->img_ptr;
 VAR_12 = FUNC_0(VAR_2, sizeof(uint64_t),
       VAR_1);
 if (!VAR_12)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_2(&VAR_12[VAR_5], &VAR_7->fill_pattern,
         sizeof(uint64_t));
 VAR_6 = VAR_4->page;

 for (VAR_8 = 0; VAR_8 < VAR_3->hal_handle->ae_max_num; VAR_8++) {
  if (!FUNC_4(VAR_8, (unsigned long *)&VAR_7->ae_assigned))
   continue;
  VAR_9 = VAR_11->ae_data[VAR_8].eff_ustore_size;
  VAR_10 = VAR_6->beg_addr_p + VAR_6->micro_words_num;

  FUNC_3(VAR_3, (unsigned char)VAR_8, 0,
      VAR_6->beg_addr_p, &VAR_12[0]);
  FUNC_3(VAR_3, (unsigned char)VAR_8, VAR_10,
      VAR_9 - VAR_10 + 1,
      &VAR_12[VAR_6->beg_addr_p]);
 }
 FUNC_1(VAR_12);
 return 0;
}
