
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_tgt_dev {int dummy; } ;
struct nvm_rq {int (* end_io ) (struct nvm_rq*) ;struct nvm_tgt_dev* dev; } ;


 int FUNC_0 (struct nvm_tgt_dev*,struct nvm_rq*) ;
 int FUNC_1 (struct nvm_rq*) ;

void FUNC_2(struct nvm_rq *VAR_0)
{
 struct nvm_tgt_dev *VAR_1 = VAR_0->dev;


 if (VAR_1)
  FUNC_0(VAR_1, VAR_0);

 if (VAR_0->end_io)
  VAR_0->end_io(VAR_0);
}
