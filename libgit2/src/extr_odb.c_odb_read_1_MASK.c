
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int data; int type; int len; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_odb_object ;
struct TYPE_14__ {int (* read ) (int *,int *,int *,TYPE_2__*,int const*) ;int refresh; } ;
typedef TYPE_2__ git_odb_backend ;
struct TYPE_12__ {size_t length; } ;
struct TYPE_15__ {TYPE_11__ backends; } ;
typedef TYPE_3__ git_odb ;
struct TYPE_16__ {TYPE_2__* backend; } ;
typedef TYPE_4__ backend_internal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int const*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int const*,int *) ;
 TYPE_4__* FUNC_6 (TYPE_11__*,size_t) ;
 int FUNC_7 (TYPE_3__*) ;
 int * FUNC_8 (int const*,TYPE_1__*) ;
 int FUNC_9 (int*,TYPE_1__*,int const*) ;
 int FUNC_10 (int *,int *,int *,TYPE_2__*,int const*) ;

__attribute__((used)) static int FUNC_11(git_odb_object **VAR_3, git_odb *VAR_4, const git_oid *VAR_5,
  bool VAR_6)
{
 size_t VAR_7;
 git_rawobj VAR_8;
 git_odb_object *VAR_9;
 git_oid VAR_10;
 bool VAR_11 = 0;
 int VAR_12 = 0;

 if (!VAR_6) {
  if ((VAR_12 = FUNC_9(&VAR_11, &VAR_8, VAR_5)) < 0)
   return VAR_12;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->backends.length && !VAR_11; ++VAR_7) {
  backend_internal *VAR_13 = FUNC_6(&VAR_4->backends, VAR_7);
  git_odb_backend *VAR_14 = VAR_13->backend;

  if (VAR_6 && !VAR_14->refresh)
   continue;

  if (VAR_14->read != ((void*)0)) {
   VAR_12 = VAR_14->read(&VAR_8.data, &VAR_8.len, &VAR_8.type, VAR_14, VAR_5);
   if (VAR_12 == VAR_1 || VAR_12 == VAR_0)
    continue;

   if (VAR_12 < 0)
    return VAR_12;

   VAR_11 = 1;
  }
 }

 if (!VAR_11)
  return VAR_0;

 if (VAR_2) {
  if ((VAR_12 = FUNC_4(&VAR_10, VAR_8.data, VAR_8.len, VAR_8.type)) < 0)
   goto out;

  if (!FUNC_5(VAR_5, &VAR_10)) {
   VAR_12 = FUNC_3(VAR_5, &VAR_10);
   goto out;
  }
 }

 FUNC_2();
 if ((VAR_9 = FUNC_8(VAR_5, &VAR_8)) == ((void*)0)) {
  VAR_12 = -1;
  goto out;
 }

 *VAR_3 = FUNC_1(FUNC_7(VAR_4), VAR_9);

out:
 if (VAR_12)
  FUNC_0(VAR_8.data);
 return VAR_12;
}
