
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int oid; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ target; int peel; } ;
typedef TYPE_2__ git_reference ;
typedef scalar_t__ git_object_t ;
typedef int git_object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,scalar_t__) ;
 int FUNC_4 (int **,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__ const*) ;
 int FUNC_9 (TYPE_2__**,TYPE_2__ const*) ;
 int FUNC_10 (int,TYPE_2__ const*,char*) ;

int FUNC_11(
 git_object **VAR_3,
 const git_reference *VAR_4,
 git_object_t VAR_5)
{
 const git_reference *VAR_6 = ((void*)0);
 git_reference *VAR_7 = ((void*)0);
 git_object *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_0(VAR_4);

 if (VAR_4->type == VAR_2) {
  VAR_6 = VAR_4;
 } else {
  if ((VAR_9 = FUNC_9(&VAR_7, VAR_4)) < 0)
   return FUNC_10(VAR_9, VAR_4, "Cannot resolve reference");

  VAR_6 = VAR_7;
 }







 if (VAR_5 != VAR_1 && !FUNC_6(&VAR_6->peel)) {
  VAR_9 = FUNC_3(&VAR_8,
   FUNC_8(VAR_4), &VAR_6->peel, VAR_0);
 } else {
  VAR_9 = FUNC_3(&VAR_8,
   FUNC_8(VAR_4), &VAR_6->target.oid, VAR_0);
 }

 if (VAR_9 < 0) {
  FUNC_10(VAR_9, VAR_4, "Cannot retrieve reference target");
  goto cleanup;
 }

 if (VAR_5 == VAR_0 && FUNC_5(VAR_8) != VAR_1)
  VAR_9 = FUNC_1(VAR_3, VAR_8);
 else
  VAR_9 = FUNC_4(VAR_3, VAR_8, VAR_5);

cleanup:
 FUNC_2(VAR_8);
 FUNC_7(VAR_7);

 return VAR_9;
}
