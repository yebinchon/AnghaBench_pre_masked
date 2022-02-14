
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int*,size_t,char*,size_t*,int *,int ) ;
 int FUNC_4 (char const*,int*,size_t*) ;

char *
FUNC_5(const char *VAR_6, size_t *VAR_7)
{
 char *VAR_8 = ((void*)0);
 int VAR_9[VAR_3];
 size_t VAR_10 = VAR_3;
 size_t VAR_11 = VAR_2;
 size_t VAR_12;
 int VAR_13;


 if (FUNC_4(VAR_6, VAR_9, &VAR_10) == -1) {
  if (VAR_5 == VAR_0) {
   FUNC_0("XXX: SD_MAXMIB too small, please bump!");
  }
  return ((void*)0);
 }
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {

  if (FUNC_3(VAR_9, VAR_10, ((void*)0), &VAR_12, ((void*)0), 0) == -1)
   break;
  VAR_12 += VAR_12 * VAR_11 / 100;
  if ((VAR_8 = (char *)FUNC_2(VAR_12)) == ((void*)0)) {
   FUNC_0("Out of memory!");
   return ((void*)0);
  }
  if (FUNC_3(VAR_9, VAR_10, VAR_8, &VAR_12, ((void*)0), 0) == -1) {
   FUNC_1(VAR_8);
   VAR_8 = ((void*)0);
   if (VAR_5 == VAR_0) {
    VAR_11 += VAR_11 * VAR_1 / 100;
   } else
    break;
  } else {

   if (VAR_7 != ((void*)0))
    *VAR_7 = VAR_12;
   break;
  }
 }

 return VAR_8;
}
