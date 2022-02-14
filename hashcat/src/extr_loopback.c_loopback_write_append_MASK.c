
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int enabled; int unused; int filename; int fp; } ;
typedef TYPE_1__ loopback_ctx_t ;
struct TYPE_7__ {TYPE_1__* loopback_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int const*,unsigned int const) ;
 int FUNC_6 (int ) ;

void FUNC_7 (hashcat_ctx_t *VAR_1, const u8 *VAR_2, const unsigned int VAR_3)
{
  loopback_ctx_t *VAR_4 = VAR_1->loopback_ctx;

  if (VAR_4->enabled == 0) return;

  FUNC_5 (VAR_1, VAR_2, VAR_3);

  FUNC_3 (&VAR_4->fp);

  FUNC_2 (VAR_0, FUNC_6 (VAR_0), 1, &VAR_4->fp);

  FUNC_1 (&VAR_4->fp);

  if (FUNC_4 (&VAR_4->fp))
  {
    FUNC_0 (VAR_1, "%s: Failed to unlock file", VAR_4->filename);
  }

  VAR_4->unused = 0;
}
