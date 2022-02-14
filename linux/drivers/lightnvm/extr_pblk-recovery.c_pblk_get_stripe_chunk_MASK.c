
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_lun {struct ppa_addr bppa; } ;
struct pblk_line {struct nvm_chk_meta* chks; } ;
struct pblk {struct pblk_lun* luns; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int dummy; } ;


 int FUNC_0 (struct nvm_geo*,struct ppa_addr) ;

__attribute__((used)) static struct nvm_chk_meta *FUNC_1(struct pblk *VAR_0,
        struct pblk_line *VAR_1,
        int VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_0->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 struct pblk_lun *VAR_5;
 struct ppa_addr VAR_6;
 int VAR_7;

 VAR_5 = &VAR_0->luns[VAR_2];
 VAR_6 = VAR_5->bppa;
 VAR_7 = FUNC_0(VAR_4, VAR_6);

 return &VAR_1->chks[VAR_7];
}
