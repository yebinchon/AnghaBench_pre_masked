
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
struct TYPE_5__ {int context_lines; int interhunk_lines; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int *,int ,int *,int *,TYPE_1__*) ;
 TYPE_1__ VAR_12 ;
 void* FUNC_6 (int ,char const*) ;

void FUNC_7(void)
{
 const char *VAR_13 = "8496071c1b46c85";
 const char *VAR_14 = "be3563ae3f79";

 VAR_11 = FUNC_3("testrepo.git");

 FUNC_0((VAR_3 = FUNC_6(VAR_11, VAR_13)) != ((void*)0));
 FUNC_0((VAR_4 = FUNC_6(VAR_11, VAR_14)) != ((void*)0));

 VAR_12.context_lines = 1;
 VAR_12.interhunk_lines = 1;

 FUNC_2(FUNC_5(&VAR_5, VAR_11, VAR_3, VAR_4, &VAR_12));

 FUNC_2(FUNC_4(
  VAR_5, VAR_7, VAR_6, VAR_8, VAR_9, &VAR_10));

 FUNC_1(3, VAR_10.files);
 FUNC_1(2, VAR_10.file_status[VAR_0]);
 FUNC_1(0, VAR_10.file_status[VAR_1]);
 FUNC_1(1, VAR_10.file_status[VAR_2]);

 FUNC_1(3, VAR_10.hunks);

 FUNC_1(4, VAR_10.lines);
 FUNC_1(0, VAR_10.line_ctxt);
 FUNC_1(3, VAR_10.line_adds);
 FUNC_1(1, VAR_10.line_dels);
}
