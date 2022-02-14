
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(u8 VAR_7, u8 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13;
 u32 VAR_14;
 unsigned long VAR_15;
 int VAR_16;


 if (VAR_7 == VAR_0) {
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_12 = FUNC_1(VAR_8, VAR_7, VAR_9 & VAR_3);
 VAR_13 = VAR_9 & VAR_2;

 FUNC_4(&VAR_6, VAR_15);


 VAR_16 = FUNC_2(VAR_13, VAR_12 & VAR_4, &VAR_14);
 if (VAR_16 < 0) {
  FUNC_5(&VAR_6, VAR_15);
  return VAR_16;
 }


 VAR_14 &= ~VAR_11;
 VAR_10 &= VAR_11;
 VAR_14 |= VAR_10;


 VAR_16 = FUNC_3(VAR_13, VAR_12 | VAR_5, VAR_14);

 FUNC_5(&VAR_6, VAR_15);

 return VAR_16;
}
