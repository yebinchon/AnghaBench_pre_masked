
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* path; int* mode; int * oid; } ;
typedef TYPE_1__ git_index_reuc_entry ;
typedef int git_index ;


 size_t FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(git_index *VAR_0)
{
 size_t VAR_1;
 const git_index_reuc_entry *VAR_2;

 FUNC_3 ("\nREUC:\n");
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);

  FUNC_3("%s ", VAR_2->path);
  FUNC_3("%o ", VAR_2->mode[0]);
  FUNC_3("%s\n", FUNC_2(&VAR_2->oid[0]));
  FUNC_3("          %o ", VAR_2->mode[1]);
  FUNC_3("          %s\n", FUNC_2(&VAR_2->oid[1]));
  FUNC_3("          %o ", VAR_2->mode[2]);
  FUNC_3("          %s ", FUNC_2(&VAR_2->oid[2]));
  FUNC_3("\n");
 }
 FUNC_3("\n");
}
