
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpuinfo_x86 {int x86; scalar_t__ x86_model; scalar_t__ x86_stepping; scalar_t__ microcode; } ;
struct TYPE_3__ {scalar_t__ model; scalar_t__ stepping; scalar_t__ microcode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cpuinfo_x86*,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct cpuinfo_x86 *VAR_2)
{
 int VAR_3;





 if (FUNC_1(VAR_2, VAR_0))
  return 0;

 if (VAR_2->x86 != 6)
  return 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_2->x86_model == VAR_1[VAR_3].model &&
      VAR_2->x86_stepping == VAR_1[VAR_3].stepping)
   return (VAR_2->microcode <= VAR_1[VAR_3].microcode);
 }
 return 0;
}
