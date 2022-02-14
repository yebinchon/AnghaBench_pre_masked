
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * insn; } ;
struct kprobe {TYPE_1__ ainsn; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct kprobe*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;

int FUNC_5(struct kprobe *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_3->addr, VAR_3->addr))
  return -VAR_1;

 if (!FUNC_2((unsigned long)VAR_3->addr))
  return -VAR_0;

 VAR_3->ainsn.insn = FUNC_4();
 if (!VAR_3->ainsn.insn)
  return -VAR_2;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_3->ainsn.insn, 0);
  VAR_3->ainsn.insn = ((void*)0);
 }

 return VAR_4;
}
