
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* len16; scalar_t__* r1; int wrid; void* flags; void* opcode; } ;
union t4_wr {TYPE_1__ send; } ;
typedef void* u8 ;
typedef int u16 ;
typedef enum fw_wr_opcodes { ____Placeholder_fw_wr_opcodes } fw_wr_opcodes ;



__attribute__((used)) static inline void FUNC_0(union t4_wr *VAR_0, u16 VAR_1,
          enum fw_wr_opcodes VAR_2, u8 VAR_3, u8 VAR_4)
{
 VAR_0->send.opcode = (u8)VAR_2;
 VAR_0->send.flags = VAR_3;
 VAR_0->send.wrid = VAR_1;
 VAR_0->send.r1[0] = 0;
 VAR_0->send.r1[1] = 0;
 VAR_0->send.r1[2] = 0;
 VAR_0->send.len16 = VAR_4;
}
