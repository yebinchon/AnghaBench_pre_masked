
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {int dummy; } ;
struct nvm_rq {struct pblk* private; int * member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*,struct nvm_rq*) ;
 int FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk*,struct nvm_rq*,struct ppa_addr) ;
 int FUNC_3 (struct pblk*,struct nvm_rq*,int *) ;
 int FUNC_4 (int ,struct ppa_addr*,int ) ;

__attribute__((used)) static int FUNC_5(struct pblk *VAR_1, struct ppa_addr VAR_2)
{
 struct nvm_rq VAR_3 = {((void*)0)};
 int VAR_4;

 FUNC_4(FUNC_1(VAR_1), &VAR_2,
    VAR_0);

 FUNC_2(VAR_1, &VAR_3, VAR_2);




 VAR_4 = FUNC_3(VAR_1, &VAR_3, ((void*)0));
 VAR_3.private = VAR_1;
 FUNC_0(VAR_1, &VAR_3);

 return VAR_4;
}
