
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_i2c_cmd {int rxsize; int msecs; int count; int param2; int param1; int opcode; int word_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atmel_i2c_cmd*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct atmel_i2c_cmd *VAR_7)
{
 VAR_7->word_addr = VAR_0;
 VAR_7->opcode = VAR_4;




 VAR_7->param1 = VAR_1;
 VAR_7->param2 = FUNC_1(VAR_2);
 VAR_7->count = VAR_5;

 FUNC_0(VAR_7);

 VAR_7->msecs = VAR_3;
 VAR_7->rxsize = VAR_6;
}
