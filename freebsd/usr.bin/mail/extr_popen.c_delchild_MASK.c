
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child {struct child* link; } ;


 struct child* VAR_0 ;
 struct child* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct child *VAR_2)
{
 struct child **VAR_3;

 for (VAR_3 = &VAR_0; *VAR_3 != VAR_2; VAR_3 = &(*VAR_3)->link)
  ;
 *VAR_3 = VAR_2->link;
 VAR_2->link = VAR_1;
 VAR_1 = VAR_2;
}
