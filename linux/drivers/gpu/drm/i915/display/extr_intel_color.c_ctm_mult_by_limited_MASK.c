
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u64 *FUNC_3(u64 *VAR_3, const u64 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
  u64 VAR_6 = VAR_4[VAR_5];
  u32 VAR_7 = VAR_1;
  u32 VAR_8 = FUNC_1(FUNC_0(VAR_6), 0,
       VAR_0 - 1) >> 2;






  VAR_3[VAR_5] = FUNC_2(VAR_7, VAR_8) >> 30;
  VAR_3[VAR_5] |= VAR_6 & VAR_2;
 }

 return VAR_3;
}
