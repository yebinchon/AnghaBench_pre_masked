
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line {int left_msecs; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int mw_cunits; int all_luns; int ws_opt; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;



__attribute__((used)) static int FUNC_0(struct pblk *VAR_0, struct pblk_line *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 int VAR_4 = VAR_3->mw_cunits * VAR_3->all_luns * VAR_3->ws_opt;

 return (VAR_4 > VAR_1->left_msecs) ? VAR_1->left_msecs : VAR_4;
}
