
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, char **VAR_1)
{
 char *VAR_2;
 int VAR_3;
 const char *VAR_4;
 int VAR_5;
 char VAR_6;

 VAR_6 = ':';
 VAR_2 = *VAR_1;
again:
 if (*VAR_0 == '"') {
  VAR_6 = '"';
  VAR_0++;
 }
 while ((VAR_3 = *VAR_0++) && VAR_3 != VAR_6) {
  switch (VAR_3) {

  case '^':
   VAR_3 = *VAR_0++ & 037;
   break;

  case '\\':
   VAR_4 = "E\033^^\\\\::n\nr\rt\tb\bf\f\"\"";
   VAR_3 = *VAR_0++;
nextc:
   if (*VAR_4++ == VAR_3) {
    VAR_3 = *VAR_4++;
    break;
   }
   VAR_4++;
   if (*VAR_4)
    goto nextc;
   if (FUNC_0(VAR_3)) {
    VAR_3 -= '0', VAR_5 = 2;
    do
     VAR_3 <<= 3, VAR_3 |= *VAR_0++ - '0';
    while (--VAR_5 && FUNC_0(*VAR_0));
   }
   break;
  }
  *VAR_2++ = VAR_3;
 }
 if (VAR_3 == VAR_6 && VAR_6 != ':') {
  VAR_6 = ':';
  goto again;
 }
 *VAR_2++ = 0;
 VAR_0 = *VAR_1;
 *VAR_1 = VAR_2;
 return (VAR_0);
}
