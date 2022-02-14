
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_node {int req_list; int id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct icc_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct icc_node* FUNC_6 (int) ;

void FUNC_7(int VAR_2)
{
 struct icc_node *VAR_3;

 FUNC_4(&VAR_1);

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3) {
  FUNC_2(&VAR_0, VAR_3->id);
  FUNC_0(!FUNC_1(&VAR_3->req_list));
 }

 FUNC_5(&VAR_1);

 FUNC_3(VAR_3);
}
