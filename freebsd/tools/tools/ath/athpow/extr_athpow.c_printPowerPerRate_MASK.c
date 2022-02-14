
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,int,int,char const*,int,int) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, u_int16_t VAR_1[], u_int VAR_2)
{
 const char *VAR_3[] = {
  " 6mb OFDM", " 9mb OFDM", "12mb OFDM", "18mb OFDM",
  "24mb OFDM", "36mb OFDM", "48mb OFDM", "54mb OFDM",
  "1L   CCK ", "2L   CCK ", "2S   CCK ", "5.5L CCK ",
  "5.5S CCK ", "11L  CCK ", "11S  CCK ", "XR       "
 };
 int VAR_4, VAR_5 = VAR_2/2;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_0, " %s %3d.%1d dBm | %s %3d.%1d dBm\n",
    VAR_3[VAR_4], VAR_1[VAR_4]/2,
    (VAR_1[VAR_4] %2) * 5,
    VAR_3[VAR_4 + VAR_5],
    VAR_1[VAR_4 + VAR_5]/2,
    (VAR_1[VAR_4 + VAR_5] %2) *5);
}
