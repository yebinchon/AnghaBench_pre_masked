
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_vnic_res_chunk {int type; } ;
struct usnic_ib_qp_grp {struct usnic_vnic_res_chunk** res_chunk_list; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;


 int VAR_0 ;
 struct usnic_vnic_res_chunk* FUNC_0 (int ) ;

struct usnic_vnic_res_chunk*
FUNC_1(struct usnic_ib_qp_grp *VAR_1,
    enum usnic_vnic_res_type VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1->res_chunk_list[VAR_3]; VAR_3++) {
  if (VAR_1->res_chunk_list[VAR_3]->type == VAR_2)
   return VAR_1->res_chunk_list[VAR_3];
 }

 return FUNC_0(-VAR_0);
}
