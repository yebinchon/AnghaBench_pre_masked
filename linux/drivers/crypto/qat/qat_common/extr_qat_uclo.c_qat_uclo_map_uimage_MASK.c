
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_uof_sbreak {int dummy; } ;
struct icp_qat_uof_objtable {int entry_num; } ;
struct icp_qat_uof_init_regsym {int dummy; } ;
struct icp_qat_uof_image {scalar_t__ sbreak_tab; scalar_t__ init_reg_sym_tab; scalar_t__ reg_tab_offset; } ;
struct icp_qat_uof_encap_obj {scalar_t__ beg_uof; int obj_hdr; } ;
struct icp_qat_uof_chunkhdr {scalar_t__ offset; } ;
struct icp_qat_uof_ae_reg {int dummy; } ;
struct icp_qat_uclo_objhandle {TYPE_1__* obj_hdr; struct icp_qat_uof_encap_obj encap_uof_obj; } ;
struct icp_qat_uclo_encapme {int page; struct icp_qat_uof_image* img_ptr; struct icp_qat_uof_sbreak* sbreak; int sbreak_num; struct icp_qat_uof_init_regsym* init_regsym; int init_regsym_num; struct icp_qat_uof_ae_reg* ae_reg; int ae_reg_num; } ;
struct icp_qat_uclo_encap_page {int dummy; } ;
struct TYPE_2__ {scalar_t__ file_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct icp_qat_uof_encap_obj*,struct icp_qat_uof_image*) ;
 struct icp_qat_uof_chunkhdr* FUNC_3 (int ,int ,struct icp_qat_uof_chunkhdr*) ;
 int FUNC_4 (struct icp_qat_uof_encap_obj*,struct icp_qat_uof_image*,int ) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_uclo_objhandle *VAR_2,
          struct icp_qat_uclo_encapme *VAR_3,
          int VAR_4)
{
 int VAR_5, VAR_6;
 struct icp_qat_uof_chunkhdr *VAR_7 = ((void*)0);
 struct icp_qat_uof_image *VAR_8;
 struct icp_qat_uof_objtable *VAR_9;
 struct icp_qat_uof_objtable *VAR_10;
 struct icp_qat_uof_objtable *VAR_11;
 struct icp_qat_uof_encap_obj *VAR_12 =
     &VAR_2->encap_uof_obj;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = FUNC_3(VAR_12->obj_hdr,
      VAR_1, VAR_7);
  if (!VAR_7)
   break;
  VAR_8 = (struct icp_qat_uof_image *)(VAR_12->beg_uof +
           VAR_7->offset);
  VAR_9 = (struct icp_qat_uof_objtable *)
      (VAR_8->reg_tab_offset +
      VAR_2->obj_hdr->file_buff);
  VAR_3[VAR_6].ae_reg_num = VAR_9->entry_num;
  VAR_3[VAR_6].ae_reg = (struct icp_qat_uof_ae_reg *)
   (((char *)VAR_9) +
   sizeof(struct icp_qat_uof_objtable));
  VAR_10 = (struct icp_qat_uof_objtable *)
       (VAR_8->init_reg_sym_tab +
       VAR_2->obj_hdr->file_buff);
  VAR_3[VAR_6].init_regsym_num = VAR_10->entry_num;
  VAR_3[VAR_6].init_regsym = (struct icp_qat_uof_init_regsym *)
   (((char *)VAR_10) +
   sizeof(struct icp_qat_uof_objtable));
  VAR_11 = (struct icp_qat_uof_objtable *)
   (VAR_8->sbreak_tab + VAR_2->obj_hdr->file_buff);
  VAR_3[VAR_6].sbreak_num = VAR_11->entry_num;
  VAR_3[VAR_6].sbreak = (struct icp_qat_uof_sbreak *)
          (((char *)VAR_11) +
          sizeof(struct icp_qat_uof_objtable));
  VAR_3[VAR_6].img_ptr = VAR_8;
  if (FUNC_2(VAR_12, VAR_8))
   goto out_err;
  VAR_3[VAR_6].page =
   FUNC_1(sizeof(struct icp_qat_uclo_encap_page),
    VAR_0);
  if (!VAR_3[VAR_6].page)
   goto out_err;
  FUNC_4(VAR_12, VAR_8,
     VAR_3[VAR_6].page);
 }
 return VAR_6;
out_err:
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_0(VAR_3[VAR_5].page);
 return 0;
}
