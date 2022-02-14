
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(void)
{
 uint64_t VAR_8;
 int VAR_9, VAR_10;

 if (!(VAR_7 & VAR_0)) {




  FUNC_3("MC Type: 0x%jx  Address: 0x%jx\n",
      (uintmax_t)FUNC_4(VAR_6),
      (uintmax_t)FUNC_4(VAR_5));
  FUNC_2("Machine check");
 }


 VAR_10 = FUNC_1(VAR_1, &VAR_9);
 VAR_8 = FUNC_4(VAR_4);
 if (!(VAR_8 & VAR_3))
  VAR_9 = 0;

 if (!VAR_9) {





  while (VAR_10 == 0)
   FUNC_0();

  FUNC_2("Unrecoverable machine check exception");
 }


 FUNC_5(VAR_4, VAR_8 & ~VAR_2);
}
