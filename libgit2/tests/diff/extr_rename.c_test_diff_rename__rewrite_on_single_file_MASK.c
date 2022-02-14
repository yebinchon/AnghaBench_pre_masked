
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_12__ {int * file_status; int files; } ;
typedef TYPE_3__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

void FUNC_10(void)
{
 git_index *VAR_13;
 git_diff *VAR_14 = ((void*)0);
 diff_expects VAR_15;
 git_diff_options VAR_16 = VAR_7;
 git_diff_find_options VAR_17 = VAR_4;

 VAR_16.flags = VAR_6;

 VAR_17.flags = VAR_3 |
  VAR_2 |
  VAR_5;

 FUNC_1(FUNC_8(&VAR_13, VAR_12));

 FUNC_2("renames/ikeepsix.txt",
  "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n" "This is enough content for the file to be rewritten.\n");
 FUNC_1(FUNC_6(&VAR_14, VAR_12, VAR_13, &VAR_16));
 FUNC_1(FUNC_3(VAR_14, &VAR_17));

 FUNC_9(&VAR_15, 0, sizeof(VAR_15));

 FUNC_1(FUNC_4(
  VAR_14, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_15));
 FUNC_0(2, VAR_15.files);
 FUNC_0(1, VAR_15.file_status[VAR_0]);
 FUNC_0(1, VAR_15.file_status[VAR_1]);

 FUNC_5(VAR_14);
 FUNC_7(VAR_13);
}
