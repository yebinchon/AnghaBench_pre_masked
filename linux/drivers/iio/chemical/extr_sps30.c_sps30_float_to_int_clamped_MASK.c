
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static s32 FUNC_2(const u8 *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = VAR_2 & FUNC_0(22, 0);

 int VAR_4 = VAR_2 >> 23;
 int VAR_5, VAR_6;


 if (!VAR_4 && !VAR_3)
  return 0;

 VAR_4 -= 127;
 if (VAR_4 < 0) {

  return ((((1 << 23) + VAR_3) * 100) >> 23) >> (-VAR_4);
 }


 VAR_6 = 23 - VAR_4;
 VAR_2 = (1 << VAR_4) + (VAR_3 >> VAR_6);
 if (VAR_2 >= VAR_0)
  return VAR_0 * 100;

 VAR_5 = VAR_3 & FUNC_0(VAR_6 - 1, 0);

 return VAR_2 * 100 + ((VAR_5 * 100) >> VAR_6);
}
