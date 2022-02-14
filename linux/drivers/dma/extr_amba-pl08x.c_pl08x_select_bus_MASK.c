
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

__attribute__((used)) static u32 FUNC_0(bool VAR_6, u8 VAR_7, u8 VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;


 if (VAR_6) {
  VAR_10 = VAR_0;
  VAR_11 = VAR_1;
 } else {
  VAR_10 = VAR_2;
  VAR_11 = VAR_3;
 }

 if (!(VAR_8 & VAR_4) || ((VAR_8 & VAR_5) && (VAR_7 & VAR_4)))
  VAR_9 |= VAR_10;
 if (!(VAR_7 & VAR_4) || ((VAR_7 & VAR_5) && !(VAR_8 & VAR_5)))
  VAR_9 |= VAR_11;

 return VAR_9;
}
