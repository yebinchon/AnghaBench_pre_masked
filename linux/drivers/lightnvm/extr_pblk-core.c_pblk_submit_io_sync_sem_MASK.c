
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int dummy; } ;


 struct ppa_addr* FUNC_0 (struct nvm_rq*) ;
 int FUNC_1 (struct pblk*,struct ppa_addr) ;
 int FUNC_2 (struct pblk*,struct nvm_rq*,void*) ;
 int FUNC_3 (struct pblk*,struct ppa_addr) ;

__attribute__((used)) static int FUNC_4(struct pblk *VAR_0, struct nvm_rq *VAR_1,
       void *VAR_2)
{
 struct ppa_addr *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_1(VAR_0, VAR_3[0]);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_0, VAR_3[0]);

 return VAR_4;
}
