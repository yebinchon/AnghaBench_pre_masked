
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_link {int sink_count; scalar_t__* remote_sinks; scalar_t__ local_sink; TYPE_2__* link_enc; scalar_t__ ddc; int * hpd_gpio; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* destroy ) (TYPE_2__**) ;} ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__**) ;

__attribute__((used)) static void FUNC_5(struct dc_link *VAR_0)
{
 int VAR_1;

 if (VAR_0->hpd_gpio != ((void*)0)) {
  FUNC_1(VAR_0->hpd_gpio);
  FUNC_2(&VAR_0->hpd_gpio);
  VAR_0->hpd_gpio = ((void*)0);
 }

 if (VAR_0->ddc)
  FUNC_0(&VAR_0->ddc);

 if(VAR_0->link_enc)
  VAR_0->link_enc->funcs->destroy(&VAR_0->link_enc);

 if (VAR_0->local_sink)
  FUNC_3(VAR_0->local_sink);

 for (VAR_1 = 0; VAR_1 < VAR_0->sink_count; ++VAR_1)
  FUNC_3(VAR_0->remote_sinks[VAR_1]);
}
