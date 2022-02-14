
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkey_index_qp_list {int qp_list_lock; } ;
struct ib_port_pkey {scalar_t__ state; int qp_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pkey_index_qp_list* FUNC_0 (struct ib_port_pkey*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ib_port_pkey *VAR_2)
{
 struct pkey_index_qp_list *VAR_3;

 if (VAR_2->state != VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_3->qp_list_lock);
 FUNC_1(&VAR_2->qp_list);
 FUNC_3(&VAR_3->qp_list_lock);




 VAR_2->state = VAR_1;
}
