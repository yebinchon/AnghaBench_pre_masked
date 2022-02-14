
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned long long FUNC_1(void)
{
 u32 VAR_2;
 unsigned VAR_3;
 unsigned long long VAR_4 = 0;

 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++){
  VAR_2 = FUNC_0(VAR_0 + VAR_3);

  if (!(VAR_2 & 1))
   continue;

  VAR_2 &= 0x0000f000;
  VAR_2 >>= 12;
  VAR_4 += (0x800000ULL << VAR_2);
 }

 return VAR_4;
}
