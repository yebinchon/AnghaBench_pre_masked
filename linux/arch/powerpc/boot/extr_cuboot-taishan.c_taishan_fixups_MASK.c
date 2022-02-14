
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_enet1addr; int bi_enetaddr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned long,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{


 unsigned long VAR_1 = 33000000;

 FUNC_1(VAR_1, 6 * 1843200, 25000000);

 FUNC_3();

 FUNC_0("ethernet0", VAR_0.bi_enetaddr);
 FUNC_0("ethernet1", VAR_0.bi_enet1addr);

 FUNC_2("/plb/opb/ebc");
}
