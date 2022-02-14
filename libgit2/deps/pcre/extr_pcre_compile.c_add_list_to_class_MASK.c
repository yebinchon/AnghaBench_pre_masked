
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uint8 ;
typedef unsigned int pcre_uint32 ;
typedef int pcre_uchar ;
typedef int compile_data ;


 unsigned int const VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **,int,int *,unsigned int const,unsigned int const) ;

__attribute__((used)) static int
FUNC_1(pcre_uint8 *VAR_1, pcre_uchar **VAR_2, int VAR_3,
  compile_data *VAR_4, const pcre_uint32 *VAR_5, unsigned int VAR_6)
{
int VAR_7 = 0;
while (VAR_5[0] < VAR_0)
  {
  int VAR_8 = 0;
  if (VAR_5[0] != VAR_6)
    {
    while(VAR_5[VAR_8+1] == VAR_5[0] + VAR_8 + 1) VAR_8++;
    VAR_7 += FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5[0], VAR_5[VAR_8]);
    }
  VAR_5 += VAR_8 + 1;
  }
return VAR_7;
}
