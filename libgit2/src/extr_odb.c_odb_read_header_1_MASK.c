
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_8__ {int (* read_header ) (size_t*,int *,TYPE_1__*,int const*) ;int refresh; } ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_11__ {size_t length; } ;
struct TYPE_9__ {TYPE_7__ backends; } ;
typedef TYPE_2__ git_odb ;
typedef int git_object_t ;
struct TYPE_10__ {TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;



 int VAR_0 ;

 TYPE_3__* FUNC_0 (TYPE_7__*,size_t) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (size_t*,int *,TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_3(
 size_t *VAR_1, git_object_t *VAR_2, git_odb *VAR_3,
 const git_oid *VAR_4, bool VAR_5)
{
 size_t VAR_6;
 git_object_t VAR_7;
 bool VAR_8 = 0;
 int VAR_9;

 if (!VAR_5 && (VAR_7 = FUNC_1(VAR_4)) != VAR_0) {
  *VAR_2 = VAR_7;
  *VAR_1 = 0;
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->backends.length; ++VAR_6) {
  backend_internal *VAR_10 = FUNC_0(&VAR_3->backends, VAR_6);
  git_odb_backend *VAR_11 = VAR_10->backend;

  if (VAR_5 && !VAR_11->refresh)
   continue;

  if (!VAR_11->read_header) {
   VAR_8 = 1;
   continue;
  }

  VAR_9 = VAR_11->read_header(VAR_1, VAR_2, VAR_11, VAR_4);

  switch (VAR_9) {
  case 128:
   VAR_8 = 1;
   break;
  case 129:
   break;
  default:
   return VAR_9;
  }
 }

 return VAR_8 ? 128 : 129;
}
