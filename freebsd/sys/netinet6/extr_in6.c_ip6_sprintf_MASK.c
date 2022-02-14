
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
typedef int u_char ;
struct in6_addr {int dummy; } ;


 void** VAR_0 ;

char *
FUNC_0(char *VAR_1, const struct in6_addr *VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 char *VAR_8;
 const u_int16_t *VAR_9 = (const u_int16_t *)VAR_2;
 const u_int8_t *VAR_10;
 int VAR_11 = 0, VAR_12 = 0;

 VAR_8 = VAR_1;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (*(VAR_9 + VAR_3) == 0) {
   VAR_4++;
   if (VAR_4 == 1)
    VAR_6 = VAR_3;
  }
  else if (VAR_5 < VAR_4) {
   VAR_5 = VAR_4;
   VAR_7 = VAR_6;
   VAR_4 = 0;
  }
 }
 if (VAR_5 < VAR_4) {
  VAR_5 = VAR_4;
  VAR_7 = VAR_6;
 }

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_11 == 1) {
   if (*VAR_9 == 0) {
    if (VAR_3 == 7)
     *VAR_8++ = ':';
    VAR_9++;
    continue;
   } else
    VAR_11 = 2;
  }
  if (*VAR_9 == 0) {
   if (VAR_11 == 0 && *(VAR_9 + 1) == 0 && VAR_3 == VAR_7) {
    if (VAR_3 == 0)
     *VAR_8++ = ':';
    *VAR_8++ = ':';
    VAR_11 = 1;
   } else {
    *VAR_8++ = '0';
    *VAR_8++ = ':';
   }
   VAR_9++;
   continue;
  }
  VAR_10 = (const u_char *)VAR_9;

  VAR_12 = 1;
  *VAR_8 = VAR_0[*VAR_10 >> 4];
  if (*VAR_8 != '0') {
   VAR_12 = 0;
   VAR_8++;
  }
  *VAR_8 = VAR_0[*VAR_10++ & 0xf];
  if (VAR_12 == 0 || (*VAR_8 != '0')) {
   VAR_12 = 0;
   VAR_8++;
  }
  *VAR_8 = VAR_0[*VAR_10 >> 4];
  if (VAR_12 == 0 || (*VAR_8 != '0')) {
   VAR_12 = 0;
   VAR_8++;
  }
  *VAR_8++ = VAR_0[*VAR_10 & 0xf];
  *VAR_8++ = ':';
  VAR_9++;
 }
 *--VAR_8 = '\0';
 return (VAR_1);
}
