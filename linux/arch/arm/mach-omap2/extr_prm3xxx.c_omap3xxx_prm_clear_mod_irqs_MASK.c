
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int FUNC_5(s16 VAR_10, u8 VAR_11, u32 VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17 = (VAR_11 == 3) ? VAR_6 : VAR_9;
 u16 VAR_18 = (VAR_11 == 3) ? VAR_3 : VAR_0;
 u16 VAR_19 = (VAR_11 == 3) ? VAR_2 : VAR_1;
 u16 VAR_20 = (VAR_11 == 3) ?
  VAR_5 : VAR_8;
 int VAR_21 = 0;

 VAR_13 = FUNC_3(VAR_10, VAR_17);
 VAR_13 &= FUNC_3(VAR_10, VAR_20);
 VAR_13 &= VAR_12;
 if (VAR_13) {
  VAR_15 = FUNC_0(VAR_10, VAR_19);
  VAR_14 = FUNC_0(VAR_10, VAR_18);
  while (VAR_13) {
   VAR_16 = VAR_13;
   FUNC_1(VAR_16, VAR_10, VAR_19);




   if (VAR_10 == VAR_7)
    VAR_16 |= 1 << VAR_4;
   FUNC_1(VAR_16, VAR_10, VAR_18);
   FUNC_4(VAR_13, VAR_10, VAR_17);
   VAR_13 = FUNC_3(VAR_10, VAR_17);
   VAR_13 &= VAR_12;
   VAR_21++;
  }
  FUNC_2(VAR_15, VAR_10, VAR_19);
  FUNC_2(VAR_14, VAR_10, VAR_18);
 }

 return VAR_21;
}
