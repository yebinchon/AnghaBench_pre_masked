
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_17__ ;


struct TYPE_31__ {void* data; int type; int len; int member_0; } ;
typedef TYPE_2__ git_rawobj ;
struct TYPE_30__ {int member_0; } ;
struct TYPE_32__ {TYPE_1__ member_0; } ;
typedef TYPE_3__ git_oid ;
typedef int git_odb_object ;
struct TYPE_33__ {int (* read_prefix ) (TYPE_3__*,void**,int *,int *,TYPE_4__*,TYPE_3__ const*,size_t) ;int refresh; } ;
typedef TYPE_4__ git_odb_backend ;
struct TYPE_29__ {size_t length; } ;
struct TYPE_34__ {TYPE_17__ backends; } ;
typedef TYPE_5__ git_odb ;
struct TYPE_35__ {int ptr; } ;
typedef TYPE_6__ git_buf ;
struct TYPE_36__ {TYPE_4__* backend; } ;
typedef TYPE_7__ backend_internal ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,char*,int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_3__*,void*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_7__* FUNC_10 (TYPE_17__*,size_t) ;
 int FUNC_11 (TYPE_5__*) ;
 int * FUNC_12 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*,void**,int *,int *,TYPE_4__*,TYPE_3__ const*,size_t) ;

__attribute__((used)) static int FUNC_14(git_odb_object **VAR_4, git_odb *VAR_5,
  const git_oid *VAR_6, size_t VAR_7, bool VAR_8)
{
 size_t VAR_9;
 int VAR_10 = 0;
 git_oid VAR_11 = {{0}};
 git_rawobj VAR_12 = {0};
 void *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 git_odb_object *VAR_15;

 for (VAR_9 = 0; VAR_9 < VAR_5->backends.length; ++VAR_9) {
  backend_internal *VAR_16 = FUNC_10(&VAR_5->backends, VAR_9);
  git_odb_backend *VAR_17 = VAR_16->backend;

  if (VAR_8 && !VAR_17->refresh)
   continue;

  if (VAR_17->read_prefix != ((void*)0)) {
   git_oid VAR_18;
   VAR_10 = VAR_17->read_prefix(&VAR_18, &VAR_12.data, &VAR_12.len, &VAR_12.type, VAR_17, VAR_6, VAR_7);

   if (VAR_10 == VAR_1 || VAR_10 == VAR_2) {
    VAR_10 = 0;
    continue;
   }

   if (VAR_10)
    goto out;

   FUNC_0(VAR_13);
   VAR_13 = VAR_12.data;

   if (VAR_14 && FUNC_7(&VAR_18, &VAR_11)) {
    git_buf VAR_19 = VAR_0;

    FUNC_2(&VAR_19, "multiple matches for prefix: %s",
     FUNC_9(&VAR_18));
    FUNC_2(&VAR_19, " %s",
     FUNC_9(&VAR_11));

    VAR_10 = FUNC_4(VAR_19.ptr);
    FUNC_1(&VAR_19);
    goto out;
   }

   VAR_11 = VAR_18;
   VAR_14 = 1;
  }
 }

 if (!VAR_14)
  return VAR_1;

 if (VAR_3) {
  git_oid VAR_20;

  if ((VAR_10 = FUNC_6(&VAR_20, VAR_12.data, VAR_12.len, VAR_12.type)) < 0)
   goto out;

  if (!FUNC_8(&VAR_11, &VAR_20)) {
   VAR_10 = FUNC_5(&VAR_11, &VAR_20);
   goto out;
  }
 }

 if ((VAR_15 = FUNC_12(&VAR_11, &VAR_12)) == ((void*)0)) {
  VAR_10 = -1;
  goto out;
 }

 *VAR_4 = FUNC_3(FUNC_11(VAR_5), VAR_15);

out:
 if (VAR_10)
  FUNC_0(VAR_12.data);

 return VAR_10;
}
