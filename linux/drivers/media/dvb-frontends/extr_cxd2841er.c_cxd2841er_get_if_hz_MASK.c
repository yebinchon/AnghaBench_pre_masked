
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* get_if_frequency ) (TYPE_3__*,int*) ;} ;
struct TYPE_5__ {TYPE_1__ tuner_ops; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct cxd2841er_priv {int flags; TYPE_3__ frontend; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int*) ;

__attribute__((used)) static int FUNC_1(struct cxd2841er_priv *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (VAR_1->frontend.ops.tuner_ops.get_if_frequency
   && (VAR_1->flags & VAR_0))
  VAR_1->frontend.ops.tuner_ops.get_if_frequency(
   &VAR_1->frontend, &VAR_3);
 else
  VAR_3 = VAR_2;

 return VAR_3;
}
