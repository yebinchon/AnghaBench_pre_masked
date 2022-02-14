
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ theirs; scalar_t__ ours; scalar_t__ ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;
typedef int checkout_data ;
struct TYPE_10__ {int * theirs; int * ours; } ;
typedef TYPE_2__ checkout_conflictdata ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,scalar_t__) ;
 TYPE_2__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
 checkout_conflictdata **VAR_1,
 checkout_conflictdata **VAR_2,
 checkout_conflictdata **VAR_3,
 checkout_data *VAR_4,
 const git_index_name_entry *VAR_5)
{
 checkout_conflictdata *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);

 if (!VAR_5->ancestor) {
  FUNC_2(VAR_0, "a NAME entry exists without an ancestor");
  VAR_9 = -1;
  goto done;
 }

 if (!VAR_5->ours && !VAR_5->theirs) {
  FUNC_2(VAR_0, "a NAME entry exists without an ours or theirs");
  VAR_9 = -1;
  goto done;
 }

 if ((VAR_6 = FUNC_0(VAR_4,
  VAR_5->ancestor)) == ((void*)0)) {
  FUNC_2(VAR_0,
   "a NAME entry referenced ancestor entry '%s' which does not exist in the main index",
   VAR_5->ancestor);
  VAR_9 = -1;
  goto done;
 }

 if (VAR_5->ours) {
  if (FUNC_3(VAR_5->ancestor, VAR_5->ours) == 0)
   VAR_7 = VAR_6;
  else if ((VAR_7 = FUNC_1(VAR_4, VAR_5->ours)) == ((void*)0) ||
   VAR_7->ours == ((void*)0)) {
   FUNC_2(VAR_0,
    "a NAME entry referenced our entry '%s' which does not exist in the main index",
    VAR_5->ours);
   VAR_9 = -1;
   goto done;
  }
 }

 if (VAR_5->theirs) {
  if (FUNC_3(VAR_5->ancestor, VAR_5->theirs) == 0)
   VAR_8 = VAR_6;
  else if (VAR_5->ours && FUNC_3(VAR_5->ours, VAR_5->theirs) == 0)
   VAR_8 = VAR_7;
  else if ((VAR_8 = FUNC_1(VAR_4, VAR_5->theirs)) == ((void*)0) ||
   VAR_8->theirs == ((void*)0)) {
   FUNC_2(VAR_0,
    "a NAME entry referenced their entry '%s' which does not exist in the main index",
    VAR_5->theirs);
   VAR_9 = -1;
   goto done;
  }
 }

 *VAR_1 = VAR_6;
 *VAR_2 = VAR_7;
 *VAR_3 = VAR_8;

done:
 return VAR_9;
}
