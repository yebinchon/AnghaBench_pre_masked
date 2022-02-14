
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char) ;
 size_t FUNC_1 (unsigned char*,unsigned char*,int,int *) ;
 unsigned char FUNC_2 (unsigned char) ;

__attribute__((used)) static int
FUNC_3(wchar_t *VAR_5, unsigned char *VAR_6, unsigned char *VAR_7)
{
 wchar_t VAR_8, VAR_9;
 size_t VAR_10;

 for (; *VAR_5 && VAR_6 < VAR_7 && *VAR_6 != '\n'; ++VAR_5, VAR_6 += VAR_10) {
  VAR_8 = *VAR_5;
  VAR_10 = FUNC_1(&VAR_9, VAR_6, VAR_7 - VAR_6, ((void*)0));
  if (VAR_10 == (size_t)-1 || VAR_10 == (size_t)-2) {
   VAR_9 = *VAR_6;
   VAR_10 = 1;
  }
  if (VAR_4)
   VAR_9 = FUNC_2(VAR_9);
  if (VAR_3 && !FUNC_0(VAR_9)) {

   --VAR_5;
   continue;
  }
  if (VAR_8 != VAR_9)
   return (VAR_8 < VAR_9 ? VAR_2 : VAR_1);
 }
 return (*VAR_5 ? VAR_1 : VAR_0);
}
