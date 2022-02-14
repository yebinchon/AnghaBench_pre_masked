
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct wa_counters {int dummy; } ;
struct pblk_line_mgmt {int nr_lines; } ;
struct pblk_line_meta {int* emeta_sec; int blk_bitmap_len; int* emeta_len; int dsec_per_line; int sec_per_line; int vsc_list_len; } ;
struct pblk {struct nvm_tgt_dev* dev; struct pblk_line_mgmt l_mg; struct pblk_line_meta lm; } ;
struct nvm_geo {int csecs; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct line_emeta {int dummy; } ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct pblk *VAR_0)
{
 struct pblk_line_meta *VAR_1 = &VAR_0->lm;
 struct pblk_line_mgmt *VAR_2 = &VAR_0->l_mg;
 struct nvm_tgt_dev *VAR_3 = VAR_0->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;


 VAR_1->emeta_sec[1] = FUNC_0(
   sizeof(struct line_emeta) + VAR_1->blk_bitmap_len +
   sizeof(struct wa_counters), VAR_4->csecs);
 VAR_1->emeta_len[1] = VAR_1->emeta_sec[1] * VAR_4->csecs;


 VAR_1->dsec_per_line = VAR_1->sec_per_line - VAR_1->emeta_sec[0];
 VAR_1->emeta_sec[2] = FUNC_0(VAR_1->dsec_per_line * sizeof(u64),
   VAR_4->csecs);
 VAR_1->emeta_len[2] = VAR_1->emeta_sec[2] * VAR_4->csecs;

 VAR_1->emeta_sec[3] = FUNC_0(VAR_2->nr_lines * sizeof(u32),
   VAR_4->csecs);
 VAR_1->emeta_len[3] = VAR_1->emeta_sec[3] * VAR_4->csecs;

 VAR_1->vsc_list_len = VAR_2->nr_lines * sizeof(u32);

 return (VAR_1->emeta_len[1] + VAR_1->emeta_len[2] + VAR_1->emeta_len[3]);
}
