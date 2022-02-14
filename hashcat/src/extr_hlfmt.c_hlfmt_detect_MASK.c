
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int hlfmt_disable; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_8__ {TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int HCFILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,size_t const) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*,size_t const) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char*,size_t const) ;

u32 FUNC_9 (hashcat_ctx_t *VAR_6, HCFILE *VAR_7, u32 VAR_8)
{
  const hashconfig_t *VAR_9 = VAR_6->hashconfig;



  if (VAR_9->hlfmt_disable == 1) return VAR_2;

  u32 *VAR_10 = (u32 *) FUNC_3 (VAR_1, sizeof (u32));

  u32 VAR_11 = 0;

  char *VAR_12 = (char *) FUNC_5 (VAR_0);

  while (!FUNC_2 (VAR_7))
  {
    const size_t VAR_13 = FUNC_0 (VAR_7, VAR_12, VAR_0);

    if (VAR_13 == 0) continue;

    if (FUNC_7 (VAR_6, VAR_12, VAR_13)) VAR_10[VAR_4]++;
    if (FUNC_6 (VAR_6, VAR_12, VAR_13)) VAR_10[VAR_3]++;
    if (FUNC_8 (VAR_6, VAR_12, VAR_13)) VAR_10[VAR_5]++;

    if (VAR_11 == VAR_8) break;

    VAR_11++;
  }

  FUNC_4 (VAR_12);

  u32 VAR_14 = VAR_2;

  for (u32 VAR_15 = 1; VAR_15 < VAR_1; VAR_15++)
  {
    if (VAR_10[VAR_15 - 1] >= VAR_10[VAR_15]) continue;

    VAR_14 = VAR_15;
  }

  FUNC_1 (VAR_10);

  return VAR_14;
}
