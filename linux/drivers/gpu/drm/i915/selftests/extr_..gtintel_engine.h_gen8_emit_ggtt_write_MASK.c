
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u32 *
FUNC_2(u32 *VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{

 FUNC_0(VAR_5 & (1 << 5));

 FUNC_0(!FUNC_1(VAR_5, 8));

 *VAR_3++ = (VAR_0 + 1) | VAR_1 | VAR_6;
 *VAR_3++ = VAR_5 | VAR_2;
 *VAR_3++ = 0;
 *VAR_3++ = VAR_4;

 return VAR_3;
}
