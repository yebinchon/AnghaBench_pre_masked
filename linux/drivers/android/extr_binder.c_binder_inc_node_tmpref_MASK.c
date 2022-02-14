
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_node {scalar_t__ proc; } ;


 int VAR_0 ;
 int FUNC_0 (struct binder_node*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct binder_node*) ;
 int FUNC_4 (struct binder_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct binder_node *VAR_1)
{
 FUNC_3(VAR_1);
 if (VAR_1->proc)
  FUNC_1(VAR_1->proc);
 else
  FUNC_5(&VAR_0);
 FUNC_0(VAR_1);
 if (VAR_1->proc)
  FUNC_2(VAR_1->proc);
 else
  FUNC_6(&VAR_0);
 FUNC_4(VAR_1);
}
