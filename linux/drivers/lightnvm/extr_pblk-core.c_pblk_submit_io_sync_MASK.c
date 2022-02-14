
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int inflight_io; struct nvm_tgt_dev* dev; } ;
struct nvm_tgt_dev {int dummy; } ;
struct nvm_rq {scalar_t__ opcode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvm_tgt_dev*,struct nvm_rq*,void*) ;
 int FUNC_2 (struct pblk*,struct nvm_rq*) ;
 scalar_t__ FUNC_3 (struct pblk*,struct nvm_rq*) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(struct pblk *VAR_2, struct nvm_rq *VAR_3, void *VAR_4)
{
 struct nvm_tgt_dev *VAR_5 = VAR_2->dev;
 int VAR_6;

 FUNC_0(&VAR_2->inflight_io);






 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);

 if (FUNC_4() && !VAR_6 &&
     VAR_3->opcode == VAR_1)
  FUNC_2(VAR_2, VAR_3);

 return VAR_6;
}
