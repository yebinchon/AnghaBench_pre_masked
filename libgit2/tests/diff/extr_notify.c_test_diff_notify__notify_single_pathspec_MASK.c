
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; } ;
typedef TYPE_1__ notify_expected ;


 int FUNC_0 (char**,int,TYPE_1__*,int) ;

void FUNC_1(void)
{
 char *VAR_0[] = {
  "*_deleted",
 };
 notify_expected VAR_1[] = {
  { "file_deleted", "*_deleted" },
  { "staged_changes_file_deleted", "*_deleted" },
  { ((void*)0), ((void*)0) }
 };

 FUNC_0(VAR_0, 1, VAR_1, 2);
}
