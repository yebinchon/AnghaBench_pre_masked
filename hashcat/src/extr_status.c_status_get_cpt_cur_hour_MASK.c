
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ time_t ;
struct TYPE_7__ {int accessible; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_8__ {TYPE_2__* status_ctx; TYPE_4__* cpt_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_9__ {TYPE_1__* cpt_buf; } ;
typedef TYPE_4__ cpt_ctx_t ;
struct TYPE_6__ {scalar_t__ timestamp; scalar_t__ cracked; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

int FUNC_1 (const hashcat_ctx_t *VAR_1)
{
  const cpt_ctx_t *VAR_2 = VAR_1->cpt_ctx;
  const status_ctx_t *VAR_3 = VAR_1->status_ctx;

  if (VAR_3->accessible == 0) return 0;

  const time_t VAR_4 = FUNC_0 (((void*)0));

  int VAR_5 = 0;

  for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  {
    const u32 VAR_7 = VAR_2->cpt_buf[VAR_6].cracked;
    const time_t VAR_8 = VAR_2->cpt_buf[VAR_6].timestamp;

    if ((VAR_8 + 3600) > VAR_4)
    {
      VAR_5 += VAR_7;
    }
  }

  return VAR_5;
}
