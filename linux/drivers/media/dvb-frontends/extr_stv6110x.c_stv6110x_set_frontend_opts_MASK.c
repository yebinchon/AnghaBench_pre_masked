
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv6110x_state {TYPE_2__* frontend; } ;
struct TYPE_3__ {int tuner_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; struct stv6110x_state* tuner_priv; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct stv6110x_state *VAR_1)
{
 VAR_1->frontend->tuner_priv = VAR_1;
 VAR_1->frontend->ops.tuner_ops = VAR_0;
}
