
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int loaded; int numareas; } ;
struct TYPE_3__ {int nodes; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 (char*,...) ;
 TYPE_1__ VAR_1 ;

void FUNC_5(char *VAR_2)
{
 FUNC_0();

 FUNC_3("AAS_StoreFile\r\n");

 FUNC_1();

 FUNC_4("%6d areas stored", 0);

 FUNC_2(VAR_1.nodes);
 FUNC_4("\n");
 FUNC_3("%6d areas stored\r\n", VAR_0.numareas);
 VAR_0.loaded = 1;
}
