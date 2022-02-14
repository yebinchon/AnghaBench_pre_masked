
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* event_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_5__ {char* msg_buf; } ;
typedef TYPE_2__ event_ctx_t ;



char *FUNC_0 (hashcat_ctx_t *VAR_0)
{
  event_ctx_t *VAR_1 = VAR_0->event_ctx;

  return VAR_1->msg_buf;
}
