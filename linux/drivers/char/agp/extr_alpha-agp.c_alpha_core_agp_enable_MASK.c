
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct agp_bridge_data {TYPE_5__* dev_private_data; } ;
struct TYPE_8__ {int enable; } ;
struct TYPE_9__ {int lw; TYPE_2__ bits; } ;
struct TYPE_7__ {int lw; } ;
struct TYPE_11__ {TYPE_3__ mode; TYPE_4__* ops; TYPE_1__ capability; } ;
typedef TYPE_5__ alpha_agp_info ;
struct TYPE_10__ {int (* configure ) (TYPE_5__*) ;} ;


 int FUNC_0 (struct agp_bridge_data*,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(struct agp_bridge_data *VAR_0, u32 VAR_1)
{
 alpha_agp_info *VAR_2 = VAR_0->dev_private_data;

 VAR_2->mode.lw = FUNC_0(VAR_0, VAR_1,
     VAR_2->capability.lw);

 VAR_2->mode.bits.enable = 1;
 VAR_2->ops->configure(VAR_2);

 FUNC_1(VAR_2->mode.lw, 0);
}
