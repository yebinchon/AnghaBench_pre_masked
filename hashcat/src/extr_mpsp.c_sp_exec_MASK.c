
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct TYPE_4__ {size_t cs_len; size_t* cs_buf; } ;
typedef TYPE_1__ cs_t ;


 size_t VAR_0 ;

void FUNC_0 (u64 VAR_1, char *VAR_2, cs_t *VAR_3, cs_t *VAR_4, u32 VAR_5, u32 VAR_6)
{
  u64 VAR_7 = VAR_1;

  cs_t *VAR_8 = &VAR_3[VAR_5];

  u32 VAR_9;

  for (VAR_9 = VAR_5; VAR_9 < VAR_6; VAR_9++)
  {
    const u64 VAR_10 = VAR_7 % VAR_8->cs_len;
    const u64 VAR_11 = VAR_7 / VAR_8->cs_len;

    VAR_7 = VAR_11;

    const u32 VAR_12 = VAR_8->cs_buf[VAR_10];

    VAR_2[VAR_9 - VAR_5] = (char) VAR_12;

    VAR_8 = &VAR_4[(VAR_9 * VAR_0) + VAR_12];
  }
}
