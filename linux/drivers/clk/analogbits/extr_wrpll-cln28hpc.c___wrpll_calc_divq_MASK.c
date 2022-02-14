
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(u32 VAR_3, u64 *VAR_4)
{
 u64 VAR_5;
 u8 VAR_6 = 0;

 if (!VAR_4) {
  FUNC_0(1);
  goto wcd_out;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5 <= 1) {
  VAR_6 = 1;
  *VAR_4 = VAR_1;
 } else if (VAR_5 > VAR_0) {
  VAR_6 = FUNC_2(VAR_0);
  *VAR_4 = VAR_2;
 } else {
  VAR_6 = FUNC_2(VAR_5);
  *VAR_4 = (u64)VAR_3 << VAR_6;
 }

wcd_out:
 return VAR_6;
}
