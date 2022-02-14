
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_13__ {size_t length; } ;
struct TYPE_12__ {int own_cache; TYPE_7__ backends; TYPE_1__* backend; } ;
typedef TYPE_2__ git_odb ;
typedef TYPE_2__ backend_internal ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*) ;
 TYPE_2__* FUNC_4 (TYPE_7__*,size_t) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(git_odb *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->backends.length; ++VAR_1) {
  backend_internal *VAR_2 = FUNC_4(&VAR_0->backends, VAR_1);
  git_odb_backend *VAR_3 = VAR_2->backend;

  VAR_3->free(VAR_3);

  FUNC_0(VAR_2);
 }

 FUNC_3(&VAR_0->backends);
 FUNC_2(&VAR_0->own_cache);

 FUNC_1(VAR_0, sizeof(*VAR_0));
 FUNC_0(VAR_0);
}
