
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int FUNC_0 (char const*,size_t const) ;

bool FUNC_1 (const u8 *VAR_0, const size_t VAR_1)
{
  if (VAR_1 < 6) return 0;





  if ((VAR_1 & 1) == 1) return 0;

  if (VAR_0[0] != '$') return (0);
  if (VAR_0[1] != 'H') return (0);
  if (VAR_0[2] != 'E') return (0);
  if (VAR_0[3] != 'X') return (0);
  if (VAR_0[4] != '[') return (0);
  if (VAR_0[VAR_1 - 1] != ']') return (0);

  if (FUNC_0 (VAR_0 + 5, VAR_1 - 6) == 0) return 0;

  return 1;
}
