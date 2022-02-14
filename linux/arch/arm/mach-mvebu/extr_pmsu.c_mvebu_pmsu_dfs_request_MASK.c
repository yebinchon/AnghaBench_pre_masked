
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int ,int *,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;

int FUNC_8(int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = FUNC_1(VAR_7);
 u32 VAR_10;


 VAR_10 = FUNC_2(VAR_6 + FUNC_0(VAR_9));
 VAR_10 &= ~VAR_2;
 FUNC_7(VAR_10, VAR_6 + FUNC_0(VAR_9));


 VAR_10 = FUNC_2(VAR_6 + FUNC_0(VAR_9));
 VAR_10 |= VAR_3;
 FUNC_7(VAR_10, VAR_6 + FUNC_0(VAR_9));


 FUNC_3(VAR_7, VAR_5,
     ((void*)0), 0);


 VAR_8 = VAR_4 + VAR_1;
 while (FUNC_5(VAR_4, VAR_8)) {
  VAR_10 = FUNC_2(VAR_6 + FUNC_0(VAR_9));
  if (VAR_10 & VAR_2)
   break;
  FUNC_6(10);
 }

 if (FUNC_4(VAR_4, VAR_8))
  return -VAR_0;


 VAR_10 = FUNC_2(VAR_6 + FUNC_0(VAR_9));
 VAR_10 &= ~VAR_3;
 FUNC_7(VAR_10, VAR_6 + FUNC_0(VAR_9));

 return 0;
}
