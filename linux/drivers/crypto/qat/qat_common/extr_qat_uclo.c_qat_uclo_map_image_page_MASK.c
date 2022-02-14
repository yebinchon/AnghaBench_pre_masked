
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_uword_block {scalar_t__ uword_offset; } ;
struct icp_qat_uof_objtable {int entry_num; } ;
struct icp_qat_uof_image {int dummy; } ;
struct icp_qat_uof_encap_obj {int beg_uof; } ;
struct icp_qat_uof_code_page {int code_area_offset; int beg_addr_p; int beg_addr_v; int page_region; int def_page; } ;
struct icp_qat_uof_code_area {scalar_t__ uword_block_tab; int micro_words_num; } ;
struct icp_qat_uclo_encap_uwblock {scalar_t__ micro_words; } ;
struct icp_qat_uclo_encap_page {int uwblock_num; struct icp_qat_uclo_encap_uwblock* uwblock; int micro_words_num; int beg_addr_p; int beg_addr_v; int page_region; int def_page; } ;



__attribute__((used)) static void FUNC_0(struct icp_qat_uof_encap_obj
         *VAR_0,
         struct icp_qat_uof_image *VAR_1,
         struct icp_qat_uclo_encap_page *VAR_2)
{
 struct icp_qat_uof_code_page *VAR_3;
 struct icp_qat_uof_code_area *VAR_4;
 struct icp_qat_uof_objtable *VAR_5;
 struct icp_qat_uof_uword_block *VAR_6;
 int VAR_7;

 VAR_3 = (struct icp_qat_uof_code_page *)
   ((char *)VAR_1 + sizeof(struct icp_qat_uof_image));
 VAR_2->def_page = VAR_3->def_page;
 VAR_2->page_region = VAR_3->page_region;
 VAR_2->beg_addr_v = VAR_3->beg_addr_v;
 VAR_2->beg_addr_p = VAR_3->beg_addr_p;
 VAR_4 = (struct icp_qat_uof_code_area *)(VAR_0->beg_uof +
      VAR_3->code_area_offset);
 VAR_2->micro_words_num = VAR_4->micro_words_num;
 VAR_5 = (struct icp_qat_uof_objtable *)
     (VAR_0->beg_uof +
     VAR_4->uword_block_tab);
 VAR_2->uwblock_num = VAR_5->entry_num;
 VAR_6 = (struct icp_qat_uof_uword_block *)((char *)VAR_5 +
   sizeof(struct icp_qat_uof_objtable));
 VAR_2->uwblock = (struct icp_qat_uclo_encap_uwblock *)VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_5->entry_num; VAR_7++)
  VAR_2->uwblock[VAR_7].micro_words =
  (uintptr_t)VAR_0->beg_uof + VAR_6[VAR_7].uword_offset;
}
