
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_26__ {scalar_t__ cnt; char* buf; int iconv_enabled; char* iconv_tmp; int iconv_ctx; int (* func ) (char*,scalar_t__,scalar_t__*,scalar_t__*) ;} ;
typedef TYPE_2__ wl_data_t ;
struct TYPE_27__ {scalar_t__ attack_mode; int rule_buf_l; int encoding_to; int encoding_from; } ;
typedef TYPE_3__ user_options_t ;
struct TYPE_28__ {scalar_t__ attack_kern; int rule_len_l; } ;
typedef TYPE_4__ user_options_extra_t ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ time_t ;
struct TYPE_29__ {scalar_t__ kernel_rules_cnt; } ;
typedef TYPE_5__ straight_ctx_t ;
typedef int rule_buf_out ;
struct TYPE_30__ {scalar_t__ bfs_cnt; } ;
typedef TYPE_6__ mask_ctx_t ;
struct TYPE_31__ {int opti_type; } ;
typedef TYPE_7__ hashconfig_t ;
struct TYPE_32__ {TYPE_2__* wl_data; TYPE_3__* user_options; TYPE_4__* user_options_extra; TYPE_6__* mask_ctx; TYPE_5__* straight_ctx; TYPE_7__* hashconfig; TYPE_10__* combinator_ctx; } ;
typedef TYPE_8__ hashcat_ctx_t ;
struct TYPE_24__ {scalar_t__ st_size; scalar_t__ st_blocks; scalar_t__ st_blksize; scalar_t__ STAT_NANOSECONDS_ACCESS_TIME; scalar_t__ st_atime; scalar_t__ st_rdev; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_nlink; scalar_t__ st_mode; } ;
struct TYPE_33__ {char* encoding_from; char* encoding_to; TYPE_14__ stat; scalar_t__ cnt; } ;
typedef TYPE_9__ dictstat_t ;
struct TYPE_22__ {scalar_t__ combs_cnt; } ;
typedef TYPE_10__ combinator_ctx_t ;
struct TYPE_25__ {scalar_t__ st_size; } ;
struct TYPE_23__ {char const* dictfile; scalar_t__ cached_cnt; double percent; scalar_t__ runtime; scalar_t__ cnt2; scalar_t__ cnt; scalar_t__ comp; scalar_t__ keyspace; TYPE_1__ stat; } ;
typedef TYPE_11__ cache_hit_t ;
typedef int cache_hit ;
typedef TYPE_11__ cache_generate_t ;
typedef int cache_generate ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_11__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ,char*,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_14__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (int ,char**,size_t*,char**,size_t*) ;
 int FUNC_9 (TYPE_8__*,int *) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (char*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (scalar_t__*) ;

int FUNC_17 (hashcat_ctx_t *VAR_9, HCFILE *VAR_10, const char *VAR_11, u64 *VAR_12)
{
  combinator_ctx_t *VAR_13 = VAR_9->combinator_ctx;
  hashconfig_t *VAR_14 = VAR_9->hashconfig;
  straight_ctx_t *VAR_15 = VAR_9->straight_ctx;
  mask_ctx_t *VAR_16 = VAR_9->mask_ctx;
  user_options_extra_t *VAR_17 = VAR_9->user_options_extra;
  user_options_t *VAR_18 = VAR_9->user_options;
  wl_data_t *VAR_19 = VAR_9->wl_data;



  dictstat_t VAR_20;

  VAR_20.cnt = 0;

  if (FUNC_5 (FUNC_7 (VAR_10), &VAR_20.stat))
  {
    *VAR_12 = 0;

    return 0;
  }

  VAR_20.stat.st_mode = 0;
  VAR_20.stat.st_nlink = 0;
  VAR_20.stat.st_uid = 0;
  VAR_20.stat.st_gid = 0;
  VAR_20.stat.st_rdev = 0;
  VAR_20.stat.st_atime = 0;
  FUNC_10 (VAR_20.encoding_from, 0, sizeof (VAR_20.encoding_from));
  FUNC_10 (VAR_20.encoding_to, 0, sizeof (VAR_20.encoding_to));

  FUNC_14 (VAR_20.encoding_from, VAR_18->encoding_from, sizeof (VAR_20.encoding_from) - 1);
  FUNC_14 (VAR_20.encoding_to, VAR_18->encoding_to, sizeof (VAR_20.encoding_to) - 1);

  if (VAR_20.stat.st_size == 0)
  {
    *VAR_12 = 0;

    return 0;
  }

  const u64 VAR_21 = FUNC_4 (VAR_9, &VAR_20);

  if (FUNC_13 (VAR_17->rule_len_l, VAR_18->rule_buf_l) == 0)
  {
    if (VAR_21)
    {
      u64 VAR_22 = VAR_21;

      if (VAR_17->attack_kern == VAR_1)
      {
        if (FUNC_12 (VAR_22, VAR_15->kernel_rules_cnt) == 0) return -1;

        VAR_22 *= VAR_15->kernel_rules_cnt;
      }
      else if (VAR_17->attack_kern == VAR_0)
      {
        if (((VAR_14->opti_type & VAR_6) == 0) && (VAR_18->attack_mode == VAR_2))
        {
          if (FUNC_12 (VAR_22, VAR_16->bfs_cnt) == 0) return -1;

          VAR_22 *= VAR_16->bfs_cnt;
        }
        else
        {
          if (FUNC_12 (VAR_22, VAR_13->combs_cnt) == 0) return -1;

          VAR_22 *= VAR_13->combs_cnt;
        }
      }

      cache_hit_t VAR_23;

      VAR_23.dictfile = VAR_11;
      VAR_23.stat.st_size = VAR_20.stat.st_size;
      VAR_23.cached_cnt = VAR_21;
      VAR_23.keyspace = VAR_22;

      FUNC_0 (VAR_4, &VAR_23, sizeof (VAR_23));

      *VAR_12 = VAR_22;

      return 0;
    }
  }

  time_t VAR_24;

  FUNC_16 (&VAR_24);

  time_t VAR_25 = 0;
  time_t VAR_26 = 0;

  u64 VAR_27 = 0;
  u64 VAR_28 = 0;
  u64 VAR_29 = 0;

  while (!FUNC_6 (VAR_10))
  {
    FUNC_9 (VAR_9, VAR_10);

    VAR_27 += VAR_19->cnt;

    u64 VAR_30 = 0;

    while (VAR_30 < VAR_19->cnt)
    {
      u64 VAR_31;
      u64 VAR_32;

      char *VAR_33 = VAR_19->buf + VAR_30;

      VAR_19->func (VAR_33, VAR_19->cnt - VAR_30, &VAR_31, &VAR_32);

      VAR_30 += VAR_32;




      VAR_31 = (u32) FUNC_2 (VAR_9, VAR_33, VAR_31);



      if (VAR_19->iconv_enabled == 1)
      {
        char *VAR_34 = VAR_19->iconv_tmp;
        size_t VAR_35 = VAR_5;

        size_t VAR_36 = VAR_31;

        const size_t VAR_37 = FUNC_8 (VAR_19->iconv_ctx, &VAR_33, &VAR_36, &VAR_34, &VAR_35);

        if (VAR_37 == (size_t) -1) continue;

        VAR_33 = VAR_19->iconv_tmp;
        VAR_31 = VAR_5 - VAR_35;
      }

      if (FUNC_13 (VAR_17->rule_len_l, VAR_18->rule_buf_l))
      {
        if (VAR_31 >= VAR_8) continue;

        char VAR_38[VAR_8];

        FUNC_10 (VAR_38, 0, sizeof (VAR_38));

        const int VAR_39 = FUNC_1 (VAR_18->rule_buf_l, VAR_17->rule_len_l, VAR_33, (u32) VAR_31, VAR_38);

        if (VAR_39 < 0) continue;
      }

      VAR_29++;

      if (VAR_31 > VAR_7) continue;

      VAR_20.cnt++;

      if (VAR_17->attack_kern == VAR_1)
      {
        if (FUNC_11 (VAR_28, VAR_15->kernel_rules_cnt) == 0) return -1;

        VAR_28 += VAR_15->kernel_rules_cnt;
      }
      else if (VAR_17->attack_kern == VAR_0)
      {
        if (((VAR_14->opti_type & VAR_6) == 0) && (VAR_18->attack_mode == VAR_2))
        {
          if (FUNC_11 (VAR_28, VAR_16->bfs_cnt) == 0) return -1;

          VAR_28 += VAR_16->bfs_cnt;
        }
        else
        {
          if (FUNC_11 (VAR_28, VAR_13->combs_cnt) == 0) return -1;

          VAR_28 += VAR_13->combs_cnt;
        }
      }
    }

    FUNC_16 (&VAR_25);

    if ((VAR_25 - VAR_26) == 0) continue;

    FUNC_16 (&VAR_26);

    double VAR_40 = ((double) VAR_27 / (double) VAR_20.stat.st_size) * 100;

    if (VAR_40 < 100)
    {
      cache_generate_t VAR_41;

      VAR_41.dictfile = VAR_11;
      VAR_41.comp = VAR_27;
      VAR_41.percent = VAR_40;
      VAR_41.cnt = VAR_28;
      VAR_41.cnt2 = VAR_29;

      FUNC_0 (VAR_3, &VAR_41, sizeof (VAR_41));
    }
  }

  time_t VAR_42;

  FUNC_16 (&VAR_42);

  cache_generate_t VAR_43;

  VAR_43.dictfile = VAR_11;
  VAR_43.comp = VAR_27;
  VAR_43.percent = 100;
  VAR_43.cnt = VAR_28;
  VAR_43.cnt2 = VAR_29;
  VAR_43.runtime = VAR_42 - VAR_24;

  FUNC_0 (VAR_3, &VAR_43, sizeof (VAR_43));

  FUNC_3 (VAR_9, &VAR_20);



  *VAR_12 = VAR_28;

  return 0;
}
