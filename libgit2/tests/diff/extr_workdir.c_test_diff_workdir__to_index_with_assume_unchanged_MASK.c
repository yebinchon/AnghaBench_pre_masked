
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ie ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int exp ;
struct TYPE_10__ {int * file_status; int files; } ;
typedef TYPE_2__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;

void FUNC_14(void)
{
 git_diff_options VAR_10 = VAR_3;
 git_diff *VAR_11 = ((void*)0);
 git_index *VAR_12 = ((void*)0);
 diff_expects VAR_13;
 const git_index_entry *VAR_14;
 git_index_entry VAR_15;

 VAR_9 = FUNC_3("status");



 FUNC_2(FUNC_6(&VAR_11, VAR_9, ((void*)0), &VAR_10));
 FUNC_13(&VAR_13, 0, sizeof(VAR_13));
 FUNC_2(FUNC_4(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_13));
 FUNC_1(8, VAR_13.files);
 FUNC_1(0, VAR_13.file_status[VAR_0]);
 FUNC_1(4, VAR_13.file_status[VAR_1]);
 FUNC_1(4, VAR_13.file_status[VAR_2]);
 FUNC_5(VAR_11);



 FUNC_2(FUNC_11(&VAR_12, VAR_9));

 FUNC_0((VAR_14 = FUNC_9(VAR_12, "modified_file", 0)) != ((void*)0));
 FUNC_12(&VAR_15, VAR_14, sizeof(VAR_15));
 VAR_15.flags |= VAR_4;
 FUNC_2(FUNC_7(VAR_12, &VAR_15));

 FUNC_0((VAR_14 = FUNC_9(VAR_12, "file_deleted", 0)) != ((void*)0));
 FUNC_12(&VAR_15, VAR_14, sizeof(VAR_15));
 VAR_15.flags |= VAR_4;
 FUNC_2(FUNC_7(VAR_12, &VAR_15));

 FUNC_2(FUNC_10(VAR_12));
 FUNC_8(VAR_12);



 FUNC_2(FUNC_6(&VAR_11, VAR_9, ((void*)0), &VAR_10));
 FUNC_13(&VAR_13, 0, sizeof(VAR_13));
 FUNC_2(FUNC_4(
  VAR_11, VAR_6, VAR_5, VAR_7, VAR_8, &VAR_13));
 FUNC_1(6, VAR_13.files);
 FUNC_1(0, VAR_13.file_status[VAR_0]);
 FUNC_1(3, VAR_13.file_status[VAR_1]);
 FUNC_1(3, VAR_13.file_status[VAR_2]);
 FUNC_5(VAR_11);

}
