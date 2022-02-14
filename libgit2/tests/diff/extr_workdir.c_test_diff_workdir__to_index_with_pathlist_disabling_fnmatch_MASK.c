
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_10__ {int context_lines; int interhunk_lines; int flags; TYPE_1__ pathspec; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_11__ {int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_9 ;
 int FUNC_3 (int *,int ,int *,int *,int *,TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_4 (int *,int ,int *,int *,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;

void FUNC_8(void)
{
 git_diff_options VAR_11 = VAR_8;
 git_diff *VAR_12 = ((void*)0);
 diff_expects VAR_13;
 char *VAR_14 = ((void*)0);
 int VAR_15;

 VAR_10 = FUNC_2("status");

 VAR_11.context_lines = 3;
 VAR_11.interhunk_lines = 1;
 VAR_11.flags |= VAR_6 | VAR_7 |
  VAR_5;
 VAR_11.pathspec.strings = &VAR_14;
 VAR_11.pathspec.count = 0;


 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(13, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(4, VAR_13.file_status[VAR_1]);
  FUNC_0(4, VAR_13.file_status[VAR_3]);
  FUNC_0(1, VAR_13.file_status[VAR_2]);
  FUNC_0(4, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);





 VAR_11.pathspec.count = 1;

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(13, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(4, VAR_13.file_status[VAR_1]);
  FUNC_0(4, VAR_13.file_status[VAR_3]);
  FUNC_0(1, VAR_13.file_status[VAR_2]);
  FUNC_0(4, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);

 VAR_14 = "modified_file";

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(1, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(0, VAR_13.file_status[VAR_1]);
  FUNC_0(1, VAR_13.file_status[VAR_3]);
  FUNC_0(0, VAR_13.file_status[VAR_2]);
  FUNC_0(0, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);


 VAR_14 = "subdir";

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(3, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(1, VAR_13.file_status[VAR_1]);
  FUNC_0(1, VAR_13.file_status[VAR_3]);
  FUNC_0(0, VAR_13.file_status[VAR_2]);
  FUNC_0(1, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);


 VAR_14 = "subdir/";

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(3, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(1, VAR_13.file_status[VAR_1]);
  FUNC_0(1, VAR_13.file_status[VAR_3]);
  FUNC_0(0, VAR_13.file_status[VAR_2]);
  FUNC_0(1, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);


 VAR_14 = "subdir/*";

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(0, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(0, VAR_13.file_status[VAR_1]);
  FUNC_0(0, VAR_13.file_status[VAR_3]);
  FUNC_0(0, VAR_13.file_status[VAR_2]);
  FUNC_0(0, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);


 VAR_14 = "subdi";

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(0, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(0, VAR_13.file_status[VAR_1]);
  FUNC_0(0, VAR_13.file_status[VAR_3]);
  FUNC_0(0, VAR_13.file_status[VAR_2]);
  FUNC_0(0, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);


 VAR_14 = "*_deleted";

 FUNC_1(FUNC_6(&VAR_12, VAR_10, ((void*)0), &VAR_11));

 for (VAR_15 = 0; VAR_15 <= 1; VAR_15++) {
  FUNC_7(&VAR_13, 0, sizeof(VAR_13));

  if (VAR_15)
   FUNC_1(FUNC_3(
    VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));
  else
   FUNC_1(FUNC_4(VAR_12, VAR_9, ((void*)0), ((void*)0), ((void*)0), &VAR_13));

  FUNC_0(0, VAR_13.files);
  FUNC_0(0, VAR_13.file_status[VAR_0]);
  FUNC_0(0, VAR_13.file_status[VAR_1]);
  FUNC_0(0, VAR_13.file_status[VAR_3]);
  FUNC_0(0, VAR_13.file_status[VAR_2]);
  FUNC_0(0, VAR_13.file_status[VAR_4]);
 }

 FUNC_5(VAR_12);
}
