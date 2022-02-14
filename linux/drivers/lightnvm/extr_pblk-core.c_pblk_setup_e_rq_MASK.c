
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int nr_ppas; int is_seq; int * bio; struct ppa_addr ppa_addr; int opcode; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pblk *VAR_1, struct nvm_rq *VAR_2,
       struct ppa_addr VAR_3)
{
 VAR_2->opcode = VAR_0;
 VAR_2->ppa_addr = VAR_3;
 VAR_2->nr_ppas = 1;
 VAR_2->is_seq = 1;
 VAR_2->bio = ((void*)0);
}
