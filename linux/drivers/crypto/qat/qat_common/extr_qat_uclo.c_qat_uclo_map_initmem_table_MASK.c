
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_initmem {int dummy; } ;
struct icp_qat_uof_encap_obj {scalar_t__ beg_uof; int obj_hdr; } ;
struct icp_qat_uof_chunkhdr {scalar_t__ offset; } ;
struct icp_qat_uclo_init_mem_table {struct icp_qat_uof_initmem* init_mem; int entry_num; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 struct icp_qat_uof_chunkhdr* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct icp_qat_uof_encap_obj *VAR_1,
      struct icp_qat_uclo_init_mem_table *VAR_2)
{
 struct icp_qat_uof_chunkhdr *VAR_3;

 VAR_3 = FUNC_1(VAR_1->obj_hdr,
     VAR_0, ((void*)0));
 if (VAR_3) {
  FUNC_0(&VAR_2->entry_num, VAR_1->beg_uof +
   VAR_3->offset, sizeof(unsigned int));
  VAR_2->init_mem = (struct icp_qat_uof_initmem *)
  (VAR_1->beg_uof + VAR_3->offset +
  sizeof(unsigned int));
 }
}
