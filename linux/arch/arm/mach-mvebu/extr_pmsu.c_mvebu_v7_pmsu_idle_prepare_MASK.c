
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_3 (int ) ;
 int * VAR_12 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_13)
{
 unsigned int VAR_14 = FUNC_3(FUNC_5());
 u32 VAR_15;

 if (VAR_12 == ((void*)0))
  return -VAR_0;






 VAR_15 = FUNC_4(VAR_12 + FUNC_2(VAR_14));
 VAR_15 |= VAR_6 |
        VAR_10 |
        VAR_8 |
        VAR_11 |
        VAR_9 |
        VAR_7;
 FUNC_6(VAR_15, VAR_12 + FUNC_2(VAR_14));

 VAR_15 = FUNC_4(VAR_12 + FUNC_0(VAR_14));

 if (VAR_13 & VAR_4)
  VAR_15 |= VAR_1;


 VAR_15 |= VAR_2;
 FUNC_6(VAR_15, VAR_12 + FUNC_0(VAR_14));

 if (VAR_13 & VAR_5) {

  VAR_15 = FUNC_4(VAR_12 + FUNC_1(VAR_14));
  VAR_15 |= VAR_3;
  FUNC_6(VAR_15, VAR_12 + FUNC_1(VAR_14));
 }

 return 0;
}
