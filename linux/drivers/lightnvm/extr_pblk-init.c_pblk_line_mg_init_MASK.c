
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int nr_lines; struct pblk_emeta* vsc_list; struct pblk_emeta* bb_template; struct pblk_emeta* bb_aux; struct pblk_emeta** sline_meta; int bitmap_cache; int bitmap_pool; struct pblk_emeta** eline_meta; int gc_lock; int close_lock; int free_lock; int gc_low_list; int ** gc_lists; int gc_mid_list; int gc_high_list; int gc_werr_list; int emeta_list; int gc_empty_list; int gc_full_list; int bad_list; int corrupt_list; int free_list; int meta_bitmap; scalar_t__ nr_free_lines; scalar_t__ d_seq_nr; scalar_t__ l_seq_nr; int * data_line; int log_line; } ;
struct pblk_line_meta {int smeta_len; int sec_per_line; int * emeta_sec; int * emeta_len; int sec_bitmap_len; } ;
struct pblk_emeta {int buf; int nr_entries; } ;
struct pblk {struct pblk_line_meta lm; struct pblk_line_mgmt l_mg; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int num_chk; int all_luns; int ws_opt; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct pblk_emeta*,int,int) ;
 int FUNC_2 (int *,int) ;
 struct pblk_emeta FUNC_3 (int ) ;
 struct pblk_emeta* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct pblk_emeta*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int ,int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct pblk *VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_4->dev;
 struct nvm_geo *VAR_6 = &VAR_5->geo;
 struct pblk_line_mgmt *VAR_7 = &VAR_4->l_mg;
 struct pblk_line_meta *VAR_8 = &VAR_4->lm;
 int VAR_9, VAR_10;

 VAR_7->nr_lines = VAR_6->num_chk;
 VAR_7->log_line = *(VAR_7->data_line = ((void*)0));
 VAR_7->l_seq_nr = VAR_7->d_seq_nr = 0;
 VAR_7->nr_free_lines = 0;
 FUNC_2(&VAR_7->meta_bitmap, VAR_3);

 FUNC_0(&VAR_7->free_list);
 FUNC_0(&VAR_7->corrupt_list);
 FUNC_0(&VAR_7->bad_list);
 FUNC_0(&VAR_7->gc_full_list);
 FUNC_0(&VAR_7->gc_high_list);
 FUNC_0(&VAR_7->gc_mid_list);
 FUNC_0(&VAR_7->gc_low_list);
 FUNC_0(&VAR_7->gc_empty_list);
 FUNC_0(&VAR_7->gc_werr_list);

 FUNC_0(&VAR_7->emeta_list);

 VAR_7->gc_lists[0] = &VAR_7->gc_werr_list;
 VAR_7->gc_lists[1] = &VAR_7->gc_high_list;
 VAR_7->gc_lists[2] = &VAR_7->gc_mid_list;
 VAR_7->gc_lists[3] = &VAR_7->gc_low_list;

 FUNC_14(&VAR_7->free_lock);
 FUNC_14(&VAR_7->close_lock);
 FUNC_14(&VAR_7->gc_lock);

 VAR_7->vsc_list = FUNC_4(VAR_7->nr_lines, sizeof(__le32), VAR_2);
 if (!VAR_7->vsc_list)
  goto fail;

 VAR_7->bb_template = FUNC_11(VAR_8->sec_bitmap_len, VAR_2);
 if (!VAR_7->bb_template)
  goto fail_free_vsc_list;

 VAR_7->bb_aux = FUNC_11(VAR_8->sec_bitmap_len, VAR_2);
 if (!VAR_7->bb_aux)
  goto fail_free_bb_template;




 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7->sline_meta[VAR_9] = FUNC_6(VAR_8->smeta_len, VAR_2);
  if (!VAR_7->sline_meta[VAR_9])
   goto fail_free_smeta;
 }

 VAR_7->bitmap_cache = FUNC_7("pblk_lm_bitmap",
   VAR_8->sec_bitmap_len, 0, 0, ((void*)0));
 if (!VAR_7->bitmap_cache)
  goto fail_free_smeta;


 VAR_7->bitmap_pool = FUNC_12(VAR_3 * 2,
    VAR_7->bitmap_cache);
 if (!VAR_7->bitmap_pool)
  goto fail_destroy_bitmap_cache;




 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  struct pblk_emeta *VAR_11;

  VAR_11 = FUNC_6(sizeof(struct pblk_emeta), VAR_2);
  if (!VAR_11)
   goto fail_free_emeta;

  VAR_11->buf = FUNC_10(VAR_8->emeta_len[0], VAR_2);
  if (!VAR_11->buf) {
   FUNC_5(VAR_11);
   goto fail_free_emeta;
  }

  VAR_11->nr_entries = VAR_8->emeta_sec[0];
  VAR_7->eline_meta[VAR_9] = VAR_11;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->nr_lines; VAR_9++)
  VAR_7->vsc_list[VAR_9] = FUNC_3(VAR_0);

 VAR_10 = (VAR_6->all_luns) * VAR_6->ws_opt;
 for (VAR_9 = 0; VAR_9 < VAR_8->sec_per_line; VAR_9 += VAR_10)
  FUNC_1(VAR_7->bb_template, VAR_9, VAR_6->ws_opt);

 return 0;

fail_free_emeta:
 while (--VAR_9 >= 0) {
  FUNC_9(VAR_7->eline_meta[VAR_9]->buf);
  FUNC_5(VAR_7->eline_meta[VAR_9]);
 }

 FUNC_13(VAR_7->bitmap_pool);
fail_destroy_bitmap_cache:
 FUNC_8(VAR_7->bitmap_cache);
fail_free_smeta:
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_5(VAR_7->sline_meta[VAR_9]);
 FUNC_5(VAR_7->bb_aux);
fail_free_bb_template:
 FUNC_5(VAR_7->bb_template);
fail_free_vsc_list:
 FUNC_5(VAR_7->vsc_list);
fail:
 return -VAR_1;
}
