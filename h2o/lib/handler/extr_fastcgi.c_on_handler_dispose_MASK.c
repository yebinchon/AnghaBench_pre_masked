
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h2o_handler_t ;
struct TYPE_7__ {int base; } ;
struct TYPE_6__ {int data; int (* dispose ) (TYPE_4__*,int ) ;} ;
struct TYPE_8__ {TYPE_2__ document_root; TYPE_1__ callbacks; } ;
struct TYPE_9__ {TYPE_3__ config; int sockpool; } ;
typedef TYPE_4__ h2o_fastcgi_handler_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(h2o_handler_t *VAR_0)
{
    h2o_fastcgi_handler_t *VAR_1 = (void *)VAR_0;

    if (VAR_1->config.callbacks.dispose != ((void*)0))
        VAR_1->config.callbacks.dispose(VAR_1, VAR_1->config.callbacks.data);

    FUNC_1(&VAR_1->sockpool);
    FUNC_0(VAR_1->config.document_root.base);
}
