
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* auth_context; } ;
typedef TYPE_1__ http_server ;
struct TYPE_5__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(http_server *VAR_0)
{
 if (!VAR_0->auth_context)
  return;

 if (VAR_0->auth_context->free)
  VAR_0->auth_context->free(VAR_0->auth_context);

 VAR_0->auth_context = ((void*)0);
}
