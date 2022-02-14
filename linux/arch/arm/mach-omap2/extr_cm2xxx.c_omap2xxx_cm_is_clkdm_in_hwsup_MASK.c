
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(s16 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_4 &= VAR_3;
 VAR_4 >>= FUNC_0(VAR_3);

 return (VAR_4 == VAR_0) ? 1 : 0;
}
