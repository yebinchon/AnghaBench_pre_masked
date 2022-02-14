
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_8 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (int ) ;

time64_t FUNC_5(void)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16;

 FUNC_2(&VAR_8, VAR_16);
 VAR_14 = FUNC_4(VAR_5);
 VAR_13 = FUNC_4(VAR_3);
 VAR_12 = FUNC_4(VAR_1);

 if (VAR_12 & VAR_2) {
  VAR_12 &= 0x3f;
 } else {
  if (VAR_12 & 0x20)
   VAR_12 = (VAR_12 & 0xf) + 0x12;
 }

 VAR_11 = FUNC_4(VAR_0);
 VAR_10 = FUNC_4(VAR_4);
 VAR_9 = FUNC_4(VAR_7);
 VAR_15 = FUNC_4(VAR_6);
 FUNC_3(&VAR_8, VAR_16);

 VAR_14 = FUNC_0(VAR_14);
 VAR_13 = FUNC_0(VAR_13);
 VAR_12 = FUNC_0(VAR_12);
 VAR_11 = FUNC_0(VAR_11);
 VAR_10 = FUNC_0(VAR_10);
 VAR_9 = FUNC_0(VAR_9);
 VAR_15 = FUNC_0(VAR_15);

 VAR_9 += (VAR_15 * 100);

 return FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
}
