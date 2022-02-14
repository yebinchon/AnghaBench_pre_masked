
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int dictstat_disable; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_8__ {TYPE_3__* dictstat_ctx; TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int dictstat_t ;
struct TYPE_9__ {int enabled; int filename; int cnt; int base; } ;
typedef TYPE_3__ dictstat_ctx_t ;
typedef int HCFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 size_t FUNC_6 (int*,int,int,int *) ;
 int FUNC_7 (int*,int ,int *,int,int ) ;
 int VAR_2 ;

void FUNC_8 (hashcat_ctx_t *VAR_3)
{
  hashconfig_t *VAR_4 = VAR_3->hashconfig;
  dictstat_ctx_t *VAR_5 = VAR_3->dictstat_ctx;

  if (VAR_5->enabled == 0) return;

  if (VAR_4->dictstat_disable == 1) return;

  HCFILE VAR_6;

  if (FUNC_5 (&VAR_6, VAR_5->filename, "rb") == 0)
  {


    return;
  }



  u64 VAR_7;
  u64 VAR_8;

  const size_t VAR_9 = FUNC_6 (&VAR_7, sizeof (u64), 1, &VAR_6);
  const size_t VAR_10 = FUNC_6 (&VAR_8, sizeof (u64), 1, &VAR_6);

  if ((VAR_9 != 1) || (VAR_10 != 1))
  {
    FUNC_1 (VAR_3, "%s: Invalid header", VAR_5->filename);

    FUNC_3 (&VAR_6);

    return;
  }

  VAR_7 = FUNC_0 (VAR_7);
  VAR_8 = FUNC_0 (VAR_8);

  if ((VAR_7 & 0xffffffffffffff00) != (VAR_0 & 0xffffffffffffff00))
  {
    FUNC_1 (VAR_3, "%s: Invalid header, ignoring content", VAR_5->filename);

    FUNC_3 (&VAR_6);

    return;
  }

  if (VAR_8 != 0)
  {
    FUNC_1 (VAR_3, "%s: Invalid header, ignoring content", VAR_5->filename);

    FUNC_3 (&VAR_6);

    return;
  }

  if ((VAR_7 & 0xff) < (VAR_0 & 0xff))
  {
    FUNC_2 (VAR_3, "%s: Outdated header version, ignoring content", VAR_5->filename);

    FUNC_3 (&VAR_6);

    return;
  }



  while (!FUNC_4 (&VAR_6))
  {
    dictstat_t VAR_11;

    const size_t VAR_12 = FUNC_6 (&VAR_11, sizeof (dictstat_t), 1, &VAR_6);

    if (VAR_12 == 0) continue;

    FUNC_7 (&VAR_11, VAR_5->base, &VAR_5->cnt, sizeof (dictstat_t), VAR_2);

    if (VAR_5->cnt == VAR_1)
    {
      FUNC_1 (VAR_3, "There are too many entries in the %s database. You have to remove/rename it.", VAR_5->filename);

      break;
    }
  }

  FUNC_3 (&VAR_6);
}
