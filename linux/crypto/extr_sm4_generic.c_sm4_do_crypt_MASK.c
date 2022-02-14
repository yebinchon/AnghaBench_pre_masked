
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int*,int const) ;

__attribute__((used)) static void FUNC_3(const u32 *VAR_0, u32 *VAR_1, const u32 *VAR_2)
{
 u32 VAR_3[4], VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
  VAR_3[VAR_4] = FUNC_0(&VAR_2[VAR_4]);

 for (VAR_4 = 0; VAR_4 < 32; ++VAR_4) {
  VAR_5 = FUNC_2(VAR_3, VAR_0[VAR_4]);
  VAR_3[0] = VAR_3[1];
  VAR_3[1] = VAR_3[2];
  VAR_3[2] = VAR_3[3];
  VAR_3[3] = VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
  FUNC_1(VAR_3[3 - VAR_4], &VAR_1[VAR_4]);
}
