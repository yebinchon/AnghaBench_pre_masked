
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int boostable; scalar_t__ insn; } ;
struct kprobe {int addr; TYPE_1__ ainsn; } ;
struct insn {int length; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct insn*,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(kprobe_opcode_t *VAR_2, struct kprobe *VAR_3,
     struct insn *VAR_4)
{
 int VAR_5 = VAR_4->length;

 if (FUNC_0(VAR_4, VAR_3->addr) &&
     VAR_0 - VAR_5 >= VAR_1) {




  FUNC_1(VAR_2 + VAR_5, VAR_3->ainsn.insn + VAR_5,
       VAR_3->addr + VAR_4->length);
  VAR_5 += VAR_1;
  VAR_3->ainsn.boostable = 1;
 } else {
  VAR_3->ainsn.boostable = 0;
 }

 return VAR_5;
}
