
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ancestor; char* ours; char* theirs; } ;
typedef TYPE_1__ git_index_name_entry ;
typedef int git_index ;


 size_t FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(git_index *VAR_0)
{
 size_t VAR_1;
 const git_index_name_entry *VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);

  FUNC_2("%s %s %s\n", VAR_2->ancestor, VAR_2->ours, VAR_2->theirs);
 }
 FUNC_2("\n");
}
