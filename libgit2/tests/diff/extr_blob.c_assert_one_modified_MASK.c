
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int files_binary; int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(
 int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, diff_expects *VAR_6)
{
 FUNC_0(1, VAR_6->files);
 FUNC_0(1, VAR_6->file_status[VAR_0]);
 FUNC_0(0, VAR_6->files_binary);

 FUNC_0(VAR_1, VAR_6->hunks);
 FUNC_0(VAR_2, VAR_6->lines);
 FUNC_0(VAR_3, VAR_6->line_ctxt);
 FUNC_0(VAR_4, VAR_6->line_adds);
 FUNC_0(VAR_5, VAR_6->line_dels);
}
