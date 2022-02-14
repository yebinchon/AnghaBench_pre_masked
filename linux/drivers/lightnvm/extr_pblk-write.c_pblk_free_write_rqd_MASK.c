
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_c_ctx {scalar_t__ nr_padded; int nr_valid; } ;
struct pblk {int dummy; } ;
struct nvm_rq {struct bio* bio; } ;
struct bio {int dummy; } ;


 struct pblk_c_ctx* FUNC_0 (struct nvm_rq*) ;
 int FUNC_1 (struct pblk*,struct bio*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pblk *VAR_0, struct nvm_rq *VAR_1)
{
 struct pblk_c_ctx *VAR_2 = FUNC_0(VAR_1);
 struct bio *VAR_3 = VAR_1->bio;

 if (VAR_2->nr_padded)
  FUNC_1(VAR_0, VAR_3, VAR_2->nr_valid,
       VAR_2->nr_padded);
}
