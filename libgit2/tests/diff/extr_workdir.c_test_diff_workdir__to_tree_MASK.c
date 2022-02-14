
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_10__ {int context_lines; int interhunk_lines; int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_11__ {int line_adds; int line_dels; int line_ctxt; int lines; int hunks; int * file_status; int files; } ;
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_9 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int * FUNC_12 (int ,char const*) ;

void FUNC_13(void)
{

 const char *VAR_14 = "26a125ee1bf";
 const char *VAR_15 = "0017bd4ab1ec3";
 git_tree *VAR_16, *VAR_17;
 git_diff_options VAR_18 = VAR_7;
 git_diff *VAR_19 = ((void*)0);
 git_diff *VAR_20 = ((void*)0);
 diff_expects VAR_21;
 int VAR_22;

 VAR_13 = FUNC_2("status");

 VAR_16 = FUNC_12(VAR_13, VAR_14);
 VAR_17 = FUNC_12(VAR_13, VAR_15);

 VAR_18.context_lines = 3;
 VAR_18.interhunk_lines = 1;
 VAR_18.flags |= VAR_5 | VAR_6;
 FUNC_1(FUNC_9(&VAR_19, VAR_13, VAR_16, &VAR_18));

 for (VAR_22 = 0; VAR_22 <= 1; VAR_22++) {
  FUNC_11(&VAR_21, 0, sizeof(VAR_21));

  if (VAR_22)
   FUNC_1(FUNC_3(
    VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));
  else
   FUNC_1(FUNC_4(
    VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));

  FUNC_0(14, VAR_21.files);
  FUNC_0(0, VAR_21.file_status[VAR_0]);
  FUNC_0(4, VAR_21.file_status[VAR_1]);
  FUNC_0(4, VAR_21.file_status[VAR_3]);
  FUNC_0(1, VAR_21.file_status[VAR_2]);
  FUNC_0(5, VAR_21.file_status[VAR_4]);
 }






 FUNC_5(VAR_19);
 VAR_19 = ((void*)0);
 FUNC_11(&VAR_21, 0, sizeof(VAR_21));





 FUNC_1(FUNC_8(&VAR_19, VAR_13, VAR_16, ((void*)0), &VAR_18));
 FUNC_1(FUNC_6(&VAR_20, VAR_13, ((void*)0), &VAR_18));
 FUNC_1(FUNC_7(VAR_19, VAR_20));
 FUNC_5(VAR_20);

 for (VAR_22 = 0; VAR_22 <= 1; VAR_22++) {
  FUNC_11(&VAR_21, 0, sizeof(VAR_21));

  if (VAR_22)
   FUNC_1(FUNC_3(
    VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));
  else
   FUNC_1(FUNC_4(
    VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));

  FUNC_0(15, VAR_21.files);
  FUNC_0(2, VAR_21.file_status[VAR_0]);
  FUNC_0(5, VAR_21.file_status[VAR_1]);
  FUNC_0(4, VAR_21.file_status[VAR_3]);
  FUNC_0(1, VAR_21.file_status[VAR_2]);
  FUNC_0(3, VAR_21.file_status[VAR_4]);

  FUNC_0(11, VAR_21.hunks);

  FUNC_0(17, VAR_21.lines);
  FUNC_0(4, VAR_21.line_ctxt);
  FUNC_0(8, VAR_21.line_adds);
  FUNC_0(5, VAR_21.line_dels);
 }

 FUNC_5(VAR_19);
 VAR_19 = ((void*)0);
 FUNC_11(&VAR_21, 0, sizeof(VAR_21));




 FUNC_1(FUNC_8(&VAR_19, VAR_13, VAR_17, ((void*)0), &VAR_18));
 FUNC_1(FUNC_6(&VAR_20, VAR_13, ((void*)0), &VAR_18));
 FUNC_1(FUNC_7(VAR_19, VAR_20));
 FUNC_5(VAR_20);

 for (VAR_22 = 0; VAR_22 <= 1; VAR_22++) {
  FUNC_11(&VAR_21, 0, sizeof(VAR_21));

  if (VAR_22)
   FUNC_1(FUNC_3(
    VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));
  else
   FUNC_1(FUNC_4(
    VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));

  FUNC_0(16, VAR_21.files);
  FUNC_0(5, VAR_21.file_status[VAR_0]);
  FUNC_0(4, VAR_21.file_status[VAR_1]);
  FUNC_0(3, VAR_21.file_status[VAR_3]);
  FUNC_0(1, VAR_21.file_status[VAR_2]);
  FUNC_0(3, VAR_21.file_status[VAR_4]);

  FUNC_0(12, VAR_21.hunks);

  FUNC_0(19, VAR_21.lines);
  FUNC_0(3, VAR_21.line_ctxt);
  FUNC_0(12, VAR_21.line_adds);
  FUNC_0(4, VAR_21.line_dels);
 }

 FUNC_5(VAR_19);



 VAR_18.flags |= VAR_8;

 FUNC_1(FUNC_8(&VAR_19, VAR_13, VAR_17, ((void*)0), &VAR_18));
 FUNC_1(FUNC_6(&VAR_20, VAR_13, ((void*)0), &VAR_18));
 FUNC_1(FUNC_7(VAR_19, VAR_20));
 FUNC_5(VAR_20);

 FUNC_11(&VAR_21, 0, sizeof(VAR_21));

 FUNC_1(FUNC_4(
  VAR_19, VAR_10, VAR_9, VAR_11, VAR_12, &VAR_21));

 FUNC_0(16, VAR_21.files);
 FUNC_0(5, VAR_21.file_status[VAR_1]);
 FUNC_0(4, VAR_21.file_status[VAR_0]);
 FUNC_0(3, VAR_21.file_status[VAR_3]);
 FUNC_0(1, VAR_21.file_status[VAR_2]);
 FUNC_0(3, VAR_21.file_status[VAR_4]);

 FUNC_0(12, VAR_21.hunks);

 FUNC_0(19, VAR_21.lines);
 FUNC_0(3, VAR_21.line_ctxt);
 FUNC_0(12, VAR_21.line_dels);
 FUNC_0(4, VAR_21.line_adds);

 FUNC_5(VAR_19);



 FUNC_10(VAR_16);
 FUNC_10(VAR_17);
}
