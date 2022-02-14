
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_engine_cs {int name; int mmio_base; struct intel_uncore* uncore; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (struct intel_engine_cs*) ;
 int FUNC_5 (struct intel_uncore*,int ) ;
 scalar_t__ FUNC_6 (struct intel_uncore*,int ) ;
 int FUNC_7 (struct intel_uncore*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct intel_engine_cs *VAR_0)
{
 struct intel_uncore *VAR_1 = VAR_0->uncore;
 const u32 VAR_2 = VAR_0->mmio_base;
 FUNC_0("%s\n", VAR_0->name);

 if (FUNC_4(VAR_0))
  FUNC_0("%s: timed out on STOP_RING\n", VAR_0->name);

 FUNC_7(VAR_1,
         FUNC_2(VAR_2),
         FUNC_6(VAR_1, FUNC_3(VAR_2)));
 FUNC_5(VAR_1, FUNC_2(VAR_2));

 FUNC_7(VAR_1, FUNC_2(VAR_2), 0);
 FUNC_7(VAR_1, FUNC_3(VAR_2), 0);
 FUNC_5(VAR_1, FUNC_3(VAR_2));


 FUNC_7(VAR_1, FUNC_1(VAR_2), 0);


 if (FUNC_6(VAR_1, FUNC_2(VAR_2)))
  FUNC_0("%s: ring head [%x] not parked\n",
     VAR_0->name,
     FUNC_6(VAR_1, FUNC_2(VAR_2)));
}
