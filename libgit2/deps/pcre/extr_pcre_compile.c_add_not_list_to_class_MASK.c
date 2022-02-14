
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcre_uint8 ;
typedef int pcre_uint32 ;
typedef int pcre_uchar ;
typedef int compile_data ;
typedef int BOOL ;


 int const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int **,int,int *,int const,int const) ;

__attribute__((used)) static int
FUNC_1(pcre_uint8 *VAR_2, pcre_uchar **VAR_3,
  int VAR_4, compile_data *VAR_5, const pcre_uint32 *VAR_6)
{
BOOL VAR_7 = (VAR_4 & VAR_1) != 0;
int VAR_8 = 0;
if (VAR_6[0] > 0)
  VAR_8 += FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0, VAR_6[0] - 1);
while (VAR_6[0] < VAR_0)
  {
  while (VAR_6[1] == VAR_6[0] + 1) VAR_6++;
  VAR_8 += FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6[0] + 1,
    (VAR_6[1] == VAR_0) ? (VAR_7 ? 0x10ffffu : 0xffffffffu) : VAR_6[1] - 1);
  VAR_6++;
  }
return VAR_8;
}
