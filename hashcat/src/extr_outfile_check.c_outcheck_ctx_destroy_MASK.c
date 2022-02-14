
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * outfile_check_dir; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_9__ {int enabled; int root_directory; } ;
typedef TYPE_2__ outcheck_ctx_t ;
struct TYPE_10__ {int outfile_check_disable; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_11__ {TYPE_1__* user_options; TYPE_2__* outcheck_ctx; TYPE_3__* hashconfig; } ;
typedef TYPE_4__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5 (hashcat_ctx_t *VAR_3)
{
  hashconfig_t *VAR_4 = VAR_3->hashconfig;
  outcheck_ctx_t *VAR_5 = VAR_3->outcheck_ctx;
  user_options_t *VAR_6 = VAR_3->user_options;

  if (VAR_5->enabled == 0) return;

  if (VAR_4->outfile_check_disable == 1) return;

  if (FUNC_3 (VAR_5->root_directory) == -1)
  {
    if (VAR_2 == VAR_0)
    {

    }
    else if (VAR_2 == VAR_1)
    {

    }
    else
    {
      FUNC_0 (VAR_3, "%s: %s", VAR_5->root_directory, FUNC_4 (VAR_2));


    }
  }

  if (VAR_6->outfile_check_dir == ((void*)0))
  {
    FUNC_1 (VAR_5->root_directory);
  }

  FUNC_2 (VAR_5, 0, sizeof (outcheck_ctx_t));
}
