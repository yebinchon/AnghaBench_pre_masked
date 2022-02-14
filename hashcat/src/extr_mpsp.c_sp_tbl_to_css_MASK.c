
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int key; } ;
typedef TYPE_1__ hcstat_table_t ;
struct TYPE_9__ {int cs_len; int* cs_buf; } ;
typedef TYPE_2__ cs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1 (hcstat_table_t *VAR_4, hcstat_table_t *VAR_5, cs_t *VAR_6, cs_t *VAR_7, u32 VAR_8, u32 VAR_9[VAR_2][VAR_0])
{
  FUNC_0 (VAR_6, 0, VAR_2 * sizeof (cs_t));
  FUNC_0 (VAR_7, 0, VAR_2 * VAR_0 * sizeof (cs_t));





  for (u32 VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  {
    u32 VAR_11 = VAR_10 / VAR_0;

    cs_t *VAR_12 = &VAR_6[VAR_11];

    if (VAR_12->cs_len == VAR_8) continue;

    u32 VAR_13 = VAR_4[VAR_10].key;

    if (VAR_9[VAR_11][VAR_13] == 0) continue;

    VAR_12->cs_buf[VAR_12->cs_len] = VAR_13;

    VAR_12->cs_len++;
  }





  for (u32 VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
  {
    u32 VAR_15 = VAR_14 / VAR_0;

    cs_t *VAR_16 = &VAR_7[VAR_15];

    if (VAR_16->cs_len == VAR_8) continue;

    u32 VAR_17 = VAR_15 / VAR_0;

    u32 VAR_18 = VAR_5[VAR_14].key;

    if ((VAR_17 + 1) < VAR_2) if (VAR_9[VAR_17 + 1][VAR_18] == 0) continue;

    VAR_16->cs_buf[VAR_16->cs_len] = VAR_18;

    VAR_16->cs_len++;
  }
}
