
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
typedef int git_diff ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 char* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char const*) ;

void FUNC_9(void)
{
 const char *VAR_10 = VAR_8;
 const char *VAR_11 = VAR_0;
 git_tree *VAR_12, *VAR_13;
    git_diff *VAR_14;
 git_diff_options VAR_15 = VAR_7;
 git_diff_find_options VAR_16 = VAR_4;
 git_buf VAR_17 = VAR_1;
 const char *VAR_18 =
  "diff --git a/serving.txt b/sixserving.txt\n"
  "similarity index 100%\n"
  "rename from serving.txt\n"
  "rename to sixserving.txt\n"
  "diff --git a/sevencities.txt b/songofseven.txt\n"
  "similarity index 100%\n"
  "copy from sevencities.txt\n"
  "copy to songofseven.txt\n";

 VAR_12 = FUNC_8(VAR_9, VAR_10);
 VAR_13 = FUNC_8(VAR_9, VAR_11);

 VAR_15.flags |= VAR_6;
 VAR_16.flags = VAR_2 |
  VAR_3;

 FUNC_1(FUNC_6(&VAR_14,
  VAR_9, VAR_12, VAR_13, &VAR_15));
 FUNC_1(FUNC_3(VAR_14, &VAR_16));

 FUNC_1(FUNC_5(&VAR_17, VAR_14, VAR_5));

 FUNC_0(VAR_18, VAR_17.ptr);

 FUNC_2(&VAR_17);
 FUNC_4(VAR_14);
 FUNC_7(VAR_12);
 FUNC_7(VAR_13);
}
