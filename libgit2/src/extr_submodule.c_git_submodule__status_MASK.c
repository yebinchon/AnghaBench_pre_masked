
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_submodule_ignore_t ;
struct TYPE_11__ {unsigned int flags; int wd_oid; int index_oid; int head_oid; TYPE_1__* repo; int ignore; } ;
typedef TYPE_2__ git_submodule ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_10__ {int * submodule_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int **,TYPE_2__*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (unsigned int*,TYPE_2__*) ;
 int FUNC_7 (unsigned int*,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

int FUNC_10(
 unsigned int *VAR_7,
 git_oid *VAR_8,
 git_oid *VAR_9,
 git_oid *VAR_10,
 git_submodule *VAR_11,
 git_submodule_ignore_t VAR_12)
{
 unsigned int VAR_13;
 git_repository *VAR_14 = ((void*)0);

 if (VAR_12 == VAR_2)
  VAR_12 = VAR_11->ignore;


 if (VAR_12 == VAR_0) {
  *VAR_7 = (VAR_11->flags & VAR_5);
  return 0;
 }
 if (VAR_11->repo->submodule_cache == ((void*)0)) {

  if (FUNC_9(VAR_11) < 0)
   return -1;


  if (FUNC_8(VAR_11) < 0)
   return -1;
 }


 if (VAR_12 == VAR_1) {

  if (FUNC_4(&VAR_14, VAR_11) < 0)
   FUNC_1();
  else
   FUNC_2(VAR_14);
  VAR_14 = ((void*)0);
 } else if (FUNC_3(&VAR_14, VAR_11) < 0) {
  FUNC_1();
  VAR_14 = ((void*)0);
 }

 VAR_13 = FUNC_0(VAR_11->flags);

 FUNC_6(&VAR_13, VAR_11);
 FUNC_7(&VAR_13, VAR_11, VAR_14, VAR_12);

 FUNC_2(VAR_14);

 *VAR_7 = VAR_13;

 FUNC_5(VAR_8, &VAR_11->head_oid,
  (VAR_11->flags & VAR_3) != 0);
 FUNC_5(VAR_9, &VAR_11->index_oid,
  (VAR_11->flags & VAR_4) != 0);
 FUNC_5(VAR_10, &VAR_11->wd_oid,
  (VAR_11->flags & VAR_6) != 0);

 return 0;
}
