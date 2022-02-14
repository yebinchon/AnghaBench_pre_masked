
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int mmio_base; int uncore; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_1)
{
 FUNC_2(VAR_1->uncore,
         FUNC_0(VAR_1->mmio_base),
         FUNC_1(VAR_0));
}
