
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct TYPE_2__ {int id; } ;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_1(const struct intel_shared_dpll *VAR_7)
{
 switch (VAR_7->info->id) {
 case 129:
  return VAR_5;
 case 128:
  return VAR_6;
 case 130:
  return VAR_4;
 case 131:
  return VAR_2;
 case 133:
  return VAR_0;
 case 132:
  return VAR_1;
 default:
  FUNC_0(VAR_7->info->id);
  return VAR_3;
 }
}
