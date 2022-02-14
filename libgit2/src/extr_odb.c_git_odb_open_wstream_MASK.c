
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int git_off_t ;
struct TYPE_14__ {scalar_t__ received_bytes; int declared_size; int * hash_ctx; } ;
typedef TYPE_1__ git_odb_stream ;
struct TYPE_15__ {int (* writestream ) (TYPE_1__**,TYPE_2__*,int ,int ) ;int * write; } ;
typedef TYPE_2__ git_odb_backend ;
struct TYPE_13__ {size_t length; } ;
struct TYPE_16__ {TYPE_10__ backends; } ;
typedef TYPE_3__ git_odb ;
typedef int git_object_t ;
typedef int git_hash_ctx ;
struct TYPE_17__ {scalar_t__ is_alternate; TYPE_2__* backend; } ;
typedef TYPE_4__ backend_internal ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 TYPE_4__* FUNC_6 (TYPE_10__*,size_t) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_1__**,TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_1__**,TYPE_2__*,int ,int ) ;

int FUNC_10(
 git_odb_stream **VAR_2, git_odb *VAR_3, git_off_t VAR_4, git_object_t VAR_5)
{
 size_t VAR_6, VAR_7 = 0;
 int VAR_8 = VAR_0;
 git_hash_ctx *VAR_9 = ((void*)0);

 FUNC_1(VAR_2 && VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3->backends.length && VAR_8 < 0; ++VAR_6) {
  backend_internal *VAR_10 = FUNC_6(&VAR_3->backends, VAR_6);
  git_odb_backend *VAR_11 = VAR_10->backend;


  if (VAR_10->is_alternate)
   continue;

  if (VAR_11->writestream != ((void*)0)) {
   ++VAR_7;
   VAR_8 = VAR_11->writestream(VAR_2, VAR_11, VAR_4, VAR_5);
  } else if (VAR_11->write != ((void*)0)) {
   ++VAR_7;
   VAR_8 = FUNC_8(VAR_2, VAR_11, VAR_4, VAR_5);
  }
 }

 if (VAR_8 < 0) {
  if (VAR_8 == VAR_1)
   VAR_8 = 0;
  else if (!VAR_7)
   VAR_8 = FUNC_5("write object");

  goto done;
 }

 VAR_9 = FUNC_3(sizeof(git_hash_ctx));
 FUNC_0(VAR_9);

 if ((VAR_8 = FUNC_4(VAR_9)) < 0 ||
  (VAR_8 = FUNC_7(VAR_9, VAR_4, VAR_5)) < 0)
  goto done;

 (*VAR_2)->hash_ctx = VAR_9;
 (*VAR_2)->declared_size = VAR_4;
 (*VAR_2)->received_bytes = 0;

done:
 if (VAR_8)
  FUNC_2(VAR_9);
 return VAR_8;
}
