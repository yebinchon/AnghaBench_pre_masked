
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int dictstat_disable; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_7__ {TYPE_3__* dictstat_ctx; TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int dictstat_t ;
struct TYPE_8__ {int enabled; int cnt; int * base; int filename; } ;
typedef TYPE_3__ dictstat_ctx_t ;
typedef int HCFILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int FUNC_7 (hashcat_ctx_t *VAR_2)
{
  hashconfig_t *VAR_3 = VAR_2->hashconfig;
  dictstat_ctx_t *VAR_4 = VAR_2->dictstat_ctx;

  if (VAR_4->enabled == 0) return 0;

  if (VAR_3->dictstat_disable == 1) return 0;

  HCFILE VAR_5;

  if (FUNC_3 (&VAR_5, VAR_4->filename, "wb") == 0)
  {
    FUNC_1 (VAR_2, "%s: %s", VAR_4->filename, FUNC_6 (VAR_1));

    return -1;
  }

  if (FUNC_5 (&VAR_5) == -1)
  {
    FUNC_2 (&VAR_5);

    FUNC_1 (VAR_2, "%s: %s", VAR_4->filename, FUNC_6 (VAR_1));

    return -1;
  }



  u64 VAR_6 = VAR_0;
  u64 VAR_7 = 0;

  VAR_6 = FUNC_0 (VAR_6);
  VAR_7 = FUNC_0 (VAR_7);

  FUNC_4 (&VAR_6, sizeof (u64), 1, &VAR_5);
  FUNC_4 (&VAR_7, sizeof (u64), 1, &VAR_5);



  FUNC_4 (VAR_4->base, sizeof (dictstat_t), VAR_4->cnt, &VAR_5);

  FUNC_2 (&VAR_5);

  return 0;
}
