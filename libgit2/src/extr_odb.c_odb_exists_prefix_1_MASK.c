
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_19__ {int member_0; } ;
struct TYPE_20__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_21__ {int (* exists_prefix ) (TYPE_2__*,TYPE_3__*,TYPE_2__ const*,size_t) ;int refresh; } ;
typedef TYPE_3__ git_odb_backend ;
struct TYPE_18__ {size_t length; } ;
struct TYPE_22__ {TYPE_13__ backends; } ;
typedef TYPE_4__ git_odb ;
struct TYPE_23__ {TYPE_3__* backend; } ;
typedef TYPE_5__ backend_internal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_13__*,size_t) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_2__ const*,size_t) ;

__attribute__((used)) static int FUNC_5(git_oid *VAR_2, git_odb *VAR_3,
 const git_oid *VAR_4, size_t VAR_5, bool VAR_6)
{
 size_t VAR_7;
 int VAR_8 = VAR_0, VAR_9 = 0;
 git_oid VAR_10 = {{0}}, VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_3->backends.length; ++VAR_7) {
  backend_internal *VAR_12 = FUNC_3(&VAR_3->backends, VAR_7);
  git_odb_backend *VAR_13 = VAR_12->backend;

  if (VAR_6 && !VAR_13->refresh)
   continue;

  if (!VAR_13->exists_prefix)
   continue;

  VAR_8 = VAR_13->exists_prefix(&VAR_11, VAR_13, VAR_4, VAR_5);
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
   continue;
  if (VAR_8)
   return VAR_8;


  if (VAR_9) {
   if (FUNC_1(&VAR_10, &VAR_11))
    return FUNC_0("multiple matches for prefix");
  } else {
   FUNC_2(&VAR_10, &VAR_11);
   VAR_9++;
  }
 }

 if (!VAR_9)
  return VAR_0;

 if (VAR_2)
  FUNC_2(VAR_2, &VAR_10);

 return 0;
}
