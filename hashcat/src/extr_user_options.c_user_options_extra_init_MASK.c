
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int attack_mode; int benchmark; int example_hashes; int backend_info; int keyspace; int hc_argc; int stdout_flag; int ** hc_argv; int rule_buf_r; int rule_buf_l; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_6__ {scalar_t__ attack_kern; int rule_len_l; int rule_len_r; int hc_workc; void* wordlist_mode; int ** hc_workv; int * hc_hash; } ;
typedef TYPE_2__ user_options_extra_t ;
struct TYPE_7__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1 (hashcat_ctx_t *VAR_8)
{
  user_options_t *VAR_9 = VAR_8->user_options;
  user_options_extra_t *VAR_10 = VAR_8->user_options_extra;



  VAR_10->attack_kern = VAR_2;

  switch (VAR_9->attack_mode)
  {
    case 128: VAR_10->attack_kern = VAR_3; break;
    case 131: VAR_10->attack_kern = VAR_1; break;
    case 132: VAR_10->attack_kern = VAR_0; break;
    case 130: VAR_10->attack_kern = VAR_1; break;
    case 129: VAR_10->attack_kern = VAR_1; break;
  }



  VAR_10->rule_len_l = (int) FUNC_0 (VAR_9->rule_buf_l);
  VAR_10->rule_len_r = (int) FUNC_0 (VAR_9->rule_buf_r);



  VAR_10->hc_hash = ((void*)0);
  VAR_10->hc_workv = ((void*)0);
  VAR_10->hc_workc = 0;

  if (VAR_9->benchmark == 1)
  {

  }
  else if (VAR_9->example_hashes == 1)
  {

  }
  else if (VAR_9->backend_info == 1)
  {

  }
  else if (VAR_9->keyspace == 1)
  {
    VAR_10->hc_workc = VAR_9->hc_argc;
    VAR_10->hc_workv = VAR_9->hc_argv;
  }
  else if (VAR_9->stdout_flag == 1)
  {
    VAR_10->hc_workc = VAR_9->hc_argc;
    VAR_10->hc_workv = VAR_9->hc_argv;
  }
  else
  {
    VAR_10->hc_hash = VAR_9->hc_argv[0];
    VAR_10->hc_workc = VAR_9->hc_argc - 1;
    VAR_10->hc_workv = VAR_9->hc_argv + 1;
  }



  VAR_10->wordlist_mode = VAR_6;

  if (VAR_10->attack_kern == VAR_3)
  {
    VAR_10->wordlist_mode = (VAR_10->hc_workc >= 1) ? VAR_4 : VAR_7;
  }
  else if (VAR_10->attack_kern == VAR_1)
  {
    VAR_10->wordlist_mode = VAR_4;
  }
  else if (VAR_10->attack_kern == VAR_0)
  {
    VAR_10->wordlist_mode = VAR_5;
  }
}
