
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int benchmark; } ;
typedef TYPE_1__ user_options_t ;
typedef int user_options_extra_t ;
typedef void salt_t ;
struct TYPE_16__ {void* (* module_benchmark_hook_salt ) (TYPE_4__ const*,TYPE_1__ const*,int const*) ;void* (* module_benchmark_esalt ) (TYPE_4__ const*,TYPE_1__ const*,int const*) ;void* (* module_benchmark_salt ) (TYPE_4__ const*,TYPE_1__ const*,int const*) ;} ;
typedef TYPE_2__ module_ctx_t ;
struct TYPE_17__ {void* st_salts_buf; void* st_esalts_buf; void* st_hook_salts_buf; int hook_salts_buf; int esalts_buf; int salts_buf; } ;
typedef TYPE_3__ hashes_t ;
struct TYPE_18__ {int is_salted; int esalt_size; int hook_salt_size; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_19__ {int * user_options_extra; TYPE_1__* user_options; TYPE_2__* module_ctx; TYPE_3__* hashes; TYPE_4__* hashconfig; } ;
typedef TYPE_5__ hashcat_ctx_t ;


 void* FUNC_0 (TYPE_4__ const*,TYPE_1__ const*,int const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,void*,int) ;
 void* FUNC_3 (TYPE_4__ const*,TYPE_1__ const*,int const*) ;
 void* FUNC_4 (TYPE_4__ const*,TYPE_1__ const*,int const*) ;
 void* FUNC_5 (TYPE_4__ const*,TYPE_1__ const*,int const*) ;

int FUNC_6 (hashcat_ctx_t *VAR_0)
{
  const hashconfig_t *VAR_1 = VAR_0->hashconfig;
        hashes_t *VAR_2 = VAR_0->hashes;
  const module_ctx_t *VAR_3 = VAR_0->module_ctx;
  const user_options_t *VAR_4 = VAR_0->user_options;
  const user_options_extra_t *VAR_5 = VAR_0->user_options_extra;

  if (VAR_4->benchmark == 0) return 0;

  if (VAR_1->is_salted == 0) return 0;

  if (VAR_3->module_benchmark_salt != FUNC_0)
  {
    salt_t *VAR_6 = VAR_3->module_benchmark_salt (VAR_1, VAR_4, VAR_5);

    FUNC_2 (VAR_2->salts_buf, VAR_6, sizeof (salt_t));

    FUNC_1 (VAR_6);
  }
  else
  {
    FUNC_2 (VAR_2->salts_buf, VAR_2->st_salts_buf, sizeof (salt_t));
  }

  if (VAR_1->esalt_size > 0)
  {
    if (VAR_3->module_benchmark_esalt != FUNC_0)
    {
      void *VAR_7 = VAR_3->module_benchmark_esalt (VAR_1, VAR_4, VAR_5);

      FUNC_2 (VAR_2->esalts_buf, VAR_7, VAR_1->esalt_size);

      FUNC_1 (VAR_7);
    }
    else
    {
      FUNC_2 (VAR_2->esalts_buf, VAR_2->st_esalts_buf, VAR_1->esalt_size);
    }
  }

  if (VAR_1->hook_salt_size > 0)
  {
    if (VAR_3->module_benchmark_hook_salt != FUNC_0)
    {
      void *VAR_8 = VAR_3->module_benchmark_hook_salt (VAR_1, VAR_4, VAR_5);

      FUNC_2 (VAR_2->hook_salts_buf, VAR_8, VAR_1->hook_salt_size);

      FUNC_1 (VAR_8);
    }
    else
    {
      FUNC_2 (VAR_2->hook_salts_buf, VAR_2->st_hook_salts_buf, VAR_1->hook_salt_size);
    }
  }

  return 0;
}
