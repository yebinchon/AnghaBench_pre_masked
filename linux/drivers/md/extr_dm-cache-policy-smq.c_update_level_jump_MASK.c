
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {unsigned int hotspot_level_jump; int hotspot_stats; } ;





 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct smq_policy *VAR_0)
{
 switch (FUNC_0(&VAR_0->hotspot_stats)) {
 case 129:
  VAR_0->hotspot_level_jump = 4u;
  break;

 case 130:
  VAR_0->hotspot_level_jump = 2u;
  break;

 case 128:
  VAR_0->hotspot_level_jump = 1u;
  break;
 }
}
