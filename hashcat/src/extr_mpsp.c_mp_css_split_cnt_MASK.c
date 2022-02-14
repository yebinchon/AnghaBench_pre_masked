
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int slow_candidates; } ;
typedef TYPE_2__ user_options_t ;
typedef int u32 ;
struct TYPE_9__ {int css_cnt; TYPE_1__* css_buf; } ;
typedef TYPE_3__ mask_ctx_t ;
struct TYPE_10__ {scalar_t__ attack_exec; int opts_type; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_11__ {TYPE_2__* user_options; TYPE_4__* hashconfig; TYPE_3__* mask_ctx; } ;
typedef TYPE_5__ hashcat_ctx_t ;
struct TYPE_7__ {int cs_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0 (hashcat_ctx_t *VAR_3, const u32 VAR_4, u32 VAR_5[2])
{
  const mask_ctx_t *VAR_6 = VAR_3->mask_ctx;
  const hashconfig_t *VAR_7 = VAR_3->hashconfig;
  const user_options_t *VAR_8 = VAR_3->user_options;

  u32 VAR_9 = VAR_6->css_cnt;
  u32 VAR_10;

  if (VAR_8->slow_candidates == 1)
  {
    VAR_10 = 0;
  }
  else
  {
    if (VAR_7->attack_exec == VAR_0)
    {
      if (VAR_4 < 6)
      {
        VAR_10 = 1;
      }
      else if (VAR_4 == 6)
      {
        VAR_10 = 2;
      }
      else
      {
        if ((VAR_7->opts_type & VAR_2) || (VAR_7->opts_type & VAR_1))
        {
          if (VAR_4 == 8 || VAR_4 == 10)
          {
            VAR_10 = 2;
          }
          else
          {
            VAR_10 = 4;
          }
        }
        else
        {
          if ((VAR_6->css_buf[0].cs_len * VAR_6->css_buf[1].cs_len * VAR_6->css_buf[2].cs_len) > 256)
          {
            VAR_10 = 3;
          }
          else
          {
            VAR_10 = 4;
          }
        }
      }
    }
    else
    {
      VAR_10 = 1;
    }
  }

  VAR_9 -= VAR_10;

  VAR_5[0] = VAR_9;
  VAR_5[1] = VAR_10;
}
