
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0,
         u32 VAR_1, u32 VAR_2)
{
 u64 VAR_3;






 if (VAR_2) {
  VAR_1 = (VAR_1 << 9) + VAR_2;
  VAR_3 = VAR_0;
  VAR_3 <<= 8;
  FUNC_0(VAR_3, VAR_1);
 } else if (VAR_1) {
  VAR_3 = VAR_0 / (VAR_1 << 1);
 } else {
  VAR_3 = VAR_0;
 }
 return VAR_3;
}
