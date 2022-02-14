
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sha1nfo ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1, char VAR_2[29])
{
 const char *VAR_3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 const uint8_t *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 sha1nfo VAR_8;
 FUNC_1(&VAR_8, (uint8_t*)VAR_0, FUNC_3(VAR_0));
 FUNC_2(&VAR_8, VAR_1, FUNC_3(VAR_1));
 VAR_4 = FUNC_0(&VAR_8);
 for (VAR_6 = VAR_5 = 0, VAR_7 = 8; VAR_5 < 20; ++VAR_6) {
  if (VAR_7 <= 6) {
   int VAR_9 = VAR_5 < 19? VAR_4[VAR_5+1] : 0;
   VAR_2[VAR_6] = VAR_3[(int)(VAR_4[VAR_5] << (6-VAR_7) & 0x3f) | VAR_9 >> (VAR_7+2)], ++VAR_5, VAR_7 += 2;
  } else VAR_2[VAR_6] = VAR_3[(int)VAR_4[VAR_5] >> (VAR_7-6) & 0x3f], VAR_7 -= 6;
 }
 VAR_2[VAR_6++] = '='; VAR_2[VAR_6] = 0;
}
