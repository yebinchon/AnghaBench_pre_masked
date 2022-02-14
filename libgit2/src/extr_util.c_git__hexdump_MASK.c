
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(const char *VAR_0, size_t VAR_1)
{
 static const size_t VAR_2 = 16;

 size_t VAR_3, VAR_4, VAR_5, VAR_6;
 const char *VAR_7;

 VAR_3 = (VAR_1 / VAR_2);
 VAR_4 = (VAR_1 % VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  VAR_7 = VAR_0 + (VAR_5 * VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6, ++VAR_7)
   FUNC_0("%02X ", (unsigned char)*VAR_7 & 0xFF);

  FUNC_0("| ");

  VAR_7 = VAR_0 + (VAR_5 * VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6, ++VAR_7)
   FUNC_0("%c", (*VAR_7 >= 32 && *VAR_7 <= 126) ? *VAR_7 : '.');

  FUNC_0("\n");
 }

 if (VAR_4 > 0) {

  VAR_7 = VAR_0 + (VAR_3 * VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6, ++VAR_7)
   FUNC_0("%02X ", (unsigned char)*VAR_7 & 0xFF);

  for (VAR_6 = 0; VAR_6 < (VAR_2 - VAR_4); ++VAR_6)
   FUNC_0("	");

  FUNC_0("| ");

  VAR_7 = VAR_0 + (VAR_3 * VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6, ++VAR_7)
   FUNC_0("%c", (*VAR_7 >= 32 && *VAR_7 <= 126) ? *VAR_7 : '.');

  FUNC_0("\n");
 }

 FUNC_0("\n");
}
