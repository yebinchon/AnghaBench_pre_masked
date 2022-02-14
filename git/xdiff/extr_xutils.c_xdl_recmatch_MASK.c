
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,long,int) ;
 int FUNC_2 (char const*,char const*,long) ;

int FUNC_3(const char *VAR_5, long VAR_6, const char *VAR_7, long VAR_8, long VAR_9)
{
 int VAR_10, VAR_11;

 if (VAR_6 == VAR_8 && !FUNC_2(VAR_5, VAR_7, VAR_6))
  return 1;
 if (!(VAR_9 & VAR_4))
  return 0;

 VAR_10 = 0;
 VAR_11 = 0;
 if (VAR_9 & VAR_1) {
  goto skip_ws;
  while (VAR_10 < VAR_6 && VAR_11 < VAR_8) {
   if (VAR_5[VAR_10++] != VAR_7[VAR_11++])
    return 0;
  skip_ws:
   while (VAR_10 < VAR_6 && FUNC_0(VAR_5[VAR_10]))
    VAR_10++;
   while (VAR_11 < VAR_8 && FUNC_0(VAR_7[VAR_11]))
    VAR_11++;
  }
 } else if (VAR_9 & VAR_3) {
  while (VAR_10 < VAR_6 && VAR_11 < VAR_8) {
   if (FUNC_0(VAR_5[VAR_10]) && FUNC_0(VAR_7[VAR_11])) {

    while (VAR_10 < VAR_6 && FUNC_0(VAR_5[VAR_10]))
     VAR_10++;
    while (VAR_11 < VAR_8 && FUNC_0(VAR_7[VAR_11]))
     VAR_11++;
    continue;
   }
   if (VAR_5[VAR_10++] != VAR_7[VAR_11++])
    return 0;
  }
 } else if (VAR_9 & VAR_2) {
  while (VAR_10 < VAR_6 && VAR_11 < VAR_8 && VAR_5[VAR_10] == VAR_7[VAR_11]) {
   VAR_10++;
   VAR_11++;
  }
 } else if (VAR_9 & VAR_0) {

  while (VAR_10 < VAR_6 && VAR_11 < VAR_8 && VAR_5[VAR_10] == VAR_7[VAR_11]) {
   VAR_10++;
   VAR_11++;
  }
  return (FUNC_1(VAR_5, VAR_6, VAR_10) &&
   FUNC_1(VAR_7, VAR_8, VAR_11));
 }







 if (VAR_10 < VAR_6) {
  while (VAR_10 < VAR_6 && FUNC_0(VAR_5[VAR_10]))
   VAR_10++;
  if (VAR_6 != VAR_10)
   return 0;
 }
 if (VAR_11 < VAR_8) {
  while (VAR_11 < VAR_8 && FUNC_0(VAR_7[VAR_11]))
   VAR_11++;
  return (VAR_8 == VAR_11);
 }
 return 1;
}
