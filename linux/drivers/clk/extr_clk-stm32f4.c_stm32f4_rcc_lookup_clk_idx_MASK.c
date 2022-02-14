
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(u8 VAR_6, u8 VAR_7)
{
 u64 VAR_8[VAR_3];

 if (VAR_6 == 1) {
  if (FUNC_3(VAR_7 >= VAR_5))
   return -VAR_2;
  return VAR_7;
 }

 FUNC_5(VAR_8, VAR_4, sizeof(VAR_8));


 if (FUNC_3(VAR_7 >= VAR_0 * sizeof(VAR_8) ||
      0 == (VAR_8[FUNC_1(VAR_7)] &
     FUNC_0(VAR_7))))
  return -VAR_2;


 VAR_8[FUNC_1(VAR_7)] &=
     FUNC_2(VAR_7 % VAR_1, 0);

 return VAR_5 - 1 + FUNC_4(VAR_8[0]) +
        (FUNC_1(VAR_7) >= 1 ? FUNC_4(VAR_8[1]) : 0) +
        (FUNC_1(VAR_7) >= 2 ? FUNC_4(VAR_8[2]) : 0);
}
