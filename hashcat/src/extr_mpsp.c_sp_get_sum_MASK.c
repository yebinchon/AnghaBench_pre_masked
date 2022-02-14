
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_3__ {int cs_len; } ;
typedef TYPE_1__ cs_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1 (u32 VAR_0, u32 VAR_1, cs_t *VAR_2, u64 *VAR_3)
{
  u64 VAR_4 = 1;

  u32 VAR_5;

  for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++)
  {
    if (FUNC_0 (VAR_4, VAR_2[VAR_5].cs_len) == 0) return -1;

    VAR_4 *= VAR_2[VAR_5].cs_len;
  }

  *VAR_3 = VAR_4;

  return 0;
}
