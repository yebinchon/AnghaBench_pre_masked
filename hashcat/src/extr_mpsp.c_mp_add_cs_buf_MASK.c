
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int opts_type; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_7__ {TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_8__ {size_t cs_len; size_t* cs_buf; } ;
typedef TYPE_3__ cs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t*) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_2, const u32 *VAR_3, size_t VAR_4, cs_t *VAR_5, u32 VAR_6)
{
  const hashconfig_t *VAR_7 = VAR_2->hashconfig;

  cs_t *VAR_8 = &VAR_5[VAR_6];

  size_t VAR_9 = VAR_0 * sizeof (u32);

  u32 *VAR_10 = (u32 *) FUNC_1 (VAR_9);

  size_t VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_8->cs_len; VAR_11++)
  {
    const u32 VAR_12 = VAR_8->cs_buf[VAR_11];

    VAR_10[VAR_12] = 1;
  }

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  {
    u32 VAR_13 = VAR_3[VAR_11] & 0xff;

    if (VAR_7->opts_type & VAR_1) VAR_13 = (u32) FUNC_2 (VAR_13);

    if (VAR_10[VAR_13] == 1) continue;

    VAR_10[VAR_13] = 1;

    VAR_8->cs_buf[VAR_8->cs_len] = VAR_13;

    VAR_8->cs_len++;
  }

  FUNC_0 (VAR_10);

  return 0;
}
