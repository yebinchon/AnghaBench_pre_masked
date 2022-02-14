
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int (* module_hash_encode_status ) (TYPE_3__ const*,int ,int ,int ,int ,int *,char*,int const) ;} ;
typedef TYPE_1__ module_ctx_t ;
struct TYPE_12__ {int digests_cnt; int * hashfile; int hook_salts_buf; int esalts_buf; int salts_buf; int digests_buf; } ;
typedef TYPE_2__ hashes_t ;
struct TYPE_13__ {int opts_type; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_14__ {TYPE_1__* module_ctx; TYPE_2__* hashes; TYPE_3__* hashconfig; } ;
typedef TYPE_4__ hashcat_ctx_t ;


 int const VAR_0 ;
 int FUNC_0 (TYPE_3__ const*,int ,int ,int ,int ,int *,char*,int const) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_1__*,char*,int const,int ,int ) ;
 scalar_t__ FUNC_4 (int const) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int const) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__ const*,int ,int ,int ,int ,int *,char*,int const) ;

char *FUNC_9 (const hashcat_ctx_t *VAR_2)
{
  const hashconfig_t *VAR_3 = VAR_2->hashconfig;
  const hashes_t *VAR_4 = VAR_2->hashes;
  const module_ctx_t *VAR_5 = VAR_2->module_ctx;

  if ((VAR_4->digests_cnt == 1) || (VAR_4->hashfile == ((void*)0)))
  {
    if (VAR_5->module_hash_encode_status != FUNC_0)
    {
      char *VAR_6 = (char *) FUNC_4 (VAR_0);

      const int VAR_7 = VAR_5->module_hash_encode_status (VAR_3, VAR_4->digests_buf, VAR_4->salts_buf, VAR_4->esalts_buf, VAR_4->hook_salts_buf, ((void*)0), VAR_6, VAR_0);

      char *VAR_8 = (char *) FUNC_4 (VAR_7 + 1);

      FUNC_6 (VAR_8, VAR_6, VAR_7);

      VAR_8[VAR_7] = 0;

      FUNC_2 (VAR_6);

      return VAR_8;
    }

    if (VAR_3->opts_type & VAR_1)
    {
      return FUNC_5 (VAR_4->hashfile);
    }

    char *VAR_9 = (char *) FUNC_4 (VAR_0);

    const int VAR_10 = FUNC_3 (VAR_2->hashconfig, VAR_2->hashes, VAR_2->module_ctx, VAR_9, VAR_0, 0, 0);

    VAR_9[VAR_10] = 0;

    FUNC_1 (VAR_9, 19, 6);

    char *VAR_11 = FUNC_7 (VAR_9);

    FUNC_2 (VAR_9);

    return VAR_11;
  }

  return FUNC_5 (VAR_4->hashfile);
}
