
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t length; } ;
struct TYPE_7__ {TYPE_2__ backends; } ;
typedef TYPE_1__ git_config ;
typedef int backend_internal ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*,size_t) ;

__attribute__((used)) static void FUNC_5(git_config *VAR_1)
{
 size_t VAR_2;
 backend_internal *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->backends.length; ++VAR_2) {
  VAR_3 = FUNC_4(&VAR_1->backends, VAR_2);
  FUNC_0(VAR_3, VAR_0);
 }

 FUNC_3(&VAR_1->backends);

 FUNC_2(VAR_1, sizeof(*VAR_1));
 FUNC_1(VAR_1);
}
