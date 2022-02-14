
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ limit; } ;
typedef TYPE_1__ user_options_t ;
typedef scalar_t__ u64 ;
struct TYPE_12__ {scalar_t__ words_off; scalar_t__ words_base; int mux_dispatcher; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_13__ {scalar_t__ words_off; } ;
typedef TYPE_3__ hc_device_param_t ;
struct TYPE_14__ {TYPE_1__* user_options; TYPE_2__* status_ctx; TYPE_5__* backend_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_15__ {scalar_t__ kernel_power_all; scalar_t__ kernel_power_final; } ;
typedef TYPE_5__ backend_ctx_t ;


 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__ const) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,scalar_t__ const) ;

__attribute__((used)) static u64 FUNC_5 (hashcat_ctx_t *VAR_0, hc_device_param_t *VAR_1, const u64 VAR_2)
{
  backend_ctx_t *VAR_3 = VAR_0->backend_ctx;
  status_ctx_t *VAR_4 = VAR_0->status_ctx;
  user_options_t *VAR_5 = VAR_0->user_options;

  FUNC_2 (VAR_4->mux_dispatcher);

  const u64 VAR_6 = VAR_4->words_off;
  const u64 VAR_7 = (VAR_5->limit == 0) ? VAR_4->words_base : FUNC_0 (VAR_5->limit, VAR_4->words_base);

  VAR_1->words_off = VAR_6;

  const u64 VAR_8 = VAR_3->kernel_power_all;

  const u64 VAR_9 = VAR_7 - VAR_6;

  if (VAR_9 < VAR_8)
  {
    if (VAR_3->kernel_power_final == 0)
    {
      FUNC_4 (VAR_0, VAR_9);
    }
  }

  const u64 VAR_10 = FUNC_1 (VAR_3, VAR_1);

  u64 VAR_11 = FUNC_0 (VAR_9, VAR_10);

  VAR_11 = FUNC_0 (VAR_11, VAR_2);

  VAR_4->words_off += VAR_11;

  FUNC_3 (VAR_4->mux_dispatcher);

  return VAR_11;
}
