
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pcre_uchar ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static const pcre_uchar *
FUNC_1(const pcre_uchar *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7)
{
int VAR_8 = 0;
int VAR_9 = -1;

while (FUNC_0(*VAR_4))
  {
  VAR_8 = VAR_8 * 10 + (int)(*VAR_4++ - VAR_0);
  if (VAR_8 > 65535)
    {
    *VAR_7 = VAR_3;
    return VAR_4;
    }
  }

if (*VAR_4 == VAR_1) VAR_9 = VAR_8; else
  {
  if (*(++VAR_4) != VAR_1)
    {
    VAR_9 = 0;
    while(FUNC_0(*VAR_4))
      {
      VAR_9 = VAR_9 * 10 + (int)(*VAR_4++ - VAR_0);
      if (VAR_9 > 65535)
        {
        *VAR_7 = VAR_3;
        return VAR_4;
        }
      }
    if (VAR_9 < VAR_8)
      {
      *VAR_7 = VAR_2;
      return VAR_4;
      }
    }
  }

*VAR_5 = VAR_8;
*VAR_6 = VAR_9;
return VAR_4;
}
