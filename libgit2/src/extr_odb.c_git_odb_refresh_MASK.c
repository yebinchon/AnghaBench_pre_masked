
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t length; } ;
struct git_odb {TYPE_5__ backends; } ;
struct TYPE_6__ {int (* refresh ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_7__ {TYPE_1__* backend; } ;
typedef TYPE_2__ backend_internal ;


 int FUNC_0 (struct git_odb*) ;
 TYPE_2__* FUNC_1 (TYPE_5__*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct git_odb *VAR_0)
{
 size_t VAR_1;
 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->backends.length; ++VAR_1) {
  backend_internal *VAR_2 = FUNC_1(&VAR_0->backends, VAR_1);
  git_odb_backend *VAR_3 = VAR_2->backend;

  if (VAR_3->refresh != ((void*)0)) {
   int VAR_4 = VAR_3->refresh(VAR_3);
   if (VAR_4 < 0)
    return VAR_4;
  }
 }

 return 0;
}
