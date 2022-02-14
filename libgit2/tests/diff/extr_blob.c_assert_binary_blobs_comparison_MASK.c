
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ files_binary; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(diff_expects *VAR_1)
{
 FUNC_0(VAR_1->files_binary > 0);

 FUNC_1(1, VAR_1->files);
 FUNC_1(1, VAR_1->file_status[VAR_0]);
 FUNC_1(0, VAR_1->hunks);
 FUNC_1(0, VAR_1->lines);
}
