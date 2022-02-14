
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {struct node_info* next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct node_info*) ;
 int VAR_1 ;
 struct node_info* VAR_2 ;

void FUNC_2() {
 struct node_info* VAR_3;

 if (VAR_1 != -1)
  FUNC_0(VAR_1);
 if (VAR_0 != -1)
  FUNC_0(VAR_0);

 while (VAR_2) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}
