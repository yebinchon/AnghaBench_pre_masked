
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * expected_statuses; int line; int file; int * expected_paths; int entry_count; } ;
typedef TYPE_1__ status_entry_counts ;


 int FUNC_0 (int ,int ,char*,int,char*,int ,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 status_entry_counts *VAR_3 = VAR_2;
 int VAR_4 = VAR_3->entry_count++;

 FUNC_0(
  VAR_3->file, VAR_3->line,
  "Status path mismatch", 1,
  "%s", VAR_3->expected_paths[VAR_4], VAR_0);

 FUNC_0(
  VAR_3->file, VAR_3->line,
  "Status code mismatch", 1,
  "%o", VAR_3->expected_statuses[VAR_4], VAR_1);

 return 0;
}
