
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_rq {scalar_t__ opcode; scalar_t__ is_seq; } ;
struct nvm_geo {scalar_t__ version; int pln_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct nvm_geo *VAR_5, struct nvm_rq *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5->version == VAR_2)
  return 0;

 if (VAR_6->is_seq)
  VAR_7 |= VAR_5->pln_mode >> 1;

 if (VAR_6->opcode == VAR_3)
  VAR_7 |= (VAR_0 | VAR_1);
 else if (VAR_6->opcode == VAR_4)
  VAR_7 |= VAR_0;

 return VAR_7;
}
