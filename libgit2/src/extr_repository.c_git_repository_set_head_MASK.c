
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_13__ {int symbolic; } ;
struct TYPE_14__ {scalar_t__ type; int name; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,char const*) ;
 int FUNC_2 (int *,int ,char const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__**,int *,char const*) ;
 char const* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__**,int *,char const*,char const*,int,int ) ;
 int FUNC_16 (TYPE_2__*) ;

int FUNC_17(
 git_repository* VAR_5,
 const char* VAR_6)
{
 git_reference *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 git_buf VAR_10 = VAR_0;
 int VAR_11;

 FUNC_0(VAR_5 && VAR_6);

 if ((VAR_11 = FUNC_13(&VAR_8, VAR_5, VAR_3)) < 0)
  return VAR_11;

 if ((VAR_11 = FUNC_1(&VAR_10, VAR_8, VAR_6)) < 0)
  goto cleanup;

 VAR_11 = FUNC_13(&VAR_7, VAR_5, VAR_6);
 if (VAR_11 < 0 && VAR_11 != VAR_1)
  goto cleanup;

 if (VAR_7 && VAR_8->type == VAR_4 && FUNC_3(VAR_8->target.symbolic, VAR_7->name) &&
     FUNC_10(VAR_7) && FUNC_4(VAR_7)) {
  FUNC_7(VAR_2, "cannot set HEAD to reference '%s' as it is the current HEAD "
   "of a linked repository.", FUNC_14(VAR_7));
  VAR_11 = -1;
  goto cleanup;
 }

 if (!VAR_11) {
  if (FUNC_10(VAR_7)) {
   VAR_11 = FUNC_15(&VAR_9, VAR_5, VAR_3,
     FUNC_14(VAR_7), 1, FUNC_5(&VAR_10));
  } else {
   VAR_11 = FUNC_2(VAR_5, FUNC_16(VAR_7),
    FUNC_12(VAR_7) || FUNC_11(VAR_7) ? VAR_6 : ((void*)0));
  }
 } else if (FUNC_8(VAR_6)) {
  VAR_11 = FUNC_15(&VAR_9, VAR_5, VAR_3, VAR_6,
    1, FUNC_5(&VAR_10));
 }

cleanup:
 FUNC_6(&VAR_10);
 FUNC_9(VAR_8);
 FUNC_9(VAR_7);
 FUNC_9(VAR_9);
 return VAR_11;
}
