
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucode_cpu_info {scalar_t__ mc; scalar_t__ valid; } ;
struct TYPE_2__ {int (* apply_microcode ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 struct ucode_cpu_info* VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2 = FUNC_1();
 struct ucode_cpu_info *VAR_3 = VAR_1 + VAR_2;

 if (VAR_3->valid && VAR_3->mc)
  VAR_0->apply_microcode(VAR_2);
 else if (!VAR_3->mc)
  FUNC_0();
}
