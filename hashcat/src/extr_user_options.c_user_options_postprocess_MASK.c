
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_6__ {scalar_t__ wordlist_mode; } ;
typedef TYPE_2__ user_options_extra_t ;
struct TYPE_7__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;

void FUNC_0 (hashcat_ctx_t *VAR_1)
{
  user_options_t *VAR_2 = VAR_1->user_options;
  user_options_extra_t *VAR_3 = VAR_1->user_options_extra;



  if (VAR_3->wordlist_mode == VAR_0)
  {
    VAR_2->status = 1;
  }
}
