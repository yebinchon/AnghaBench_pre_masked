
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_entry {struct path_entry* next; } ;


 struct path_entry* VAR_0 ;
 struct path_entry* VAR_1 ;
 struct path_entry* FUNC_0 (char const*) ;

void
FUNC_1(const char *VAR_2)
{
 struct path_entry *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_1) {
  VAR_1->next = VAR_3;
  VAR_1 = VAR_3;
 }
 else
  VAR_1 = VAR_0 = VAR_3;
}
