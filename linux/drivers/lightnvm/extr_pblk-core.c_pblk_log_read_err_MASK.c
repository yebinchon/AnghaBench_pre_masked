
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int read_failed; int read_high_ecc; int read_empty; } ;
struct nvm_rq {int error; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct pblk*,char*,int) ;
 int FUNC_2 (struct pblk*,struct nvm_rq*,int) ;

void FUNC_3(struct pblk *VAR_1, struct nvm_rq *VAR_2)
{

 if (VAR_2->error == VAR_0) {
  FUNC_0(&VAR_1->read_empty);
  return;
 }

 switch (VAR_2->error) {
 case 128:
  FUNC_0(&VAR_1->read_high_ecc);
  break;
 case 129:
 case 130:
  FUNC_0(&VAR_1->read_failed);
  break;
 default:
  FUNC_1(VAR_1, "unknown read error:%d\n", VAR_2->error);
 }



}
