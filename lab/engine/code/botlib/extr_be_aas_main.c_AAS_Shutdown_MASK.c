
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int aas_t ;
struct TYPE_5__ {int initialized; scalar_t__ entities; } ;
struct TYPE_4__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,char*) ;

void FUNC_9(void)
{
 FUNC_5();

 FUNC_1();

 FUNC_4();

 FUNC_2();

 FUNC_3();

 FUNC_0();

 if (VAR_1.entities) FUNC_7(VAR_1.entities);

 FUNC_6(&VAR_1, 0, sizeof(aas_t));

 VAR_1.initialized = VAR_3;



 VAR_2.Print(VAR_0, "AAS shutdown.\n");
}
