
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {struct expression* prev; struct expression* next; } ;


 int FUNC_0 (int) ;
 struct expression* FUNC_1 (int) ;
 int FUNC_2 (struct expression*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct expression *
FUNC_4(struct expression **VAR_0, struct expression **VAR_1)
{
 struct expression *VAR_2, *VAR_3;

 VAR_2 = FUNC_1(sizeof(struct expression));
 if (VAR_2 == ((void*)0)) {
  FUNC_3("Out of memory in exp allocation\n");
  FUNC_0(-2);
 }
 FUNC_2(VAR_2, 0, sizeof(struct expression));
 if (*VAR_0 == ((void*)0)) {
  *VAR_0 = VAR_2;
 }
 VAR_3 = *VAR_1;
 if (VAR_3 == ((void*)0)) {

  *VAR_1 = VAR_2;
 } else {

  VAR_3->next = VAR_2;
  VAR_2->prev = VAR_3;
  *VAR_1 = VAR_2;
 }
 return (VAR_2);
}
