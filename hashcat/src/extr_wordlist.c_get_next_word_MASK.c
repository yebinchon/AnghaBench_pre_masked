
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pos; scalar_t__ cnt; char* buf; int iconv_enabled; char* iconv_tmp; int iconv_ctx; int (* func ) (char*,scalar_t__,int*,int*) ;} ;
typedef TYPE_1__ wl_data_t ;
struct TYPE_9__ {int rule_buf_l; } ;
typedef TYPE_2__ user_options_t ;
struct TYPE_10__ {int rule_len_l; } ;
typedef TYPE_3__ user_options_extra_t ;
typedef int u64 ;
typedef int u32 ;
typedef int rule_buf_out ;
struct TYPE_11__ {TYPE_1__* wl_data; TYPE_3__* user_options_extra; TYPE_2__* user_options; } ;
typedef TYPE_4__ hashcat_ctx_t ;
typedef int HCFILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t FUNC_4 (int ,char**,size_t*,char**,size_t*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (char*,scalar_t__,int*,int*) ;

void FUNC_9 (hashcat_ctx_t *VAR_4, HCFILE *VAR_5, char **VAR_6, u32 *VAR_7)
{
  user_options_t *VAR_8 = VAR_4->user_options;
  user_options_extra_t *VAR_9 = VAR_4->user_options_extra;
  wl_data_t *VAR_10 = VAR_4->wl_data;

  while (VAR_10->pos < VAR_10->cnt)
  {
    u64 VAR_11;
    u64 VAR_12;

    char *VAR_13 = VAR_10->buf + VAR_10->pos;

    VAR_10->func (VAR_13, VAR_10->cnt - VAR_10->pos, &VAR_12, &VAR_11);

    VAR_10->pos += VAR_11;




    VAR_12 = (u32) FUNC_1 (VAR_4, VAR_13, VAR_12);




    if (VAR_10->iconv_enabled == 1)
    {
      char *VAR_14 = VAR_10->iconv_tmp;
      size_t VAR_15 = VAR_0;

      size_t VAR_16 = VAR_12;

      const size_t VAR_17 = FUNC_4 (VAR_10->iconv_ctx, &VAR_13, &VAR_16, &VAR_14, &VAR_15);

      if (VAR_17 == (size_t) -1) continue;

      VAR_13 = VAR_10->iconv_tmp;
      VAR_12 = VAR_0 - VAR_15;
    }



    if (FUNC_7 (VAR_9->rule_len_l, VAR_8->rule_buf_l))
    {
      if (VAR_12 >= VAR_2) continue;

      char VAR_18[VAR_2];

      FUNC_6 (VAR_18, 0, sizeof (VAR_18));

      const int VAR_19 = FUNC_0 (VAR_8->rule_buf_l, VAR_9->rule_len_l, VAR_13, (u32) VAR_12, VAR_18);

      if (VAR_19 < 0) continue;
    }

    if (VAR_12 > VAR_1) continue;

    *VAR_6 = VAR_13;
    *VAR_7 = (u32) VAR_12;

    return;
  }

  if (FUNC_3 (VAR_5))
  {
    FUNC_2 (VAR_3, "BUG feof()!!\n");

    return;
  }

  FUNC_5 (VAR_4, VAR_5);

  FUNC_9 (VAR_4, VAR_5, VAR_6, VAR_7);
}
