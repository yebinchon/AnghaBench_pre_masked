
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int backends; } ;
typedef TYPE_1__ git_config ;
struct TYPE_6__ {int backend; } ;
typedef TYPE_2__ backend_internal ;


 TYPE_2__* FUNC_0 (int *,size_t) ;

__attribute__((used)) static int FUNC_1(size_t *VAR_0, const git_config *VAR_1, size_t VAR_2)
{
 backend_internal *VAR_3;

 for (; VAR_2 > 0; --VAR_2) {
  VAR_3 = FUNC_0(&VAR_1->backends, VAR_2 - 1);
  if (!VAR_3 || !VAR_3->backend)
   continue;

  *VAR_0 = VAR_2;
  return 0;
 }

 return -1;
}
