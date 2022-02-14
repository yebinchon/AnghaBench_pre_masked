
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int dummy; } ;
struct nvm_rq {unsigned int nr_ppas; int is_seq; int * end_io; struct pblk* private; int opcode; } ;
typedef int nvm_end_io_fn ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*,struct nvm_rq*) ;

__attribute__((used)) static int FUNC_1(struct pblk *VAR_1, struct nvm_rq *VAR_2,
      unsigned int VAR_3, nvm_end_io_fn(*VAR_4))
{

 VAR_2->opcode = VAR_0;
 VAR_2->nr_ppas = VAR_3;
 VAR_2->is_seq = 1;
 VAR_2->private = VAR_1;
 VAR_2->end_io = VAR_4;

 return FUNC_0(VAR_1, VAR_2);
}
