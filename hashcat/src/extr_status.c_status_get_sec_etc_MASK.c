
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ wordlist_mode; } ;
typedef TYPE_1__ user_options_extra_t ;
typedef double u64 ;
typedef double time_t ;
struct TYPE_10__ {scalar_t__ devices_status; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_11__ {TYPE_1__* user_options_extra; TYPE_2__* status_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double FUNC_0 (TYPE_3__ const*) ;
 double FUNC_1 (TYPE_3__ const*) ;
 double FUNC_2 (TYPE_3__ const*) ;
 double FUNC_3 (TYPE_3__ const*) ;

time_t FUNC_4 (const hashcat_ctx_t *VAR_3)
{
  const status_ctx_t *VAR_4 = VAR_3->status_ctx;
  const user_options_extra_t *VAR_5 = VAR_3->user_options_extra;

  time_t VAR_6 = 0;

  if ((VAR_5->wordlist_mode == VAR_1) || (VAR_5->wordlist_mode == VAR_2))
  {
    if (VAR_4->devices_status != VAR_0)
    {
      const u64 VAR_7 = FUNC_1 (VAR_3);
      const u64 VAR_8 = FUNC_2 (VAR_3);

      const u64 VAR_9 = FUNC_3 (VAR_3);

      const double VAR_10 = FUNC_0 (VAR_3);

      if (VAR_10 > 0)
      {
        const u64 VAR_11 = VAR_8 - VAR_7;

        u64 VAR_12 = (u64) ((VAR_11 - VAR_9) / VAR_10);

        VAR_6 = VAR_12 / 1000;
      }
    }
  }

  return VAR_6;
}
