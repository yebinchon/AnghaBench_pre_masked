
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
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(u8 VAR_5, u8 VAR_6, u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12;


 if (VAR_5 == VAR_0) {
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_5, VAR_7 & VAR_3);
 VAR_10 = VAR_7 & VAR_2;

 FUNC_3(&VAR_4, VAR_11);
 VAR_12 = FUNC_2(VAR_10, VAR_9, VAR_8);
 FUNC_4(&VAR_4, VAR_11);

 return VAR_12;
}
