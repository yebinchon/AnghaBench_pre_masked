
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct icp_qat_uof_initmem {int addr; int num_in_bytes; } ;
struct icp_qat_uclo_objhandle {unsigned int ustore_phy_size; TYPE_3__* ae_data; int * umem_init_tab; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;
struct TYPE_6__ {unsigned int slice_num; TYPE_2__* ae_slices; } ;
struct TYPE_5__ {TYPE_1__* encap_image; } ;
struct TYPE_4__ {unsigned int uwords_num; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*,unsigned int,int *) ;
 scalar_t__ FUNC_1 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_fw_loader_handle *VAR_1,
      struct icp_qat_uof_initmem *VAR_2)
{
 struct icp_qat_uclo_objhandle *VAR_3 = VAR_1->obj_handle;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_3->ustore_phy_size;
 if (FUNC_1(VAR_1, VAR_2, VAR_5, &VAR_4))
  return -VAR_0;
 if (FUNC_0(VAR_1, VAR_2, VAR_4,
         &VAR_3->umem_init_tab[VAR_4]))
  return -VAR_0;

 VAR_6 = (VAR_2->addr + VAR_2->num_in_bytes) >> 0x2;
 for (VAR_7 = 0; VAR_7 < VAR_3->ae_data[VAR_4].slice_num; VAR_7++) {
  if (VAR_3->ae_data[VAR_4].ae_slices[VAR_7].
      encap_image->uwords_num < VAR_6)
   VAR_3->ae_data[VAR_4].ae_slices[VAR_7].
   encap_image->uwords_num = VAR_6;
 }
 return 0;
}
