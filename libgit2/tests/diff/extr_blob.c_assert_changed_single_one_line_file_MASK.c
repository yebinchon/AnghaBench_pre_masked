
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t git_delta_t ;
struct TYPE_3__ {int line_dels; int line_adds; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(
 diff_expects *VAR_2, git_delta_t VAR_3)
{
 FUNC_0(1, VAR_2->files);
 FUNC_0(1, VAR_2->file_status[VAR_3]);
 FUNC_0(1, VAR_2->hunks);
 FUNC_0(1, VAR_2->lines);

 if (VAR_3 == VAR_0)
  FUNC_0(1, VAR_2->line_adds);
 else if (VAR_3 == VAR_1)
  FUNC_0(1, VAR_2->line_dels);
}
