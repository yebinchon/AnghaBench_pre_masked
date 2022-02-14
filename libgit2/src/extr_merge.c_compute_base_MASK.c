
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_15__ {size_t count; int * ids; int member_0; } ;
typedef TYPE_1__ git_oidarray ;
struct TYPE_16__ {int flags; size_t recursion_limit; } ;
typedef TYPE_2__ git_merge_options ;
struct TYPE_17__ {int ptr; int size; } ;
typedef TYPE_3__ git_array_oid_t ;
typedef int git_annotated_commit ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int **,int *,int *,int *,TYPE_2__*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int FUNC_3 (TYPE_3__) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_3__*,int const*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__ const*,int) ;

__attribute__((used)) static int FUNC_9(
 git_annotated_commit **VAR_3,
 git_repository *VAR_4,
 const git_annotated_commit *VAR_5,
 const git_annotated_commit *VAR_6,
 const git_merge_options *VAR_7,
 size_t VAR_8)
{
 git_array_oid_t VAR_9 = VAR_0;
 git_oidarray VAR_10 = {0};
 git_annotated_commit *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 git_merge_options VAR_14 = VAR_2;
 size_t VAR_15, VAR_16;
 int VAR_17;

 *VAR_3 = ((void*)0);

 if (VAR_7)
  FUNC_8(&VAR_14, VAR_7, sizeof(git_merge_options));







 if ((VAR_17 = FUNC_7(&VAR_9, VAR_6)) < 0 ||
  (VAR_17 = FUNC_7(&VAR_9, VAR_5)) < 0 ||
  (VAR_17 = FUNC_4(&VAR_10, VAR_4,
   VAR_9.size, VAR_9.ptr)) < 0)
  goto done;

 VAR_16 = (VAR_14.flags & VAR_1) ? 0 : VAR_10.count;

 if (VAR_16)
  FUNC_5(&VAR_10);

 if ((VAR_17 = FUNC_2(&VAR_11, VAR_4, &VAR_10.ids[0])) < 0)
  goto done;

 for (VAR_15 = 1; VAR_15 < VAR_16; VAR_15++) {
  VAR_8++;

  if (VAR_14.recursion_limit && VAR_8 > VAR_14.recursion_limit)
   break;

  if ((VAR_17 = FUNC_2(&VAR_12, VAR_4,
    &VAR_10.ids[VAR_15])) < 0 ||
   (VAR_17 = FUNC_0(&VAR_13, VAR_4, VAR_11, VAR_12, &VAR_14,
    VAR_8)) < 0)
   goto done;

  FUNC_1(VAR_11);
  FUNC_1(VAR_12);

  VAR_11 = VAR_13;
  VAR_13 = ((void*)0);
  VAR_12 = ((void*)0);
 }

done:
 if (VAR_17 == 0)
  *VAR_3 = VAR_11;
 else
  FUNC_1(VAR_11);

 FUNC_1(VAR_12);
 FUNC_1(VAR_13);
 FUNC_6(&VAR_10);
 FUNC_3(VAR_9);
 return VAR_17;
}
