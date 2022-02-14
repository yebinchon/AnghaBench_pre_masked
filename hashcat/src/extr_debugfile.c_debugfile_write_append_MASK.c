
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {TYPE_2__* debugfile_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int enabled; int mode; int fp; } ;
typedef TYPE_2__ debugfile_ctx_t ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const*,int const) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (void*,int const,int,int *) ;
 int const FUNC_3 (void*) ;

void FUNC_4 (hashcat_ctx_t *VAR_1, const u8 *VAR_2, const u32 VAR_3, const u8 *VAR_4, const u32 VAR_5, const u8 *VAR_6, const u32 VAR_7)
{
  debugfile_ctx_t *VAR_8 = VAR_1->debugfile_ctx;

  if (VAR_8->enabled == 0) return;

  const u32 VAR_9 = VAR_8->mode;

  if ((VAR_9 == 2) || (VAR_9 == 3) || (VAR_9 == 4))
  {
    FUNC_0 (VAR_1, VAR_6, VAR_7);

    if ((VAR_9 == 3) || (VAR_9 == 4)) FUNC_1 (':', &VAR_8->fp);
  }

  FUNC_2 ((void *)VAR_2, VAR_3, 1, &VAR_8->fp);

  if (VAR_9 == 4)
  {
    FUNC_1 (':', &VAR_8->fp);

    FUNC_0 (VAR_1, VAR_4, VAR_5);
  }

  FUNC_2 (VAR_0, FUNC_3 (VAR_0), 1, &VAR_8->fp);
}
