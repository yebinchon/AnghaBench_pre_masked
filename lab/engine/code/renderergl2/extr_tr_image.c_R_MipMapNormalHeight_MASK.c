
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef scalar_t__ qboolean ;
typedef int byte ;


 int FUNC_0 (scalar_t__) ;
 int const FUNC_1 (int const,int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static void FUNC_4 (const byte *VAR_0, byte *VAR_1, int VAR_2, int VAR_3, qboolean VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8 = VAR_4 ? 3 : 0;
 int VAR_9 = VAR_4 ? 0 : 3;

 if ( VAR_2 == 1 && VAR_3 == 1 ) {
  return;
 }

 VAR_7 = VAR_2 * 4;
 VAR_2 >>= 1;
 VAR_3 >>= 1;

 for (VAR_5=0 ; VAR_5<VAR_3 ; VAR_5++, VAR_0+=VAR_7) {
  for (VAR_6=0 ; VAR_6<VAR_2 ; VAR_6++, VAR_1+=4, VAR_0+=8) {
   vec3_t VAR_10;

   VAR_10[0] = FUNC_2(VAR_0[VAR_8 ]);
   VAR_10[1] = FUNC_2(VAR_0[ 1]);
   VAR_10[2] = FUNC_2(VAR_0[ 2]);

   VAR_10[0] += FUNC_2(VAR_0[VAR_8 +4]);
   VAR_10[1] += FUNC_2(VAR_0[ 5]);
   VAR_10[2] += FUNC_2(VAR_0[ 6]);

   VAR_10[0] += FUNC_2(VAR_0[VAR_8+VAR_7 ]);
   VAR_10[1] += FUNC_2(VAR_0[ VAR_7+1]);
   VAR_10[2] += FUNC_2(VAR_0[ VAR_7+2]);

   VAR_10[0] += FUNC_2(VAR_0[VAR_8+VAR_7+4]);
   VAR_10[1] += FUNC_2(VAR_0[ VAR_7+5]);
   VAR_10[2] += FUNC_2(VAR_0[ VAR_7+6]);

   FUNC_3(VAR_10);






   VAR_1[VAR_8] = FUNC_0(VAR_10[0]);
   VAR_1[1 ] = FUNC_0(VAR_10[1]);
   VAR_1[2 ] = FUNC_0(VAR_10[2]);
   VAR_1[VAR_9] = FUNC_1(FUNC_1(VAR_0[VAR_9], VAR_0[VAR_9+4]), FUNC_1(VAR_0[VAR_9+VAR_7], VAR_0[VAR_9+VAR_7+4]));
  }
 }
}
