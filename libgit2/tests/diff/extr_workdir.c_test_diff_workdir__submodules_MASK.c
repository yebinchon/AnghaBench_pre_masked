
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_8__ {int line_dels; int line_adds; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int * FUNC_7 (int ,char const*) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 const char *VAR_15 = "873585b94bdeabccea991ea5e3ec1a277895b698";
 git_tree *VAR_16;
 git_diff_options VAR_17 = VAR_7;
 git_diff *VAR_18 = ((void*)0);
 diff_expects VAR_19;

 VAR_14 = FUNC_8();

 VAR_16 = FUNC_7(VAR_14, VAR_15);

 VAR_17.flags =
  VAR_6 |
  VAR_5 |
  VAR_8 |
  VAR_9;

 FUNC_1(FUNC_4(&VAR_18, VAR_14, VAR_16, &VAR_17));





 FUNC_6(&VAR_19, 0, sizeof(VAR_19));

 FUNC_1(FUNC_2(
  VAR_18, VAR_11, VAR_10, VAR_12, VAR_13, &VAR_19));
 FUNC_0(12, VAR_19.files);

 FUNC_0(0, VAR_19.file_status[VAR_0]);
 FUNC_0(0, VAR_19.file_status[VAR_1]);
 FUNC_0(2, VAR_19.file_status[VAR_3]);
 FUNC_0(0, VAR_19.file_status[VAR_2]);
 FUNC_0(10, VAR_19.file_status[VAR_4]);



 FUNC_0(9, VAR_19.hunks);

 FUNC_0(33, VAR_19.lines);
 FUNC_0(2, VAR_19.line_ctxt);
 FUNC_0(30, VAR_19.line_adds);
 FUNC_0(1, VAR_19.line_dels);

 FUNC_3(VAR_18);
 FUNC_5(VAR_16);
}
