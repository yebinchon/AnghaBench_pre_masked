
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atmel_i2c_cmd {int rxsize; int msecs; int param2; int param1; int opcode; int count; int word_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atmel_i2c_cmd*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct atmel_i2c_cmd *VAR_6, u16 VAR_7)
{
 VAR_6->word_addr = VAR_0;
 VAR_6->count = VAR_1;
 VAR_6->opcode = VAR_5;
 VAR_6->param1 = VAR_2;

 VAR_6->param2 = FUNC_1(VAR_7);

 FUNC_0(VAR_6);

 VAR_6->msecs = VAR_4;
 VAR_6->rxsize = VAR_3;
}
