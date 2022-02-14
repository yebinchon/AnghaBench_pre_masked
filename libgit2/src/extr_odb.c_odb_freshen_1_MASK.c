
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_9__ {int (* exists ) (TYPE_1__*,int const*) ;int (* freshen ) (TYPE_1__*,int const*) ;int refresh; } ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_12__ {size_t length; } ;
struct TYPE_10__ {TYPE_8__ backends; } ;
typedef TYPE_2__ git_odb ;
struct TYPE_11__ {TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;


 TYPE_3__* FUNC_0 (TYPE_8__*,size_t) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

__attribute__((used)) static int FUNC_3(
 git_odb *VAR_0,
 const git_oid *VAR_1,
 bool VAR_2)
{
 size_t VAR_3;
 bool VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->backends.length && !VAR_4; ++VAR_3) {
  backend_internal *VAR_5 = FUNC_0(&VAR_0->backends, VAR_3);
  git_odb_backend *VAR_6 = VAR_5->backend;

  if (VAR_2 && !VAR_6->refresh)
   continue;

  if (VAR_6->freshen != ((void*)0))
   VAR_4 = !VAR_6->freshen(VAR_6, VAR_1);
  else if (VAR_6->exists != ((void*)0))
   VAR_4 = VAR_6->exists(VAR_6, VAR_1);
 }

 return (int)VAR_4;
}
