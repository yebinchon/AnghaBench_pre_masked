
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int perf_timer ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_merge_options ;
typedef int git_commit ;
struct TYPE_9__ {int checkout_strategy; } ;
struct TYPE_8__ {TYPE_2__ checkout_opts; } ;
typedef TYPE_1__ git_clone_options ;
typedef TYPE_2__ git_checkout_options ;
typedef int git_annotated_commit ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int **,int ,char*,int *,int ) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;
 int FUNC_5 (int *,char const*,char const*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int ,int const**,int,int *,TYPE_2__*) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,char*,char const*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void FUNC_17(const char *VAR_6,
     const char *VAR_7,
     const char *VAR_8,
     const char *VAR_9)
{
 git_checkout_options VAR_10 = VAR_0;
 git_clone_options VAR_11 = VAR_2;
 git_merge_options VAR_12 = VAR_3;
 git_oid VAR_13;
 git_oid VAR_14;
 git_reference *VAR_15 = ((void*)0);
 git_reference *VAR_16 = ((void*)0);
 git_commit *VAR_17 = ((void*)0);
 git_commit *VAR_18 = ((void*)0);
 git_annotated_commit *VAR_19[1] = { ((void*)0) };
 perf_timer VAR_20 = VAR_4;
 perf_timer VAR_21 = VAR_4;
 perf_timer VAR_22 = VAR_4;
 perf_timer VAR_23 = VAR_4;

 FUNC_15(&VAR_20);

 VAR_10.checkout_strategy = VAR_1;
 VAR_11.checkout_opts = VAR_10;

 FUNC_15(&VAR_21);
 FUNC_0(FUNC_5(&VAR_5, VAR_6, VAR_7, &VAR_11));
 FUNC_16(&VAR_21);

 FUNC_9(&VAR_13, VAR_8);
 FUNC_0(FUNC_7(&VAR_17, VAR_5, &VAR_13));
 FUNC_0(FUNC_3(&VAR_15, VAR_5,
          "A", VAR_17,
          0));

 FUNC_15(&VAR_22);
 FUNC_0(FUNC_4(VAR_5, (git_object*)VAR_17, &VAR_10));
 FUNC_16(&VAR_22);

 FUNC_0(FUNC_13(VAR_5, FUNC_11(VAR_15)));

 FUNC_9(&VAR_14, VAR_9);
 FUNC_0(FUNC_7(&VAR_18, VAR_5, &VAR_14));
 FUNC_0(FUNC_3(&VAR_16, VAR_5,
          "B", VAR_18,
          0));

 FUNC_0(FUNC_2(&VAR_19[0], VAR_5, &VAR_14));

 FUNC_15(&VAR_23);
 FUNC_0(FUNC_8(VAR_5,
        (const git_annotated_commit **)VAR_19, 1,
        &VAR_12, &VAR_10));
 FUNC_16(&VAR_23);

 FUNC_10(VAR_15);
 FUNC_10(VAR_16);
 FUNC_6(VAR_17);
 FUNC_6(VAR_18);
 FUNC_1(VAR_19[0]);
 FUNC_12(VAR_5);

 FUNC_16(&VAR_20);

 FUNC_14(&VAR_21, "%s: clone", VAR_7);
 FUNC_14(&VAR_22, "%s: checkout", VAR_7);
 FUNC_14(&VAR_23, "%s: merge", VAR_7);
 FUNC_14(&VAR_20, "%s: total", VAR_7);
}
