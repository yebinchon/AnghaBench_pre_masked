
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_1(unsigned VAR_2, u8 VAR_3[], u8 VAR_4)
{
 if (VAR_2)
  return VAR_1;

 VAR_3[0] = VAR_0;

 VAR_4 &= 0x1f;
 VAR_4 <<= 3;
 VAR_3[1] = VAR_4;

 FUNC_0(VAR_1, "\tDMASEV %u\n", VAR_4 >> 3);

 return VAR_1;
}
