
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int insn; int copied_insn; } ;
struct TYPE_3__ {int addr; } ;
struct optimized_kprobe {TYPE_2__ optinsn; TYPE_1__ kp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int *,int,int ) ;

void FUNC_2(struct optimized_kprobe *VAR_3)
{
 u8 VAR_4[VAR_1];


 VAR_4[0] = VAR_0;
 FUNC_0(VAR_4 + 1, VAR_3->optinsn.copied_insn, VAR_2);
 FUNC_1(VAR_3->kp.addr, VAR_4, VAR_1,
       VAR_3->optinsn.insn);
}
