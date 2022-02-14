
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct avc_response_frame {scalar_t__ opcode; scalar_t__* operand; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(struct avc_response_frame *VAR_5)
{
 return VAR_5->opcode == VAR_0 &&
        VAR_5->operand[0] == VAR_1 &&
        VAR_5->operand[1] == VAR_2 &&
        VAR_5->operand[2] == VAR_3 &&
        VAR_5->operand[3] == VAR_4;
}
