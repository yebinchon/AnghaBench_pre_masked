
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int FUNC_0 (double*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (double) ;
 double VAR_6 ;
 double FUNC_3 (int ) ;

__attribute__((used)) static double
FUNC_4(double VAR_7)
{
 double VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 double VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_8 = 360 * VAR_7 / 365.2422;
 FUNC_0(&VAR_8);
 VAR_9 = VAR_8 + VAR_1 - VAR_5;
 FUNC_0(&VAR_9);
 VAR_10 = 360 / VAR_3 * VAR_0 * FUNC_3(FUNC_2(VAR_9));
 VAR_11 = VAR_8 + VAR_10 + VAR_1;
 FUNC_0(&VAR_11);
 VAR_12 = 13.1763966 * VAR_7 + VAR_6;
 FUNC_0(&VAR_12);
 VAR_13 = VAR_12 - (0.1114041 * VAR_7) - VAR_4;
 FUNC_0(&VAR_13);
 VAR_23 = VAR_2 - (0.0529539 * VAR_7);
 FUNC_0(&VAR_23);
 VAR_14 = 1.2739 * FUNC_3(FUNC_2(2*(VAR_12 - VAR_11) - VAR_13));
 VAR_15 = 0.1858 * FUNC_3(FUNC_2(VAR_9));
 VAR_16 = 0.37 * FUNC_3(FUNC_2(VAR_9));
 VAR_17 = VAR_13 + VAR_14 - VAR_15 - VAR_16;
 VAR_10 = 6.2886 * FUNC_3(FUNC_2(VAR_17));
 VAR_18 = 0.214 * FUNC_3(FUNC_2(2 * VAR_17));
 VAR_19 = VAR_12 + VAR_14 + VAR_10 - VAR_15 + VAR_18;
 VAR_20 = 0.6583 * FUNC_3(FUNC_2(2 * (VAR_19 - VAR_11)));
 VAR_21 = VAR_19 + VAR_20;
 VAR_22 = VAR_21 - VAR_11;
 return(50 * (1 - FUNC_1(FUNC_2(VAR_22))));
}
