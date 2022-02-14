
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uchar ;


 scalar_t__ FUNC_0 (int const*,char const*,unsigned int) ;
 int* VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int
FUNC_1(const pcre_uchar *VAR_2, int VAR_3)
{
const char *VAR_4 = VAR_1;
register int VAR_5 = 0;
while (VAR_0[VAR_5] != 0)
  {
  if (VAR_3 == VAR_0[VAR_5] &&
    FUNC_0(VAR_2, VAR_4, (unsigned int)VAR_3) == 0) return VAR_5;
  VAR_4 += VAR_0[VAR_5] + 1;
  VAR_5++;
  }
return -1;
}
