
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_config {scalar_t__ monarch_timeout; } ;
struct cpuinfo_x86 {int x86; int x86_model; int x86_stepping; } ;


 scalar_t__ VAR_0 ;
 struct mca_config VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cpuinfo_x86 *VAR_2)
{
 struct mca_config *VAR_3 = &VAR_1;





 if ((VAR_2->x86 == 6 && VAR_2->x86_model == 0xf && VAR_2->x86_stepping >= 0xe) ||
      VAR_2->x86 > 6) {
  if (VAR_3->monarch_timeout < 0)
   VAR_3->monarch_timeout = VAR_0;
 }
}
