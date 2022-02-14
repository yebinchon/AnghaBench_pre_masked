
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static u32 FUNC_3(const u8 *VAR_7)
{
 u8 VAR_8 = *(VAR_7 + VAR_5);
 u32 VAR_9 = VAR_2;

 if (VAR_8 & VAR_1)
  VAR_9 += FUNC_1(VAR_7 + VAR_9);
 if (VAR_8 & VAR_6)
  VAR_9 += FUNC_2(VAR_7 + VAR_9);
 if (VAR_8 & VAR_0)
  VAR_9 += FUNC_0(VAR_7 + VAR_9);
 if (VAR_8 & VAR_3)
  VAR_9 += VAR_4;

 return VAR_9;
}
