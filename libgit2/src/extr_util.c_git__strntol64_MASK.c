
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(int64_t *VAR_3, const char *VAR_4, size_t VAR_5, const char **VAR_6, int VAR_7)
{
 const char *VAR_8;
 int64_t VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_8 = VAR_4;
 VAR_14 = 0;
 VAR_9 = 0;
 VAR_15 = 0;
 VAR_12 = 0;




 while (VAR_5 && FUNC_0(*VAR_8))
  VAR_8++, VAR_5--;

 if (!VAR_5)
  goto Return;




 if (*VAR_8 == '-' || *VAR_8 == '+') {
  if (*VAR_8 == '-')
   VAR_14 = 1;
  VAR_8++;
  VAR_5--;
 }

 if (!VAR_5)
  goto Return;







 if (VAR_7 == 0) {
  if (*VAR_8 != '0')
   VAR_7 = 10;
  else if (VAR_5 > 2 && (VAR_8[1] == 'x' || VAR_8[1] == 'X'))
   VAR_7 = 16;
  else
   VAR_7 = 8;
 }

 if (VAR_7 < 0 || 36 < VAR_7)
  goto Return;
 if (VAR_7 == 16 && VAR_5 > 2 && VAR_8[0] == '0' && (VAR_8[1] == 'x' || VAR_8[1] == 'X')) {
  VAR_8 += 2;
  VAR_5 -= 2;
 }




 for (; VAR_5 > 0; VAR_8++,VAR_15++,VAR_5--) {
  VAR_11 = *VAR_8;
  VAR_13 = VAR_7;
  if ('0'<=VAR_11 && VAR_11<='9')
   VAR_13 = VAR_11 - '0';
  else if ('a'<=VAR_11 && VAR_11<='z')
   VAR_13 = VAR_11 - 'a' + 10;
  else if ('A'<=VAR_11 && VAR_11<='Z')
   VAR_13 = VAR_11 - 'A' + 10;
  if (VAR_13 >= VAR_7)
   break;
  VAR_13 = VAR_14 ? -VAR_13 : VAR_13;
  if (VAR_9 > VAR_1 / VAR_7 || VAR_9 < VAR_2 / VAR_7) {
   VAR_12 = 1;

   continue;
  }
  VAR_10 = VAR_9 * VAR_7;
  if ((VAR_13 > 0 && VAR_10 > VAR_1 - VAR_13) ||
      (VAR_13 < 0 && VAR_10 < VAR_2 - VAR_13)) {
   VAR_12 = 1;

   continue;
  }
  VAR_9 = VAR_10 + VAR_13;
 }

Return:
 if (VAR_15 == 0) {
  FUNC_1(VAR_0, "failed to convert string to long: not a number");
  return -1;
 }

 if (VAR_6)
  *VAR_6 = VAR_8;

 if (VAR_12) {
  FUNC_1(VAR_0, "failed to convert string to long: overflow error");
  return -1;
 }

 *VAR_3 = VAR_9;
 return 0;
}
