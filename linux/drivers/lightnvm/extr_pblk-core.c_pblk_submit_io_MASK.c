
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int inflight_io; struct nvm_tgt_dev* dev; } ;
struct nvm_tgt_dev {int dummy; } ;
struct nvm_rq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvm_tgt_dev*,struct nvm_rq*,void*) ;
 scalar_t__ FUNC_2 (struct pblk*,struct nvm_rq*) ;

int FUNC_3(struct pblk *VAR_1, struct nvm_rq *VAR_2, void *VAR_3)
{
 struct nvm_tgt_dev *VAR_4 = VAR_1->dev;

 FUNC_0(&VAR_1->inflight_io);






 return FUNC_1(VAR_4, VAR_2, VAR_3);
}
