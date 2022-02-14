
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int (* get_if_frequency ) (TYPE_4__*,int*) ;} ;
struct TYPE_7__ {TYPE_2__ tuner_ops; } ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct stv0367_state {TYPE_1__* config; TYPE_4__ fe; scalar_t__ auto_if_khz; } ;
struct TYPE_5__ {int if_khz; } ;


 int FUNC_0 (TYPE_4__*,int*) ;

__attribute__((used)) static int FUNC_1(struct stv0367_state *VAR_0, u32 *VAR_1)
{
 if (VAR_0->auto_if_khz && VAR_0->fe.ops.tuner_ops.get_if_frequency) {
  VAR_0->fe.ops.tuner_ops.get_if_frequency(&VAR_0->fe, VAR_1);
  *VAR_1 = *VAR_1 / 1000;
 } else
  *VAR_1 = VAR_0->config->if_khz;

 return 0;
}
