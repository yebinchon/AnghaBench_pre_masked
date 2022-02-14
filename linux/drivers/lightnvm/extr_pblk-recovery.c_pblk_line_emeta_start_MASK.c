
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line_meta {unsigned int* emeta_sec; int sec_per_line; } ;
struct pblk_line {int blk_bitmap; int id; } ;
struct pblk {struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 struct ppa_addr FUNC_0 (struct pblk*,int ,int ) ;
 int FUNC_1 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static u64 FUNC_3(struct pblk *VAR_0, struct pblk_line *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 struct pblk_line_meta *VAR_4 = &VAR_0->lm;
 unsigned int VAR_5;
 u64 VAR_6;
 struct ppa_addr VAR_7;
 int VAR_8;

 VAR_5 = VAR_4->emeta_sec[0];
 VAR_6 = VAR_4->sec_per_line;

 while (VAR_5) {
  VAR_6--;
  VAR_7 = FUNC_0(VAR_0, VAR_6, VAR_1->id);
  VAR_8 = FUNC_1(VAR_3, VAR_7);
  if (!FUNC_2(VAR_8, VAR_1->blk_bitmap))
   VAR_5--;
 }

 return VAR_6;
}
