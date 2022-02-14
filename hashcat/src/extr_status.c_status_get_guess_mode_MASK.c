
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rp_files_cnt; scalar_t__ rp_gen; scalar_t__ attack_mode; scalar_t__ custom_charset_4; scalar_t__ custom_charset_3; scalar_t__ custom_charset_2; scalar_t__ custom_charset_1; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_7__ {scalar_t__ wordlist_mode; } ;
typedef TYPE_2__ user_options_extra_t ;
struct TYPE_8__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_4__* combinator_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_9__ {scalar_t__ combs_mode; } ;
typedef TYPE_4__ combinator_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;

int FUNC_0 (const hashcat_ctx_t *VAR_22)
{
  const combinator_ctx_t *VAR_23 = VAR_22->combinator_ctx;
  const user_options_t *VAR_24 = VAR_22->user_options;
  const user_options_extra_t *VAR_25 = VAR_22->user_options_extra;

  bool VAR_26 = 0;
  bool VAR_27 = 0;
  bool VAR_28 = 0;
  bool VAR_29 = 0;
  bool VAR_30 = 0;

  if (VAR_25->wordlist_mode == VAR_21) VAR_26 = 1;

  if (VAR_24->rp_files_cnt > 0) VAR_27 = 1;
  if (VAR_24->rp_gen > 0) VAR_28 = 1;

  if (VAR_23->combs_mode == VAR_5) VAR_29 = 1;

  if (VAR_24->custom_charset_1) VAR_30 = 1;
  if (VAR_24->custom_charset_2) VAR_30 = 1;
  if (VAR_24->custom_charset_3) VAR_30 = 1;
  if (VAR_24->custom_charset_4) VAR_30 = 1;

  if (VAR_24->attack_mode == VAR_4)
  {
    if (VAR_26 == 1)
    {
      if (VAR_27 == 1)
      {
        return VAR_16;
      }
      if (VAR_28 == 1)
      {
        return VAR_17;
      }
      return VAR_15;
    }
    if (VAR_27 == 1)
    {
      return VAR_19;
    }
    if (VAR_28 == 1)
    {
      return VAR_20;
    }
    return VAR_18;
  }

  if (VAR_24->attack_mode == VAR_1)
  {
    if (VAR_29 == 1)
    {
      return VAR_6;
    }
    return VAR_7;
  }

  if (VAR_24->attack_mode == VAR_0)
  {
    if (VAR_30 == 1)
    {
      return VAR_13;
    }
    return VAR_12;
  }

  if (VAR_24->attack_mode == VAR_2)
  {
    if (VAR_30 == 1)
    {
      return VAR_9;
    }
    return VAR_8;
  }

  if (VAR_24->attack_mode == VAR_3)
  {
    if (VAR_30 == 1)
    {
      return VAR_11;
    }
    return VAR_10;
  }

  return VAR_14;
}
