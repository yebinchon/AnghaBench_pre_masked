
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ESOFTBF; unsigned int CLOCKMUL; } ;
union msr_bcr2 {int val; TYPE_1__ bits; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1)
{
 union msr_bcr2 VAR_2;

 FUNC_3(VAR_0, VAR_2);

 VAR_2 = 1;
 VAR_2 = VAR_1 & 0xff;


 FUNC_4();

 FUNC_5(VAR_0, VAR_2);

 FUNC_0();
 FUNC_1();


 FUNC_2();
 FUNC_3(VAR_0, VAR_2);
 VAR_2 = 0;
 FUNC_5(VAR_0, VAR_2);
}
