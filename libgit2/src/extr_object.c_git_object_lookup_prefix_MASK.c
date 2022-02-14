
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int objects; } ;
typedef TYPE_3__ git_repository ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_23__ {TYPE_2__ member_0; } ;
typedef TYPE_4__ git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;
typedef scalar_t__ git_object_t ;
struct TYPE_20__ {scalar_t__ type; } ;
struct TYPE_24__ {TYPE_1__ cached; } ;
typedef TYPE_5__ git_object ;
struct TYPE_25__ {scalar_t__ flags; } ;
typedef TYPE_6__ git_cached_obj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (int *,TYPE_4__ const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_5__**,TYPE_3__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,TYPE_4__ const*) ;
 int FUNC_7 (int **,int *,TYPE_4__*,size_t) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__ const*,size_t) ;
 int FUNC_9 (int **,TYPE_3__*) ;

int FUNC_10(
 git_object **VAR_9,
 git_repository *VAR_10,
 const git_oid *VAR_11,
 size_t VAR_12,
 git_object_t VAR_13)
{
 git_object *VAR_14 = ((void*)0);
 git_odb *VAR_15 = ((void*)0);
 git_odb_object *VAR_16 = ((void*)0);
 int VAR_17 = 0;

 FUNC_0(VAR_10 && VAR_9 && VAR_11);

 if (VAR_12 < VAR_8) {
  FUNC_2(VAR_5, "ambiguous lookup - OID prefix is too short");
  return VAR_2;
 }

 VAR_17 = FUNC_9(&VAR_15, VAR_10);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_12 > VAR_7)
  VAR_12 = VAR_7;

 if (VAR_12 == VAR_7) {
  git_cached_obj *VAR_18 = ((void*)0);




  VAR_18 = FUNC_1(&VAR_10->objects, VAR_11);
  if (VAR_18 != ((void*)0)) {
   if (VAR_18->flags == VAR_0) {
    VAR_14 = (git_object *)VAR_18;

    if (VAR_13 != VAR_6 && VAR_13 != VAR_14->cached.type) {
     FUNC_4(VAR_14);
     FUNC_2(VAR_4,
      "the requested type does not match the type in ODB");
     return VAR_3;
    }

    *VAR_9 = VAR_14;
    return 0;
   } else if (VAR_18->flags == VAR_1) {
    VAR_16 = (git_odb_object *)VAR_18;
   } else {
    FUNC_0(!"Wrong caching type in the global object cache");
   }
  } else {





   VAR_17 = FUNC_6(&VAR_16, VAR_15, VAR_11);
  }
 } else {
  git_oid VAR_19 = {{ 0 }};

  FUNC_8(&VAR_19, VAR_11, VAR_12);
  VAR_17 = FUNC_7(&VAR_16, VAR_15, &VAR_19, VAR_12);
 }

 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_9, VAR_10, VAR_16, VAR_13);

 FUNC_5(VAR_16);

 return VAR_17;
}
