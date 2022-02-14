
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int FUNC_0 (struct pblk*,int) ;
 int FUNC_1 (struct nvm_geo*,struct ppa_addr) ;
 scalar_t__ FUNC_2 (int,unsigned long*) ;

void FUNC_3(struct pblk *VAR_0, struct ppa_addr VAR_1,
    unsigned long *VAR_2)
{
 struct nvm_tgt_dev *VAR_3 = VAR_0->dev;
 struct nvm_geo *VAR_4 = &VAR_3->geo;
 int VAR_5 = FUNC_1(VAR_4, VAR_1);




 if (FUNC_2(VAR_5, VAR_2))
  return;

 FUNC_0(VAR_0, VAR_5);
}
