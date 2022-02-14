
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {char* argv; int argc; } ;


 int FUNC_0 (struct argv_array*) ;
 char* VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2(struct argv_array *VAR_1)
{
 if (VAR_1->argv != VAR_0) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++)
   FUNC_1((char *)VAR_1->argv[VAR_2]);
  FUNC_1(VAR_1->argv);
 }
 FUNC_0(VAR_1);
}
