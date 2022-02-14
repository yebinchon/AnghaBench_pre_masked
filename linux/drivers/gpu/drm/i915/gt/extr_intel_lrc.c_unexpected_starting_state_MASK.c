
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_engine_cs*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct intel_engine_cs *VAR_2)
{
 bool VAR_3 = 0;

 if (FUNC_1(VAR_2, VAR_0) & VAR_1) {
  FUNC_0("STOP_RING still set in RING_MI_MODE\n");
  VAR_3 = 1;
 }

 return VAR_3;
}
