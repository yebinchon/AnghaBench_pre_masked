
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 char* VAR_0 ;

__attribute__((used)) static void FUNC_0(char *VAR_1, size_t VAR_2, const u8 *VAR_3,
  const size_t VAR_4)
{
 int VAR_5, VAR_6;
 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_4 && VAR_6 + 4 < VAR_2; VAR_5++) {
  VAR_1[VAR_6++] = VAR_0[(VAR_3[VAR_5] >> 4) & 0x0f];
  VAR_1[VAR_6++] = VAR_0[VAR_3[VAR_5] & 0x0f];
  VAR_1[VAR_6++] = ' ';
 }
 VAR_1[VAR_6] = '\0';
 if (VAR_6 > 0)
  VAR_1[VAR_6-1] = '\n';
 if (VAR_5 < VAR_4 && VAR_6 > 2)
  VAR_1[VAR_6-2] = VAR_1[VAR_6-3] = '.';
}
