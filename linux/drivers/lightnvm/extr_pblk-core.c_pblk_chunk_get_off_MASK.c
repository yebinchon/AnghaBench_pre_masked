
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int grp; int pu; int chk; } ;
struct ppa_addr {TYPE_1__ m; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int num_chk; int num_lun; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int dummy; } ;



struct nvm_chk_meta *FUNC_0(struct pblk *VAR_0,
           struct nvm_chk_meta *VAR_1,
           struct ppa_addr VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_0->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 int VAR_5 = VAR_2.m.grp * VAR_4->num_chk * VAR_4->num_lun;
 int VAR_6 = VAR_2.m.pu * VAR_4->num_chk;
 int VAR_7 = VAR_2.m.chk;

 return VAR_1 + VAR_5 + VAR_6 + VAR_7;
}
