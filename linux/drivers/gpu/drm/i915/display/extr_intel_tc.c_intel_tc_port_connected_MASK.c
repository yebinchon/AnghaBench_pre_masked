
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {int tc_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_digital_port*) ;
 int FUNC_2 (struct intel_digital_port*) ;
 int FUNC_3 (struct intel_digital_port*) ;

bool FUNC_4(struct intel_digital_port *VAR_0)
{
 bool VAR_1;

 FUNC_1(VAR_0);
 VAR_1 = FUNC_3(VAR_0) &
         FUNC_0(VAR_0->tc_mode);
 FUNC_2(VAR_0);

 return VAR_1;
}
