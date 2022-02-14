
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int css_cnt; TYPE_3__* css_buf; } ;
typedef TYPE_1__ mask_ctx_t ;
struct TYPE_9__ {TYPE_1__* mask_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_10__ {int cs_len; scalar_t__* cs_buf; } ;
typedef TYPE_3__ cs_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_0)
{
  mask_ctx_t *VAR_1 = VAR_0->mask_ctx;

  u32 VAR_2 = VAR_1->css_cnt * 2;

  if (VAR_2 > 256) return -1;

  cs_t *VAR_3 = (cs_t *) FUNC_0 (VAR_2, sizeof (cs_t));

  for (u32 VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1->css_cnt; VAR_4 += 1, VAR_5 += 2)
  {
    VAR_3[VAR_5 + 0].cs_buf[0] = 0;
    VAR_3[VAR_5 + 0].cs_len = 1;

    FUNC_2 (&VAR_3[VAR_5 + 1], &VAR_1->css_buf[VAR_4], sizeof (cs_t));
  }

  FUNC_2 (VAR_1->css_buf, VAR_3, VAR_2 * sizeof (cs_t));

  VAR_1->css_cnt = VAR_2;

  FUNC_1 (VAR_3);

  return 0;
}
