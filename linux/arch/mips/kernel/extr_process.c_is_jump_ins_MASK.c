
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ opcode; scalar_t__ func; } ;
struct TYPE_7__ {scalar_t__ opcode; } ;
struct TYPE_6__ {int uimmediate; } ;
struct TYPE_5__ {scalar_t__ opcode; int rt; } ;
union mips_instruction {int word; TYPE_4__ r_format; TYPE_3__ j_format; TYPE_2__ u_format; TYPE_1__ mm16_r5_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static inline int FUNC_1(union mips_instruction *VAR_12)
{
 if (VAR_12->j_format.opcode == VAR_0)
  return 1;
 if (VAR_12->j_format.opcode == VAR_1)
  return 1;
 if (VAR_12->r_format.opcode != VAR_11)
  return 0;
 return VAR_12->r_format.func == VAR_2 || VAR_12->r_format.func == VAR_3;

}
