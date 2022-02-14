
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_stream ;
struct TYPE_8__ {int (* readstream ) (int **,size_t*,int *,TYPE_1__*,int const*) ;} ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_11__ {size_t length; } ;
struct TYPE_9__ {TYPE_6__ backends; } ;
typedef TYPE_2__ git_odb ;
typedef int git_object_t ;
struct TYPE_10__ {TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (TYPE_6__*,size_t) ;
 int FUNC_3 (int **,size_t*,int *,TYPE_1__*,int const*) ;

int FUNC_4(
 git_odb_stream **VAR_2,
 size_t *VAR_3,
 git_object_t *VAR_4,
 git_odb *VAR_5,
 const git_oid *VAR_6)
{
 size_t VAR_7, VAR_8 = 0;
 int VAR_9 = VAR_0;

 FUNC_0(VAR_2 && VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_5->backends.length && VAR_9 < 0; ++VAR_7) {
  backend_internal *VAR_10 = FUNC_2(&VAR_5->backends, VAR_7);
  git_odb_backend *VAR_11 = VAR_10->backend;

  if (VAR_11->readstream != ((void*)0)) {
   ++VAR_8;
   VAR_9 = VAR_11->readstream(VAR_2, VAR_3, VAR_4, VAR_11, VAR_6);
  }
 }

 if (VAR_9 == VAR_1)
  VAR_9 = 0;
 if (VAR_9 < 0 && !VAR_8)
  VAR_9 = FUNC_1("read object streamed");

 return VAR_9;
}
