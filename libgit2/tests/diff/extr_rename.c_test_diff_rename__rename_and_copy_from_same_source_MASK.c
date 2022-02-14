
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_object ;
typedef int git_index ;
struct TYPE_18__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
struct TYPE_19__ {int flags; } ;
typedef TYPE_2__ git_diff_find_options ;
typedef int git_diff ;
struct TYPE_20__ {int size; scalar_t__ ptr; } ;
typedef TYPE_3__ git_buf ;
typedef int exp ;
struct TYPE_21__ {int * file_status; int files; } ;
typedef TYPE_4__ diff_expects ;


 TYPE_3__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ,TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int **,int ) ;
 int FUNC_16 (int **,int ,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_4__*,int ,int) ;

void FUNC_19(void)
{
 git_buf VAR_13 = VAR_0, VAR_14 = VAR_0;
 git_index *VAR_15;
 git_tree *VAR_16;
 git_diff *VAR_17;
 git_diff_options VAR_18 = VAR_7;
 git_diff_find_options VAR_19 = VAR_5;
 diff_expects VAR_20;




 FUNC_1(FUNC_10(&VAR_13, "renames/songof7cities.txt"));
 FUNC_1(FUNC_4(&VAR_14, VAR_13, VAR_13));
 FUNC_5(&VAR_13, VAR_13 * 2 / 3);
 FUNC_2(&VAR_14, ((char *)VAR_14) + (VAR_14 / 3));
 FUNC_1(FUNC_11(&VAR_13, "renames/song_a.txt", 0, 0));
 FUNC_1(FUNC_11(&VAR_14, "renames/song_b.txt", 0, 0));

 FUNC_1(
  FUNC_16((git_object **)&VAR_16, VAR_12, "HEAD^{tree}"));

 FUNC_1(FUNC_15(&VAR_15, VAR_12));
 FUNC_1(FUNC_14(VAR_15, VAR_16));
 FUNC_1(FUNC_12(VAR_15, "song_a.txt"));
 FUNC_1(FUNC_12(VAR_15, "song_b.txt"));

 VAR_18.flags = VAR_6;

 FUNC_1(FUNC_9(&VAR_17, VAR_12, VAR_16, VAR_15, &VAR_18));

 FUNC_18(&VAR_20, 0, sizeof(VAR_20));
 FUNC_1(FUNC_7(
  VAR_17, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_20));
 FUNC_0(6, VAR_20.files);
 FUNC_0(2, VAR_20.file_status[VAR_1]);
 FUNC_0(4, VAR_20.file_status[VAR_3]);

 VAR_19.flags = VAR_4;
 FUNC_1(FUNC_6(VAR_17, &VAR_19));

 FUNC_18(&VAR_20, 0, sizeof(VAR_20));
 FUNC_1(FUNC_7(
  VAR_17, VAR_9, VAR_8, VAR_10, VAR_11, &VAR_20));
 FUNC_0(6, VAR_20.files);
 FUNC_0(2, VAR_20.file_status[VAR_2]);
 FUNC_0(4, VAR_20.file_status[VAR_3]);

 FUNC_8(VAR_17);
 FUNC_17(VAR_16);
 FUNC_13(VAR_15);

 FUNC_3(&VAR_13);
 FUNC_3(&VAR_14);
}
