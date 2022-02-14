
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* dpcd; int* downstream_ports; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct intel_dp *VAR_4)
{
 return VAR_4->dpcd[VAR_1] == 0x11 &&
  VAR_4->dpcd[VAR_0] & VAR_3 &&
  VAR_4->downstream_ports[0] & VAR_2;
}
