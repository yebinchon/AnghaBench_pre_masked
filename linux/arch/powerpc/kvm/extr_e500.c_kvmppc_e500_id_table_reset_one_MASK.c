
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcpu_id_table {TYPE_1__*** id; } ;
struct kvmppc_vcpu_e500 {struct vcpu_id_table* idt; } ;
struct TYPE_2__ {int * pentry; scalar_t__ val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct kvmppc_vcpu_e500*) ;

__attribute__((used)) static inline void FUNC_2(
          struct kvmppc_vcpu_e500 *VAR_1,
          int VAR_2, int VAR_3, int VAR_4)
{
 struct vcpu_id_table *VAR_5 = VAR_1->idt;

 FUNC_0(VAR_2 >= 2);
 FUNC_0(VAR_3 >= VAR_0);
 FUNC_0(VAR_4 >= 2);

 VAR_5->id[VAR_2][VAR_3][VAR_4].val = 0;
 VAR_5->id[VAR_2][VAR_3][VAR_4].pentry = ((void*)0);


 FUNC_1(VAR_1);
}
