
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int exit; int enter; } ;
struct compress_configurator_t {TYPE_3__* vars; TYPE_3__* _vars_stack; TYPE_4__ super; } ;
typedef int h2o_globalconf_t ;
struct TYPE_6__ {int quality; } ;
struct TYPE_5__ {int quality; } ;
struct TYPE_7__ {TYPE_2__ brotli; TYPE_1__ gzip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_4__*,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(h2o_globalconf_t *VAR_7)
{
    struct compress_configurator_t *VAR_8 = (void *)FUNC_0(VAR_7, sizeof(*VAR_8));

    VAR_8->super.enter = VAR_4;
    VAR_8->super.exit = VAR_5;
    FUNC_1(&VAR_8->super, "compress", VAR_0, VAR_2);
    FUNC_1(&VAR_8->super, "compress-minimum-size",
                                    VAR_0 | VAR_1,
                                    VAR_3);
    FUNC_1(&VAR_8->super, "gzip", VAR_0 | VAR_1,
                                    VAR_6);
    VAR_8->vars = VAR_8->_vars_stack;
    VAR_8->vars->gzip.quality = -1;
    VAR_8->vars->brotli.quality = -1;
}
