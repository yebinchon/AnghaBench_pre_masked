
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_2(const unsigned char *VAR_0, u32 *VAR_1)
{
 unsigned char VAR_2[32];
 u32 VAR_3, VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_2, VAR_0, 24);
 FUNC_1((unsigned char *)&VAR_3, VAR_0+16, 4);
 FUNC_1((unsigned char *)&VAR_4, VAR_0+20, 4);
 VAR_5 = ~VAR_3;
 VAR_6 = ~VAR_4;
 FUNC_1(VAR_2+24, (unsigned char *)&VAR_5, 4);
 FUNC_1(VAR_2+28, (unsigned char *)&VAR_6, 4);
 FUNC_0(VAR_2, VAR_1);
}
