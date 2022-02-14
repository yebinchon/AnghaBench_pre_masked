
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_3__ {int num_threads; } ;
struct TYPE_4__ {TYPE_1__ quic; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,char*,int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    if (FUNC_0(VAR_1, VAR_3, "%zu", &VAR_0.quic.num_threads) != 0)
        return -1;
    return 0;
}
