
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(
 size_t *VAR_1,
 const unsigned char **VAR_2,
 const unsigned char *VAR_3)
{
 const unsigned char *VAR_4 = *VAR_2;
 size_t VAR_5 = 0;
 unsigned int VAR_6, VAR_7 = 0;

 do {
  if (VAR_4 == VAR_3) {
   FUNC_0(VAR_0, "truncated delta");
   return -1;
  }

  VAR_6 = *VAR_4++;
  VAR_5 |= (VAR_6 & 0x7f) << VAR_7;
  VAR_7 += 7;
 } while (VAR_6 & 0x80);
 *VAR_2 = VAR_4;
 *VAR_1 = VAR_5;
 return 0;
}
