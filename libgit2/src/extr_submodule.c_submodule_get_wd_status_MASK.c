
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
typedef scalar_t__ git_submodule_ignore_t ;
struct TYPE_8__ {int flags; int wd_oid; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_2__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int *,int *,TYPE_2__*) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int **,int *,int *,int *,TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int const*,int const*) ;
 scalar_t__ FUNC_7 (int **,int *) ;
 int FUNC_8 (int **,int *) ;
 int * FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(
 unsigned int *VAR_15,
 git_submodule *VAR_16,
 git_repository *VAR_17,
 git_submodule_ignore_t VAR_18)
{
 const git_oid *VAR_19 = FUNC_9(VAR_16);
 const git_oid *VAR_20 =
  (VAR_16->flags & VAR_13) ? &VAR_16->wd_oid : ((void*)0);
 git_tree *VAR_21 = ((void*)0);
 git_index *VAR_22 = ((void*)0);
 git_diff_options VAR_23 = VAR_2;
 git_diff *VAR_24;

 *VAR_15 = *VAR_15 & ~VAR_12;

 if (!VAR_19) {
  if (VAR_20)
   *VAR_15 |= VAR_5;
 }
 else if (!VAR_20) {
  if ((VAR_16->flags & VAR_14) != 0 &&
   (VAR_16->flags & VAR_4) == 0)
   *VAR_15 |= VAR_9;
  else
   *VAR_15 |= VAR_6;
 }
 else if (!FUNC_6(VAR_19, VAR_20))
  *VAR_15 |= VAR_8;


 if (!VAR_17)
  return;






 if (VAR_18 == VAR_3)
  VAR_23.flags |= VAR_1;

 (void)FUNC_8(&VAR_22, VAR_17);


 if (FUNC_7(&VAR_21, VAR_17) < 0)
  FUNC_5();
 else {

  if (FUNC_4(&VAR_24, VAR_17, VAR_21, VAR_22, &VAR_23) < 0)
   FUNC_5();
  else {
   if (FUNC_2(VAR_24) > 0)
    *VAR_15 |= VAR_7;
   FUNC_0(VAR_24);
   VAR_24 = ((void*)0);
  }

  FUNC_10(VAR_21);
 }


 if (FUNC_1(&VAR_24, VAR_17, VAR_22, &VAR_23) < 0)
  FUNC_5();
 else {
  size_t VAR_25 =
   FUNC_3(VAR_24, VAR_0);

  if (VAR_25 > 0)
   *VAR_15 |= VAR_10;

  if (FUNC_2(VAR_24) != VAR_25)
   *VAR_15 |= VAR_11;

  FUNC_0(VAR_24);
  VAR_24 = ((void*)0);
 }
}
