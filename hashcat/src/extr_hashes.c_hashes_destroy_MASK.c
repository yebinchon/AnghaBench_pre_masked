
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int username; } ;
typedef TYPE_1__ user_options_t ;
typedef size_t u32 ;
struct TYPE_9__ {size_t hashes_cnt; TYPE_6__** st_hook_salts_buf; TYPE_6__** st_esalts_buf; TYPE_6__** st_salts_buf; TYPE_6__** st_digests_buf; TYPE_6__** tmp_buf; TYPE_6__** out_buf; TYPE_6__** hook_salts_buf; TYPE_6__** esalts_buf; TYPE_6__** hash_info; TYPE_6__** salts_shown; TYPE_6__** salts_buf; TYPE_6__** digests_shown_tmp; TYPE_6__** digests_shown; TYPE_6__** digests_buf; } ;
typedef TYPE_2__ hashes_t ;
struct TYPE_10__ {int opts_type; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_11__ {TYPE_1__* user_options; TYPE_2__* hashes; TYPE_3__* hashconfig; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_12__ {struct TYPE_12__** split; struct TYPE_12__** orighash; struct TYPE_12__** user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__**) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_2)
{
  hashconfig_t *VAR_3 = VAR_2->hashconfig;
  hashes_t *VAR_4 = VAR_2->hashes;
  user_options_t *VAR_5 = VAR_2->user_options;

  FUNC_0 (VAR_4->digests_buf);
  FUNC_0 (VAR_4->digests_shown);
  FUNC_0 (VAR_4->digests_shown_tmp);

  FUNC_0 (VAR_4->salts_buf);
  FUNC_0 (VAR_4->salts_shown);

  if ((VAR_5->username == 1) || (VAR_3->opts_type & VAR_0))
  {
    for (u32 VAR_6 = 0; VAR_6 < VAR_4->hashes_cnt; VAR_6++)
    {
      if (VAR_5->username == 1)
      {
        FUNC_0 (VAR_4->hash_info[VAR_6]->user);
      }

      if (VAR_3->opts_type & VAR_0)
      {
        FUNC_0 (VAR_4->hash_info[VAR_6]->orighash);
      }

      if (VAR_3->opts_type & VAR_1)
      {
        FUNC_0 (VAR_4->hash_info[VAR_6]->split);
      }
    }
  }

  FUNC_0 (VAR_4->hash_info);

  FUNC_0 (VAR_4->esalts_buf);
  FUNC_0 (VAR_4->hook_salts_buf);

  FUNC_0 (VAR_4->out_buf);
  FUNC_0 (VAR_4->tmp_buf);

  FUNC_0 (VAR_4->st_digests_buf);
  FUNC_0 (VAR_4->st_salts_buf);
  FUNC_0 (VAR_4->st_esalts_buf);
  FUNC_0 (VAR_4->st_hook_salts_buf);

  FUNC_1 (VAR_4, 0, sizeof (hashes_t));
}
