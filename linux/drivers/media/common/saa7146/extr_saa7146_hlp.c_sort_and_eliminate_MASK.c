
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(u32* VAR_1, int* VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = 0, VAR_7 = 0;


 if( (0 > *VAR_2) || (((void*)0) == VAR_1) ) {
  return -VAR_0;
 }


 for( VAR_5 = *VAR_2; VAR_5 > 0; VAR_5--) {
  for( VAR_3 = 0, VAR_4 = 1; VAR_4 < VAR_5; VAR_3++, VAR_4++) {
   if( VAR_1[VAR_3] > VAR_1[VAR_4] )
    FUNC_0(VAR_1[VAR_3], VAR_1[VAR_4]);
  }
 }


 for( VAR_6 = 0, VAR_7 = 1; VAR_7 < *VAR_2; VAR_7++) {
  if( VAR_1[VAR_6] != VAR_1[VAR_7])
   VAR_1[++VAR_6] = VAR_1[VAR_7];
 }

 *VAR_2 = VAR_6 + 1;

 return 0;
}
