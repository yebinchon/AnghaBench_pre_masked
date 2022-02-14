
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int rk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int const*) ;

__attribute__((used)) static void FUNC_6(u32 VAR_0[ ], const u8 VAR_1[])
{
 int VAR_2 = 10, VAR_3, VAR_4;
 u32 VAR_5;


 FUNC_5(VAR_0, VAR_1);

 for (VAR_3 = 0, VAR_4 = 4*VAR_2; VAR_3 < VAR_4; VAR_3 += 4, VAR_4 -= 4) {
  VAR_5 = VAR_0[VAR_3 ]; VAR_0[VAR_3 ] = VAR_0[VAR_4 ]; VAR_0[VAR_4 ] = VAR_5;
  VAR_5 = VAR_0[VAR_3 + 1]; VAR_0[VAR_3 + 1] = VAR_0[VAR_4 + 1]; VAR_0[VAR_4 + 1] = VAR_5;
  VAR_5 = VAR_0[VAR_3 + 2]; VAR_0[VAR_3 + 2] = VAR_0[VAR_4 + 2]; VAR_0[VAR_4 + 2] = VAR_5;
  VAR_5 = VAR_0[VAR_3 + 3]; VAR_0[VAR_3 + 3] = VAR_0[VAR_4 + 3]; VAR_0[VAR_4 + 3] = VAR_5;
 }


 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  VAR_0 += 4;
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   VAR_0[VAR_4] = FUNC_0(FUNC_4((VAR_0[VAR_4] >> 24) )) ^
    FUNC_1(FUNC_4((VAR_0[VAR_4] >> 16) & 0xff)) ^
    FUNC_2(FUNC_4((VAR_0[VAR_4] >> 8) & 0xff)) ^
    FUNC_3(FUNC_4((VAR_0[VAR_4] ) & 0xff));
  }
 }
}
