
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_id_table {int *** id; } ;
struct kvmppc_vcpu_e500 {struct vcpu_id_table* idt; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvmppc_vcpu_e500*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

unsigned int FUNC_6(struct kvmppc_vcpu_e500 *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct vcpu_id_table *VAR_6 = VAR_1->idt;
 int VAR_7;

 FUNC_0(VAR_2 >= 2);
 FUNC_0(VAR_3 >= VAR_0);
 FUNC_0(VAR_4 >= 2);

 VAR_7 = FUNC_4(&VAR_6->id[VAR_2][VAR_3][VAR_4]);

 while (VAR_7 <= 0) {

  VAR_7 = FUNC_5(&VAR_6->id[VAR_2][VAR_3][VAR_4]);
  if (VAR_7 <= 0) {
   FUNC_1();
   FUNC_3();
  }


  if (!VAR_5)
   FUNC_2(VAR_1);
 }

 return VAR_7;
}
