
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_insn_args {int arm_kprobe; struct kprobe* p; } ;
struct kprobe {int dummy; } ;


 int FUNC_0 (int ,struct swap_insn_args*,int *) ;
 int VAR_0 ;

void FUNC_1(struct kprobe *VAR_1)
{
 struct swap_insn_args VAR_2 = {.p = VAR_1, .arm_kprobe = 0};

 FUNC_0(VAR_0, &VAR_2, ((void*)0));
}
