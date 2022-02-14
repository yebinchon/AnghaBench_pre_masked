
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;
 u64 VAR_7 = (u64)VAR_2 * VAR_0;

 VAR_6 = VAR_1;
 VAR_3 = (VAR_6 >> 24) & FUNC_0(0);
 VAR_4 = (VAR_6 >> 16) & 0xff;
 VAR_5 = VAR_6 & 0xff;

 VAR_6 = VAR_5 * VAR_0;
 VAR_6 = VAR_6 / 0xff;
 VAR_6 += VAR_3 * VAR_0;
 VAR_6 += 2 * VAR_4 * VAR_0;
 FUNC_1(VAR_7, VAR_6);

 return (u32)VAR_7;
}
