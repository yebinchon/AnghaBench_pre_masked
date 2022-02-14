
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {scalar_t__ ppa; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int all_chunks; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvm_chk_meta* FUNC_0 (int ) ;
 int FUNC_1 (struct nvm_tgt_dev*,struct ppa_addr,int,struct nvm_chk_meta*) ;
 int FUNC_2 (struct nvm_chk_meta*) ;
 struct nvm_chk_meta* FUNC_3 (unsigned long) ;

struct nvm_chk_meta *FUNC_4(struct pblk *VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_2->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 struct nvm_chk_meta *VAR_5;
 struct ppa_addr VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6.ppa = 0;

 VAR_7 = VAR_4->all_chunks * sizeof(*VAR_5);
 VAR_5 = FUNC_3(VAR_7);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_4->all_chunks, VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_5);
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
