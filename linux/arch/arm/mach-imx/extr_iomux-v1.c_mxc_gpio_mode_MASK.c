
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (unsigned int,unsigned int,int) ;
 int FUNC_2 (unsigned int,unsigned int,int) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int,int) ;

int FUNC_7(int VAR_13)
{
 unsigned int VAR_14 = VAR_13 & VAR_8;
 unsigned int VAR_15 = (VAR_13 & VAR_9) >> VAR_10;
 unsigned int VAR_16 = (VAR_13 & VAR_4) >> VAR_5;
 unsigned int VAR_17 = (VAR_13 >> VAR_2) & 3;
 unsigned int VAR_18 = (VAR_13 >> VAR_3) & 3;

 if (VAR_15 >= VAR_12)
  return -VAR_0;


 FUNC_6(VAR_15, VAR_14, VAR_13 & VAR_11);


 FUNC_0(VAR_15, VAR_14, VAR_13 & VAR_6);


 FUNC_2(VAR_15, VAR_14, VAR_13 & VAR_1);


 FUNC_1(VAR_15, VAR_14, !(VAR_13 & (VAR_7 | VAR_1)));

 FUNC_5(VAR_15, VAR_14, VAR_16);

 FUNC_3(VAR_15, VAR_14, VAR_17);

 FUNC_4(VAR_15, VAR_14, VAR_18);

 return 0;
}
