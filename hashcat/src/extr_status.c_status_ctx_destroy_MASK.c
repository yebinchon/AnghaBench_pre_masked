
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hashcat_status_final; int mux_hwmon; int mux_display; int mux_counter; int mux_dispatcher; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_6__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3 (hashcat_ctx_t *VAR_0)
{
  status_ctx_t *VAR_1 = VAR_0->status_ctx;

  FUNC_0 (VAR_1->mux_dispatcher);
  FUNC_0 (VAR_1->mux_counter);
  FUNC_0 (VAR_1->mux_display);
  FUNC_0 (VAR_1->mux_hwmon);

  FUNC_1 (VAR_1->hashcat_status_final);

  FUNC_2 (VAR_1, 0, sizeof (status_ctx_t));
}
