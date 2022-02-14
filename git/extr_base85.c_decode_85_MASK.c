
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*,int,char const*) ;

int FUNC_5(char *VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_1();

 FUNC_4("decode 85 <%.*s>", VAR_3 / 4 * 5, VAR_2);
 while (VAR_3) {
  unsigned VAR_4 = 0;
  int VAR_5, VAR_6 = 4;
  unsigned char VAR_7;
  do {
   VAR_7 = *VAR_2++;
   VAR_5 = VAR_0[VAR_7];
   if (--VAR_5 < 0)
    return FUNC_0("invalid base85 alphabet %c", VAR_7);
   VAR_4 = VAR_4 * 85 + VAR_5;
  } while (--VAR_6);
  VAR_7 = *VAR_2++;
  VAR_5 = VAR_0[VAR_7];
  if (--VAR_5 < 0)
   return FUNC_0("invalid base85 alphabet %c", VAR_7);

  if (0xffffffff / 85 < VAR_4 ||
      0xffffffff - VAR_5 < (VAR_4 *= 85))
   return FUNC_0("invalid base85 sequence %.5s", VAR_2-5);
  VAR_4 += VAR_5;
  FUNC_3(" %08x", VAR_4);

  VAR_6 = (VAR_3 < 4) ? VAR_3 : 4;
  VAR_3 -= VAR_6;
  do {
   VAR_4 = (VAR_4 << 8) | (VAR_4 >> 24);
   *VAR_1++ = VAR_4;
  } while (--VAR_6);
 }
 FUNC_2("\n");

 return 0;
}
