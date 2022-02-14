
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {int len; char* str; struct string* link; } ;


 int FUNC_0 (struct string**) ;
 int FUNC_1 (struct string*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char const*) ;
 struct string** VAR_1 ;
 unsigned int* VAR_2 ;

char *FUNC_4(const char *VAR_3, int VAR_4) {
 int VAR_5;
 unsigned int VAR_6;
 const char *VAR_7;
 struct string *VAR_8;

 FUNC_3(VAR_3);
 for (VAR_6 = 0, VAR_5 = VAR_4, VAR_7 = VAR_3; VAR_5 > 0; VAR_5--)
  VAR_6 = (VAR_6<<1) + VAR_2[*(unsigned char *)VAR_7++];
 VAR_6 &= FUNC_0(VAR_1)-1;
 for (VAR_8 = VAR_1[VAR_6]; VAR_8; VAR_8 = VAR_8->link)
  if (VAR_4 == VAR_8->len) {
   const char *VAR_9 = VAR_3;
   char *VAR_10 = VAR_8->str;
   do {
    if (VAR_9 == VAR_7)
     return VAR_8->str;
   } while (*VAR_9++ == *VAR_10++);
  }
 {
  static char *VAR_11, *VAR_12;
  if (VAR_4 + 1 >= VAR_12 - VAR_11) {
   int VAR_13 = VAR_4 + 4*1024;
   VAR_11 = FUNC_2(VAR_13, VAR_0);
   VAR_12 = VAR_11 + VAR_13;
  }
  FUNC_1(VAR_8, VAR_0);
  VAR_8->len = VAR_4;
  for (VAR_8->str = VAR_11; VAR_3 < VAR_7; )
   *VAR_11++ = *VAR_3++;
  *VAR_11++ = 0;
  VAR_8->link = VAR_1[VAR_6];
  VAR_1[VAR_6] = VAR_8;
  return VAR_8->str;
 }
}
