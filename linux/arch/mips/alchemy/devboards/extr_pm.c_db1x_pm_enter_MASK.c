
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 () ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int,unsigned short) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_7(suspend_state_t VAR_18)
{
 unsigned short VAR_19[16];
 int VAR_20, VAR_21, VAR_22;


 VAR_22 = FUNC_5(VAR_13);
 VAR_22 = FUNC_0(VAR_22) >= VAR_14;
 VAR_21 = (VAR_22) ? VAR_10 : VAR_12;

 for (VAR_20 = VAR_11; VAR_20 <= VAR_21; VAR_20++)
  VAR_19[VAR_20] = FUNC_5(VAR_20);


 FUNC_6(VAR_5, 3);


 FUNC_1();


 FUNC_3(0, VAR_3);
 FUNC_3(0, VAR_4);

 FUNC_3(VAR_17, VAR_3);


 while (FUNC_2(VAR_0) & VAR_15)
  asm volatile ("nop");

 FUNC_3(FUNC_2(VAR_2) + VAR_16,
        VAR_1);


 while (FUNC_2(VAR_0) & VAR_15)
  asm volatile ("nop");


 FUNC_4();



 for (VAR_20 = VAR_11; VAR_20 <= VAR_12; VAR_20++)
  FUNC_6(VAR_20, VAR_19[VAR_20]);


 if (VAR_22) {
  FUNC_6(VAR_6, 0xffff);
  FUNC_6(VAR_9, 0xffff);
  FUNC_6(VAR_8, 0xffff);
  FUNC_6(VAR_7, VAR_19[VAR_7]);
  FUNC_6(VAR_10, VAR_19[VAR_10]);
 }


 FUNC_6(VAR_5, 0);

 return 0;
}
