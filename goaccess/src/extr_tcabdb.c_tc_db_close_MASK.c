
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keep_db_files; } ;
typedef int TCADB ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6 (TCADB * VAR_1, char *VAR_2)
{
  if (VAR_1 == ((void*)0))
    return 1;


  if (!FUNC_3 (VAR_1))
    FUNC_0 ("Unable to close DB: %s", VAR_2);


  FUNC_4 (VAR_1);






  FUNC_2 (VAR_2);

  return 0;
}
