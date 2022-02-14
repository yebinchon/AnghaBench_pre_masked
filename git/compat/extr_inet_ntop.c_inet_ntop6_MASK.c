
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,char*,int) ;
 int FUNC_1 (unsigned int*,char,int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static const char *
FUNC_5(const u_char *VAR_4, char *VAR_5, size_t VAR_6)
{







 char VAR_7[sizeof "ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255"], *VAR_8;
 struct { int base, len; } VAR_9, VAR_10;
 unsigned int VAR_11[VAR_1 / VAR_2];
 int VAR_12;






 FUNC_1(VAR_11, '\0', sizeof VAR_11);
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
  VAR_11[VAR_12 / 2] |= (VAR_4[VAR_12] << ((1 - (VAR_12 % 2)) << 3));
 VAR_9.base = -1;
 VAR_9.len = 0;
 VAR_10.base = -1;
 VAR_10.len = 0;
 for (VAR_12 = 0; VAR_12 < (VAR_1 / VAR_2); VAR_12++) {
  if (VAR_11[VAR_12] == 0) {
   if (VAR_10.base == -1)
    VAR_10.base = VAR_12, VAR_10.len = 1;
   else
    VAR_10.len++;
  } else {
   if (VAR_10.base != -1) {
    if (VAR_9.base == -1 || VAR_10.len > VAR_9.len)
     VAR_9 = VAR_10;
    VAR_10.base = -1;
   }
  }
 }
 if (VAR_10.base != -1) {
  if (VAR_9.base == -1 || VAR_10.len > VAR_9.len)
   VAR_9 = VAR_10;
 }
 if (VAR_9.base != -1 && VAR_9.len < 2)
  VAR_9.base = -1;




 VAR_8 = VAR_7;
 for (VAR_12 = 0; VAR_12 < (VAR_1 / VAR_2); VAR_12++) {

  if (VAR_9.base != -1 && VAR_12 >= VAR_9.base &&
      VAR_12 < (VAR_9.base + VAR_9.len)) {
   if (VAR_12 == VAR_9.base)
    *VAR_8++ = ':';
   continue;
  }

  if (VAR_12 != 0)
   *VAR_8++ = ':';

  if (VAR_12 == 6 && VAR_9.base == 0 &&
      (VAR_9.len == 6 || (VAR_9.len == 5 && VAR_11[5] == 0xffff))) {
   if (!FUNC_0(VAR_4+12, VAR_8, sizeof VAR_7 - (VAR_8 - VAR_7)))
    return (((void*)0));
   VAR_8 += FUNC_4(VAR_8);
   break;
  }
  VAR_8 += FUNC_2(VAR_8, sizeof VAR_7 - (VAR_8 - VAR_7), "%x", VAR_11[VAR_12]);
 }

 if (VAR_9.base != -1 && (VAR_9.base + VAR_9.len) ==
     (VAR_1 / VAR_2))
  *VAR_8++ = ':';
 *VAR_8++ = '\0';




 if ((size_t)(VAR_8 - VAR_7) > VAR_6) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }
 FUNC_3(VAR_5, VAR_7, VAR_6);
 return (VAR_5);
}
