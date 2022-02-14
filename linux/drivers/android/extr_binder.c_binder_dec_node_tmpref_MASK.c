
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_node {scalar_t__ tmp_refs; int proc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct binder_node*,int ,int) ;
 int FUNC_4 (struct binder_node*) ;
 int FUNC_5 (struct binder_node*) ;
 int FUNC_6 (struct binder_node*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct binder_node *VAR_1)
{
 bool VAR_2;

 FUNC_5(VAR_1);
 if (!VAR_1->proc)
  FUNC_7(&VAR_0);
 else
  FUNC_1(&VAR_0);
 VAR_1->tmp_refs--;
 FUNC_0(VAR_1->tmp_refs < 0);
 if (!VAR_1->proc)
  FUNC_8(&VAR_0);
 else
  FUNC_2(&VAR_0);






 VAR_2 = FUNC_3(VAR_1, 0, 1);
 FUNC_6(VAR_1);
 if (VAR_2)
  FUNC_4(VAR_1);
}
