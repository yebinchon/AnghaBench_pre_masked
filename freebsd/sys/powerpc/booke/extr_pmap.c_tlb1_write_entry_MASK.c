
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mas2; } ;
typedef TYPE_1__ tlb_entry_t ;
struct tlbwrite_args {unsigned int idx; TYPE_1__* e; } ;
typedef int register_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int (*) (struct tlbwrite_args*),int ,struct tlbwrite_args*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct tlbwrite_args*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(tlb_entry_t *VAR_3, unsigned int VAR_4)
{
 struct tlbwrite_args VAR_5;

 VAR_5.e = VAR_3;
 VAR_5.idx = VAR_4;
 {
  register_t VAR_6;

  VAR_6 = FUNC_1();
  __asm __volatile("wrteei 0");
  FUNC_3(&VAR_5);
  __asm __volatile("wrtee %0" :: "r"(VAR_6));
 }
}
