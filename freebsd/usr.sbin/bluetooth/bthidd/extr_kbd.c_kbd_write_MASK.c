
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int buf ;
typedef int bitstr_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(bitstr_t *VAR_1, int32_t VAR_2, int32_t VAR_3, int32_t VAR_4)
{
 int32_t VAR_5, *VAR_6, *VAR_7, VAR_8, VAR_9[64];

 VAR_6 = VAR_9;
 VAR_7 = VAR_6 + sizeof(VAR_9)/sizeof(VAR_9[0]);
 VAR_5 = VAR_2;

 while (VAR_5 < VAR_0) {
  if (FUNC_0(VAR_1, VAR_5)) {
   VAR_8 = FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7);
   if (VAR_8 == -1) {
    FUNC_2(VAR_4, VAR_9, (VAR_6 - VAR_9) * sizeof(VAR_9[0]));
    VAR_6 = VAR_9;
    continue;
   }

   VAR_6 += VAR_8;
  }

  VAR_5 ++;
 }

 if (VAR_6 != VAR_9)
  FUNC_2(VAR_4, VAR_9, (VAR_6 - VAR_9) * sizeof(VAR_9[0]));
}
