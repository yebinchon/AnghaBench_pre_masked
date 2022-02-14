
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int run_thread_level1; } ;
typedef TYPE_1__ status_ctx_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_7__ {size_t pos; scalar_t__* bytes; int * timer; } ;
typedef TYPE_2__ link_speed_t ;
struct TYPE_8__ {int brain_link_send_active; int brain_link_send_bytes; TYPE_2__ brain_link_send_speed; } ;
typedef TYPE_3__ hc_device_param_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,char*,size_t,int) ;

bool FUNC_2 (int VAR_1, void *VAR_2, size_t VAR_3, int VAR_4, hc_device_param_t *VAR_5, const status_ctx_t *VAR_6)
{
  link_speed_t *VAR_7 = &VAR_5->brain_link_send_speed;

  if (VAR_5)
  {
    VAR_5->brain_link_send_active = 1;

    FUNC_0 (&VAR_7->timer[VAR_7->pos]);
  }

  ssize_t VAR_8 = FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);

  if (VAR_5)
  {
    VAR_7->bytes[VAR_7->pos] = VAR_8;

    if (VAR_7->pos++ == VAR_0) VAR_7->pos = 0;

    VAR_5->brain_link_send_bytes += VAR_8;
  }

  if (VAR_8 <= 0) return 0;

  if (VAR_6 && VAR_6->run_thread_level1 == 0) return 0;

  while (VAR_8 < (ssize_t) VAR_3)
  {
    char *VAR_9 = (char *) VAR_2;

    if (VAR_5)
    {
      FUNC_0 (&VAR_7->timer[VAR_7->pos]);
    }

    ssize_t VAR_10 = FUNC_1 (VAR_1, VAR_9 + VAR_8, VAR_3 - VAR_8, VAR_4);

    if (VAR_5)
    {
      VAR_7->bytes[VAR_7->pos] = VAR_10;

      if (VAR_7->pos++ == VAR_0) VAR_7->pos = 0;

      VAR_5->brain_link_send_bytes += VAR_10;
    }

    if (VAR_10 <= 0) return 0;

    if (VAR_6 && VAR_6->run_thread_level1 == 0) break;

    VAR_8 += VAR_10;
  }

  if (VAR_5)
  {
    VAR_5->brain_link_send_active = 0;
  }

  return 1;
}
