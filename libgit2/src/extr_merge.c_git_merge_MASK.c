
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
typedef int git_merge_options ;
typedef int git_indexwriter ;
typedef int git_index ;
struct TYPE_6__ {unsigned int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_annotated_commit ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,unsigned int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int const**,size_t) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int **,int *) ;
 int FUNC_16 (int **,int **,int *,int *,int *,int ,int const*) ;
 int FUNC_17 (TYPE_1__*,int *,TYPE_1__ const*,unsigned int,int *,int *,int const**,size_t) ;
 int FUNC_18 (int *) ;

int FUNC_19(
 git_repository *VAR_3,
 const git_annotated_commit **VAR_4,
 size_t VAR_5,
 const git_merge_options *VAR_6,
 const git_checkout_options *VAR_7)
{
 git_reference *VAR_8 = ((void*)0);
 git_checkout_options VAR_9;
 git_annotated_commit *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 git_index *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 git_indexwriter VAR_14 = VAR_2;
 unsigned int VAR_15;
 int VAR_16 = 0;

 FUNC_0(VAR_3 && VAR_4 && VAR_5 > 0);

 if (VAR_5 != 1) {
  FUNC_4(VAR_1, "can only merge a single branch");
  return -1;
 }

 if ((VAR_16 = FUNC_14(VAR_3, "merge")) < 0)
  goto done;

 VAR_15 = VAR_7 ?
  VAR_7->checkout_strategy :
  VAR_0;

 if ((VAR_16 = FUNC_9(&VAR_14, VAR_3,
  &VAR_15)) < 0)
  goto done;

 if ((VAR_16 = FUNC_15(&VAR_12, VAR_3) < 0) ||
     (VAR_16 = FUNC_6(VAR_12, 0) < 0))
  goto done;


 if ((VAR_16 = FUNC_2(&VAR_10, VAR_3)) < 0 ||
  (VAR_16 = FUNC_12(VAR_3, VAR_10, VAR_4,
   VAR_5)) < 0)
  goto done;



 if ((VAR_16 = FUNC_16(&VAR_13, &VAR_11, VAR_3, VAR_10,
   (git_annotated_commit *)VAR_4[0], 0, VAR_6)) < 0 ||
  (VAR_16 = FUNC_11(VAR_3, VAR_13)) < 0 ||
  (VAR_16 = FUNC_10(VAR_3, VAR_13)) < 0)
  goto done;



 if ((VAR_16 = FUNC_17(&VAR_9, VAR_3,
   VAR_7, VAR_15,
   VAR_11, VAR_10, VAR_4, VAR_5)) < 0 ||
  (VAR_16 = FUNC_3(VAR_3, VAR_13, &VAR_9)) < 0)
  goto done;

 VAR_16 = FUNC_8(&VAR_14);

done:
 if (VAR_16 < 0)
  FUNC_18(VAR_3);

 FUNC_7(&VAR_14);
 FUNC_5(VAR_13);
 FUNC_1(VAR_10);
 FUNC_1(VAR_11);
 FUNC_13(VAR_8);
 FUNC_5(VAR_12);

 return VAR_16;
}
