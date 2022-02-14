
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_3, u64 VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10, VAR_11 = 0;


 VAR_10 = VAR_3 >> 63;
 VAR_3 &= VAR_0;
 FUNC_0(VAR_3, VAR_4, VAR_7, VAR_10);

 VAR_10 = (VAR_3 > VAR_0) + ((VAR_3 == VAR_0) && (VAR_4 == VAR_1));
 FUNC_0(VAR_3, VAR_4, VAR_11, VAR_10);
 VAR_3 &= VAR_0;


 VAR_10 = VAR_3 + (VAR_4 >> 32);
 VAR_10 += (VAR_10 >> 32);
 VAR_10 += (u32)VAR_10 > 0xfffffffeu;
 VAR_3 += (VAR_10 >> 32);
 VAR_4 += (VAR_3 << 32);


 VAR_3 += VAR_5;
 VAR_3 += (0 - (VAR_3 < VAR_5)) & 257;
 VAR_4 += VAR_6;
 VAR_4 += (0 - (VAR_4 < VAR_6)) & 257;


 FUNC_1(VAR_8, VAR_9, VAR_3, VAR_4);
 VAR_10 = VAR_8 >> 56;
 FUNC_0(VAR_10, VAR_9, VAR_11, VAR_8);
 VAR_8 <<= 8;
 FUNC_0(VAR_10, VAR_9, VAR_11, VAR_8);
 VAR_10 += VAR_10 << 8;
 VAR_9 += VAR_10;
 VAR_9 += (0 - (VAR_9 < VAR_10)) & 257;
 VAR_9 += (0 - (VAR_9 > VAR_2-1)) & 257;
 return VAR_9;
}
