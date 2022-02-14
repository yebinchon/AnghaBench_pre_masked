
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_rq {struct pblk* private; int end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvm_rq* FUNC_0 (struct pblk*,int ) ;
 int FUNC_1 (struct pblk*) ;
 int VAR_2 ;
 int FUNC_2 (struct pblk*,char*,int ,int ) ;
 int FUNC_3 (struct ppa_addr) ;
 int FUNC_4 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_5 (struct pblk*,struct nvm_rq*,struct ppa_addr) ;
 int FUNC_6 (struct pblk*,struct nvm_rq*,int *) ;
 int FUNC_7 (int ,struct ppa_addr*,int ) ;

int FUNC_8(struct pblk *VAR_3, struct ppa_addr VAR_4)
{
 struct nvm_rq *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1);

 FUNC_5(VAR_3, VAR_5, VAR_4);

 VAR_5->end_io = VAR_2;
 VAR_5->private = VAR_3;

 FUNC_7(FUNC_1(VAR_3),
    &VAR_4, VAR_0);




 VAR_6 = FUNC_6(VAR_3, VAR_5, ((void*)0));
 if (VAR_6) {
  struct nvm_tgt_dev *VAR_7 = VAR_3->dev;
  struct nvm_geo *VAR_8 = &VAR_7->geo;

  FUNC_2(VAR_3, "could not async erase line:%d,blk:%d\n",
     FUNC_3(VAR_4),
     FUNC_4(VAR_8, VAR_4));
 }

 return VAR_6;
}
