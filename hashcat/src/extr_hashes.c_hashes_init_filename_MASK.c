
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int benchmark; int keyspace; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_9__ {int hc_hash; } ;
typedef TYPE_2__ user_options_extra_t ;
struct TYPE_10__ {scalar_t__ hashlist_mode; int hashfile; } ;
typedef TYPE_3__ hashes_t ;
struct TYPE_11__ {int opts_type; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_12__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_3__* hashes; TYPE_4__* hashconfig; } ;
typedef TYPE_5__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4 (hashcat_ctx_t *VAR_5)
{
  hashconfig_t *VAR_6 = VAR_5->hashconfig;
  hashes_t *VAR_7 = VAR_5->hashes;
  user_options_t *VAR_8 = VAR_5->user_options;
  user_options_extra_t *VAR_9 = VAR_5->user_options_extra;





  if (VAR_6->opts_type & VAR_3)
  {
    VAR_7->hashlist_mode = VAR_1;

    if ((VAR_8->benchmark == 0) && (VAR_8->keyspace == 0))
    {
      if (FUNC_2 (VAR_9->hc_hash) == 0)
      {
        FUNC_0 (VAR_5, "%s: %s", VAR_9->hc_hash, FUNC_3 (VAR_4));

        return -1;
      }

      VAR_7->hashfile = VAR_9->hc_hash;
    }
  }
  else
  {
    VAR_7->hashlist_mode = (FUNC_1 (VAR_9->hc_hash) == 1) ? VAR_2 : VAR_0;

    if (VAR_7->hashlist_mode == VAR_2)
    {
      VAR_7->hashfile = VAR_9->hc_hash;
    }
  }

  return 0;
}
