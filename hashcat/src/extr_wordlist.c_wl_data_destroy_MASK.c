
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int enabled; int iconv_enabled; int iconv_tmp; int iconv_ctx; int buf; } ;
typedef TYPE_1__ wl_data_t ;
struct TYPE_6__ {TYPE_1__* wl_data; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3 (hashcat_ctx_t *VAR_0)
{
  wl_data_t *VAR_1 = VAR_0->wl_data;

  if (VAR_1->enabled == 0) return;

  FUNC_0 (VAR_1->buf);

  if (VAR_1->iconv_enabled == 1)
  {
    FUNC_1 (VAR_1->iconv_ctx);

    VAR_1->iconv_enabled = 0;

    FUNC_0 (VAR_1->iconv_tmp);
  }

  FUNC_2 (VAR_1, 0, sizeof (wl_data_t));
}
