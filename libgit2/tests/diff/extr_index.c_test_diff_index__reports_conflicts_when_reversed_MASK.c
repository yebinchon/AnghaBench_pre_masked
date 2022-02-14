
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(void)
{
 diff_expects VAR_5;

 FUNC_1(&VAR_5, VAR_4);

 FUNC_0(8, VAR_5.files);
 FUNC_0(2, VAR_5.file_status[VAR_0]);
 FUNC_0(3, VAR_5.file_status[VAR_2]);
 FUNC_0(2, VAR_5.file_status[VAR_3]);
 FUNC_0(1, VAR_5.file_status[VAR_1]);

 FUNC_0(7, VAR_5.hunks);

 FUNC_0(9, VAR_5.lines);
 FUNC_0(2, VAR_5.line_ctxt);
 FUNC_0(2, VAR_5.line_adds);
 FUNC_0(5, VAR_5.line_dels);
}
