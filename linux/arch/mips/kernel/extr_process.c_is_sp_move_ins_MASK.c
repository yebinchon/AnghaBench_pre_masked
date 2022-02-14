
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int simmediate; int rs; int rt; scalar_t__ opcode; } ;
struct TYPE_9__ {scalar_t__ opcode; int rt; int rs; } ;
struct TYPE_8__ {scalar_t__ opcode; int rt; int imm; } ;
struct TYPE_7__ {int simmediate; } ;
struct TYPE_6__ {scalar_t__ opcode; int simmediate; } ;
union mips_instruction {int word; TYPE_5__ i_format; TYPE_4__ mm_i_format; TYPE_3__ mm16_r5_format; TYPE_2__ mm_b0_format; TYPE_1__ mm16_r3_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline int FUNC_1(union mips_instruction *VAR_5, int *VAR_6)
{
 if (VAR_5->i_format.rs != 29 || VAR_5->i_format.rt != 29)
  return 0;

 if (VAR_5->i_format.opcode == VAR_0 ||
     VAR_5->i_format.opcode == VAR_1) {
  *VAR_6 = -VAR_5->i_format.simmediate;
  return 1;
 }

 return 0;
}
