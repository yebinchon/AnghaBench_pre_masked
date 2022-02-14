
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {int dummy; } ;


 char* FUNC_0 (struct dtoa_context*,double,int ,int ,int*,int*,char**) ;
 int FUNC_1 (struct dtoa_context*,char*) ;

char *
 FUNC_2(struct dtoa_context* VAR_0, register char *VAR_1, double VAR_2)
{
 register int VAR_3, VAR_4;
 register char *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;

 VAR_9 = VAR_1;







 VAR_5 = VAR_10 = FUNC_0(VAR_0, VAR_2, 0, 0, &VAR_6, &VAR_8, &VAR_11);
 if (VAR_8)
  *VAR_1++ = '-';
 if (VAR_6 == 9999) {
  while((*VAR_1++ = *VAR_5++));
  goto done0;
  }
 if (VAR_6 <= -4 || VAR_6 > VAR_11 - VAR_5 + 15) {
  *VAR_1++ = *VAR_5++;
  if (*VAR_5) {
   *VAR_1++ = '.';
   while((*VAR_1 = *VAR_5++))
    VAR_1++;
   }
  *VAR_1++ = 'e';

  if (--VAR_6 < 0) {
   *VAR_1++ = '-';
   VAR_6 = -VAR_6;
   }
  else
   *VAR_1++ = '+';
  for(VAR_7 = 2, VAR_4 = 10; 10*VAR_4 <= VAR_6; VAR_7++, VAR_4 *= 10);
  for(;;) {
   VAR_3 = VAR_6 / VAR_4;
   *VAR_1++ = VAR_3 + '0';
   if (--VAR_7 <= 0)
    break;
   VAR_6 -= VAR_3*VAR_4;
   VAR_6 *= 10;
   }
  *VAR_1 = 0;
  }
 else if (VAR_6 <= 0) {
  *VAR_1++ = '0';
  *VAR_1++ = '.';
  for(; VAR_6 < 0; VAR_6++)
   *VAR_1++ = '0';
  while((*VAR_1++ = *VAR_5++));
  }
 else {
  while((*VAR_1 = *VAR_5++)) {
   VAR_1++;
   if (--VAR_6 == 0 && *VAR_5)
    *VAR_1++ = '.';
   }
  for(; VAR_6 > 0; VAR_6--)
   *VAR_1++ = '0';
  *VAR_1 = 0;
  }
 done0:
 FUNC_1(VAR_0, VAR_10);
        goto done;
 done:
 return VAR_9;
 }
