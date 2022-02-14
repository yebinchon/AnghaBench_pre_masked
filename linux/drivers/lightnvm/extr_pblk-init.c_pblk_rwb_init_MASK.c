
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int rwb; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int mw_cunits; int all_luns; int ws_opt; int csecs; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned long,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pblk *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_1->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_3->mw_cunits * VAR_3->all_luns;
 VAR_5 = (FUNC_0(VAR_3->mw_cunits, VAR_3->ws_opt) + VAR_3->ws_opt)
        * VAR_3->all_luns;

 if (VAR_0 && (VAR_0 > VAR_5))
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_5;

 return FUNC_1(&VAR_1->rwb, VAR_4, VAR_6, VAR_3->csecs);
}
