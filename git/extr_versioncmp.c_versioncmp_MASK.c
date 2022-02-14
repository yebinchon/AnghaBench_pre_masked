
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct string_list {int dummy; } ;
typedef int int8_t ;
 void* FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char const) ;
 struct string_list const* VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char const*,int,int*) ;
 int FUNC_3 (char*) ;

int FUNC_4(const char *VAR_2, const char *VAR_3)
{
 const unsigned char *VAR_4 = (const unsigned char *) VAR_2;
 const unsigned char *VAR_5 = (const unsigned char *) VAR_3;
 unsigned char VAR_6, VAR_7;
 int VAR_8, VAR_9;





 static const uint8_t VAR_10[] = {

             129, 130, 128,
             129, 130, 130,
             129, 131, 131,
             129, 131, 128
 };

 static const int8_t VAR_11[] = {


             133, 133, 133, 133, 132, 133, 133, 133, 133,
             133, -1, -1, +1, 132, 132, +1, 132, 132,
             133, 133, 133, 133, 133, 133, 133, 133, 133,
             133, +1, +1, -1, 133, 133, -1, 133, 133
 };

 if (VAR_4 == VAR_5)
  return 0;

 VAR_6 = *VAR_4++;
 VAR_7 = *VAR_5++;

 VAR_8 = 129 + ((VAR_6 == '0') + (FUNC_1 (VAR_6) != 0));

 while ((VAR_9 = VAR_6 - VAR_7) == 0) {
  if (VAR_6 == '\0')
   return VAR_9;

  VAR_8 = VAR_10[VAR_8];
  VAR_6 = *VAR_4++;
  VAR_7 = *VAR_5++;
  VAR_8 += (VAR_6 == '0') + (FUNC_1 (VAR_6) != 0);
 }

 if (!VAR_0) {
  const struct string_list *VAR_12;
  VAR_0 = 1;
  VAR_1 = FUNC_0("versionsort.suffix");
  VAR_12 = FUNC_0("versionsort.prereleasesuffix");
  if (VAR_1) {
   if (VAR_12)
    FUNC_3("ignoring versionsort.prereleasesuffix because versionsort.suffix is set");
  } else
   VAR_1 = VAR_12;
 }
 if (VAR_1 && FUNC_2(VAR_2, VAR_3, (const char *) VAR_4 - VAR_2 - 1,
         &VAR_9))
  return VAR_9;

 VAR_8 = VAR_11[VAR_8 * 3 + (((VAR_7 == '0') + (FUNC_1 (VAR_7) != 0)))];

 switch (VAR_8) {
 case 133:
  return VAR_9;

 case 132:
  while (FUNC_1 (*VAR_4++))
   if (!FUNC_1 (*VAR_5++))
    return 1;

  return FUNC_1 (*VAR_5) ? -1 : VAR_9;

 default:
  return VAR_8;
 }
}
