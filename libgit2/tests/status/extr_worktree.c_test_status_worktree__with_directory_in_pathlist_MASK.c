
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char** strings; int count; } ;
struct TYPE_16__ {int flags; int show; TYPE_1__ pathspec; } ;
typedef TYPE_6__ git_status_options ;
typedef int git_status_list ;
struct TYPE_17__ {size_t status; TYPE_5__* index_to_workdir; TYPE_3__* head_to_index; } ;
typedef TYPE_7__ git_status_entry ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_14__ {int path; } ;
struct TYPE_15__ {TYPE_4__ old_file; } ;
struct TYPE_12__ {int path; } ;
struct TYPE_13__ {TYPE_2__ old_file; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 TYPE_7__* FUNC_7 (int *,size_t) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,TYPE_6__*) ;
 int * VAR_8 ;
 int * VAR_9 ;

void FUNC_11(void)
{
 git_repository *VAR_10 = FUNC_3("testrepo2");
 git_index *VAR_11;
 git_status_options VAR_12 = VAR_1;
 git_status_list *VAR_13;
 const git_status_entry *VAR_14;
 size_t VAR_15, VAR_16;
 bool VAR_17;
 char *VAR_18 = "subdir";

 FUNC_2(FUNC_6(&VAR_11, VAR_10));
 VAR_17 =
   (FUNC_4(VAR_11) & VAR_0) != 0;
 FUNC_5(VAR_11);

 VAR_12.pathspec.strings = &VAR_18;
 VAR_12.pathspec.count = 1;
 VAR_12.flags =
   VAR_2 |
   VAR_4 |
   VAR_3;

 VAR_12.show = VAR_7;
 FUNC_10(&VAR_13, VAR_10, &VAR_12);

 VAR_16 = FUNC_8(VAR_13);
 FUNC_0(4, VAR_16);

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_14 = FUNC_7(VAR_13, VAR_15);
  FUNC_0(0, VAR_14->status);
  FUNC_1(VAR_17 ?
   VAR_9[VAR_15] :
   VAR_8[VAR_15],
   VAR_14->index_to_workdir->old_file.path);
 }

 FUNC_9(VAR_13);

 VAR_12.show = VAR_6;
 FUNC_10(&VAR_13, VAR_10, &VAR_12);

 VAR_16 = FUNC_8(VAR_13);
 FUNC_0(4, VAR_16);

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_14 = FUNC_7(VAR_13, VAR_15);
  FUNC_0(0, VAR_14->status);
  FUNC_1(VAR_17 ?
   VAR_9[VAR_15] :
   VAR_8[VAR_15],
   VAR_14->head_to_index->old_file.path);
 }

 FUNC_9(VAR_13);

 VAR_12.show = VAR_5;
 FUNC_10(&VAR_13, VAR_10, &VAR_12);

 VAR_16 = FUNC_8(VAR_13);
 FUNC_0(4, VAR_16);

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_14 = FUNC_7(VAR_13, VAR_15);
  FUNC_0(0, VAR_14->status);
  FUNC_1(VAR_17 ?
   VAR_9[VAR_15] :
   VAR_8[VAR_15],
   VAR_14->index_to_workdir->old_file.path);
 }

 FUNC_9(VAR_13);
}
