
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int class; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;



 int FUNC_1 (struct intel_engine_cs*) ;
 int FUNC_2 (struct intel_engine_cs*) ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 (struct intel_engine_cs*) ;
 int FUNC_5 (struct intel_engine_cs*) ;

int FUNC_6(struct intel_engine_cs *VAR_1)
{
 FUNC_2(VAR_1);

 switch (VAR_1->class) {
 case 130:
  FUNC_3(VAR_1);
  break;
 case 129:
  FUNC_4(VAR_1);
  break;
 case 131:
  FUNC_1(VAR_1);
  break;
 case 128:
  FUNC_5(VAR_1);
  break;
 default:
  FUNC_0(VAR_1->class);
  return -VAR_0;
 }

 return 0;
}
