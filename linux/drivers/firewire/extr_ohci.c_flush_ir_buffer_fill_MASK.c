
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* mc ) (TYPE_5__*,scalar_t__,int ) ;} ;
struct TYPE_10__ {int callback_data; TYPE_1__ callback; } ;
struct TYPE_9__ {TYPE_3__* ohci; } ;
struct iso_context {int mc_buffer_bus; scalar_t__ mc_completed; TYPE_5__ base; TYPE_4__ context; } ;
struct TYPE_7__ {int device; } ;
struct TYPE_8__ {TYPE_2__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct iso_context *VAR_2)
{
 FUNC_0(VAR_2->context.ohci->card.device,
          VAR_2->mc_buffer_bus & VAR_1,
          VAR_2->mc_buffer_bus & ~VAR_1,
          VAR_2->mc_completed, VAR_0);

 VAR_2->base.callback.mc(&VAR_2->base,
         VAR_2->mc_buffer_bus + VAR_2->mc_completed,
         VAR_2->base.callback_data);
 VAR_2->mc_completed = 0;
}
