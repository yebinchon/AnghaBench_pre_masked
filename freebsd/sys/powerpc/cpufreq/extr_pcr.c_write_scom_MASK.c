
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_5(register_t VAR_4, uint64_t VAR_5)
{
 register_t VAR_6;

 register_t VAR_7, VAR_8, VAR_9;


 VAR_6 = FUNC_1();
 FUNC_2(VAR_6 & ~VAR_0); FUNC_0();




 VAR_7 = (VAR_5 >> 32) & 0xffffffff;
 VAR_8 = VAR_5 & 0xffffffff;
 FUNC_4(VAR_3, VAR_7, VAR_8, VAR_9);

 FUNC_0();
 FUNC_3(VAR_2, VAR_4 | VAR_1);
 FUNC_0();

 FUNC_2(VAR_6); FUNC_0();
}
