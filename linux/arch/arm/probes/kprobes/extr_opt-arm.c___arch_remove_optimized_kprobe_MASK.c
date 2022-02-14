
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * insn; } ;
struct optimized_kprobe {TYPE_1__ optinsn; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(struct optimized_kprobe *VAR_0, int VAR_1)
{
 if (VAR_0->optinsn.insn) {
  FUNC_0(VAR_0->optinsn.insn, VAR_1);
  VAR_0->optinsn.insn = ((void*)0);
 }
}
