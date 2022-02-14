
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bo; } ;
struct vmw_buffer_object {TYPE_1__ map; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct vmw_buffer_object *VAR_0)
{
 if (VAR_0->map.bo == ((void*)0))
  return;

 FUNC_0(&VAR_0->map);
}
