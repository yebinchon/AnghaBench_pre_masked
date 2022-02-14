
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct merge_index_conflict_data {int dummy; } ;
typedef int git_tree ;
typedef int git_oid ;
struct TYPE_16__ {int target_limit; int rename_threshold; TYPE_11__* metric; int flags; } ;
typedef TYPE_1__ git_merge_options ;
struct TYPE_19__ {size_t length; } ;
struct TYPE_17__ {TYPE_4__ conflicts; } ;
typedef TYPE_2__ git_merge_diff_list ;
struct TYPE_18__ {int flags; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_diff_similarity_metric ;
struct TYPE_15__ {void* payload; int similarity; int free_signature; int buffer_signature; int file_signature; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_11__*) ;
 TYPE_11__* FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int **,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_8 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *) ;
 int FUNC_13 (TYPE_4__*,struct merge_index_conflict_data*,size_t) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_14(
    const char *VAR_10,
    const char *VAR_11,
    const char *VAR_12,
    struct merge_index_conflict_data *VAR_13,
    size_t VAR_14)
{
    git_merge_diff_list *VAR_15 = FUNC_6(VAR_9);
    git_oid VAR_16, VAR_17, VAR_18;
    git_tree *VAR_19, *VAR_20, *VAR_21;
 git_iterator *VAR_22, *VAR_23, *VAR_24;
 git_iterator_options VAR_25 = VAR_2;

 git_merge_options VAR_26 = VAR_4;
 VAR_26.flags |= VAR_3;
 VAR_26.target_limit = 1000;
 VAR_26.rename_threshold = 50;

 VAR_26.metric = FUNC_3(sizeof(git_diff_similarity_metric));
 FUNC_0(VAR_26.metric != ((void*)0));

 VAR_26.metric->file_signature = VAR_7;
 VAR_26.metric->buffer_signature = VAR_6;
 VAR_26.metric->free_signature = VAR_8;
 VAR_26.metric->similarity = VAR_5;
 VAR_26.metric->payload = (void *)VAR_0;

 FUNC_1(FUNC_10(&VAR_16, VAR_10));
 FUNC_1(FUNC_10(&VAR_17, VAR_11));
 FUNC_1(FUNC_10(&VAR_18, VAR_12));

 FUNC_1(FUNC_12(&VAR_19, VAR_9, &VAR_16));
 FUNC_1(FUNC_12(&VAR_20, VAR_9, &VAR_17));
 FUNC_1(FUNC_12(&VAR_21, VAR_9, &VAR_18));

 VAR_25.flags = VAR_1;

 FUNC_1(FUNC_4(&VAR_22, VAR_19, &VAR_25));
 FUNC_1(FUNC_4(&VAR_23, VAR_20, &VAR_25));
 FUNC_1(FUNC_4(&VAR_24, VAR_21, &VAR_25));

 FUNC_1(FUNC_7(VAR_15, VAR_22, VAR_23, VAR_24));
 FUNC_1(FUNC_8(VAR_9, VAR_15, &VAR_26));





 FUNC_0(VAR_14 == VAR_15->conflicts.length);

 FUNC_0(FUNC_13(&VAR_15->conflicts, VAR_13, VAR_14));

 FUNC_5(VAR_22);
 FUNC_5(VAR_23);
 FUNC_5(VAR_24);

 FUNC_11(VAR_19);
 FUNC_11(VAR_20);
 FUNC_11(VAR_21);

 FUNC_9(VAR_15);

 FUNC_2(VAR_26.metric);
}
