
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (long*) ;
 long* FUNC_1 (size_t) ;
 int FUNC_2 (long*,long*,size_t) ;
 int FUNC_3 (int ,int,long*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(int *VAR_4)
{
 static long *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 static int VAR_7 = 0;
 size_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_5 == ((void*)0)) {
  VAR_8 = 0;
  VAR_9 = FUNC_3(VAR_2, 2, ((void*)0), &VAR_8, ((void*)0), 0);
  if (VAR_9)
   return (VAR_9);
  if ((VAR_5 = FUNC_1(VAR_8)) == ((void*)0))
   return (VAR_3);
  if ((VAR_6 = FUNC_1(VAR_8)) == ((void*)0)) {
   FUNC_0(VAR_5);
   VAR_5 = ((void*)0);
   return (VAR_3);
  }
  VAR_7 = VAR_8 / (sizeof(long) * VAR_0);
 }

 VAR_8 = sizeof(long) * VAR_0 * VAR_7;
 VAR_9 = FUNC_3(VAR_2, 2, VAR_5, &VAR_8, ((void*)0), 0);
 if (VAR_9)
  return (VAR_9);

 if (VAR_4) {
  *VAR_4 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   VAR_12 = 0;
   for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
       VAR_12 += VAR_5[VAR_10 * VAR_0 + VAR_11] -
    VAR_6[VAR_10 * VAR_0 + VAR_11];
   }
   if (VAR_12 == 0)
    continue;
   *VAR_4 += 100 - (VAR_5[VAR_10 * VAR_0 + VAR_1] -
       VAR_6[VAR_10 * VAR_0 + VAR_1]) * 100 / VAR_12;
  }
 }

 FUNC_2(VAR_6, VAR_5, VAR_8);

 return (0);
}
