
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_i2c_cmd {int rxsize; int msecs; int count; scalar_t__ param2; scalar_t__ param1; int opcode; int word_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atmel_i2c_cmd*) ;

void FUNC_1(struct atmel_i2c_cmd *VAR_5)
{
 VAR_5->word_addr = VAR_0;
 VAR_5->opcode = VAR_2;
 VAR_5->param1 = 0;
 VAR_5->param2 = 0;
 VAR_5->count = VAR_3;

 FUNC_0(VAR_5);

 VAR_5->msecs = VAR_1;
 VAR_5->rxsize = VAR_4;
}
