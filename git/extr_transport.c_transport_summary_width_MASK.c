
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int new_oid; int old_oid; struct ref* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(const struct ref *VAR_1)
{
 int VAR_2 = -1;

 for (; VAR_1; VAR_1 = VAR_1->next) {
  VAR_2 = FUNC_0(&VAR_1->old_oid, VAR_2);
  VAR_2 = FUNC_0(&VAR_1->new_oid, VAR_2);
 }
 if (VAR_2 < 0)
  VAR_2 = VAR_0;
 return (2 * VAR_2 + 3);
}
