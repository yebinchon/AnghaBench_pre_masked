
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned long
FUNC_1(unsigned long VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 if (VAR_4)
  VAR_0 /= VAR_4 + 1;

 if (VAR_3) {
  u64 VAR_5 = VAR_0;
  VAR_5 *= VAR_1;
  FUNC_0(VAR_5, VAR_2);
  VAR_0 = VAR_5;
 }

 return VAR_0;
}
