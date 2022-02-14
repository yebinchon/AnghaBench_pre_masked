
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esca_block {int * cpu; int * mcn; int ipte_control; } ;
struct bsca_block {int * cpu; int mcn; int ipte_control; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct esca_block *VAR_1, struct bsca_block *VAR_2)
{
 int VAR_3;

 VAR_1->ipte_control = VAR_2->ipte_control;
 VAR_1->mcn[0] = VAR_2->mcn;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_1->cpu[VAR_3], &VAR_2->cpu[VAR_3]);
}
