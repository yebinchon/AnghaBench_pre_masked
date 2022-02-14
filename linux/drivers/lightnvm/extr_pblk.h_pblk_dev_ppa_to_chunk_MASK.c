
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line {struct nvm_chk_meta* chks; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int dummy; } ;


 struct pblk_line* FUNC_0 (struct pblk*,struct ppa_addr) ;
 int FUNC_1 (struct nvm_geo*,struct ppa_addr) ;

__attribute__((used)) static inline struct nvm_chk_meta *FUNC_2(struct pblk *VAR_0,
       struct ppa_addr VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 struct pblk_line *VAR_4 = FUNC_0(VAR_0, VAR_1);
 int VAR_5 = FUNC_1(VAR_3, VAR_1);

 return &VAR_4->chks[VAR_5];
}
