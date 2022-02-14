
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int instance; int class; int name; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_0)
{





 FUNC_0(FUNC_2(VAR_0->name, sizeof(VAR_0->name), "%s'%u",
        FUNC_1(VAR_0->class),
        VAR_0->instance) >= sizeof(VAR_0->name));
}
