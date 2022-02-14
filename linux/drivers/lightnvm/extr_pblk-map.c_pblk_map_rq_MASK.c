
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {int min_write_pgs; } ;
struct nvm_rq {int nr_ppas; } ;


 struct ppa_addr* FUNC_0 (struct nvm_rq*) ;
 void* FUNC_1 (struct pblk*,void*,int) ;
 void* FUNC_2 (struct pblk*,struct nvm_rq*) ;
 int FUNC_3 (struct pblk*,unsigned int,struct ppa_addr*,unsigned long*,void*,unsigned int) ;

int FUNC_4(struct pblk *VAR_0, struct nvm_rq *VAR_1, unsigned int VAR_2,
   unsigned long *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 void *VAR_6 = FUNC_2(VAR_0, VAR_1);
 void *VAR_7;
 struct ppa_addr *VAR_8 = FUNC_0(VAR_1);
 unsigned int VAR_9;
 int VAR_10 = VAR_0->min_write_pgs;
 int VAR_11;
 int VAR_12;

 for (VAR_11 = VAR_5; VAR_11 < VAR_1->nr_ppas; VAR_11 += VAR_10) {
  VAR_9 = (VAR_11 + VAR_10 > VAR_4) ? (VAR_4 % VAR_10) : VAR_10;
  VAR_7 = FUNC_1(VAR_0, VAR_6, VAR_11);

  VAR_12 = FUNC_3(VAR_0, VAR_2 + VAR_11, &VAR_8[VAR_11],
     VAR_3, VAR_7, VAR_9);
  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
