
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,char const*,int,int ) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

int FUNC_2(const char *VAR_1, int VAR_2,
     const char *VAR_3, int VAR_4,
     const char *VAR_5, int VAR_6, int VAR_7,
     unsigned VAR_8)
{
 const char *VAR_9;
 int VAR_10;





 if (*VAR_5 == '/') {
  VAR_5++;
  VAR_7--;
  VAR_6--;
 }





 if (VAR_2 < VAR_4 + 1 ||
     (VAR_4 && VAR_1[VAR_4] != '/') ||
     FUNC_1(VAR_1, VAR_3, VAR_4))
  return 0;

 VAR_10 = VAR_4 ? VAR_2 - VAR_4 - 1 : VAR_2;
 VAR_9 = VAR_1 + VAR_2 - VAR_10;

 if (VAR_6) {




  if (VAR_6 > VAR_10)
   return 0;

  if (FUNC_1(VAR_5, VAR_9, VAR_6))
   return 0;
  VAR_5 += VAR_6;
  VAR_7 -= VAR_6;
  VAR_9 += VAR_6;
  VAR_10 -= VAR_6;






  if (!VAR_7 && !VAR_10)
   return 1;
 }

 return FUNC_0(VAR_5, VAR_7,
     VAR_9, VAR_10,
     VAR_0) == 0;
}
