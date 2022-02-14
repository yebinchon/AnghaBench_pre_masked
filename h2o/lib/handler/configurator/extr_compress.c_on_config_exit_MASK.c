
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yoml_t ;
struct compress_configurator_t {TYPE_5__* vars; } ;
typedef int h2o_configurator_t ;
struct TYPE_8__ {int * pathconf; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
struct TYPE_7__ {int quality; } ;
struct TYPE_6__ {int quality; } ;
struct TYPE_9__ {TYPE_2__ brotli; TYPE_1__ gzip; } ;


 int FUNC_0 (int *,TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct compress_configurator_t *VAR_3 = (void *)VAR_0;

    if (VAR_1->pathconf != ((void*)0) && (VAR_3->vars->gzip.quality != -1 || VAR_3->vars->brotli.quality != -1))
        FUNC_0(VAR_1->pathconf, VAR_3->vars);

    --VAR_3->vars;
    return 0;
}
