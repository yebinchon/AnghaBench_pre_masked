
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct atmel_i2c_cmd {int rxsize; int msecs; int data; int param2; int param1; int opcode; int count; int word_addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct atmel_i2c_cmd*) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (struct scatterlist*,int ,int ,size_t) ;
 int FUNC_3 (struct scatterlist*,size_t) ;

int FUNC_4(struct atmel_i2c_cmd *VAR_9,
       struct scatterlist *VAR_10)
{
 size_t VAR_11;

 VAR_9->word_addr = VAR_1;
 VAR_9->count = VAR_3;
 VAR_9->opcode = VAR_8;
 VAR_9->param1 = VAR_4;

 VAR_9->param2 = FUNC_1(VAR_2);






 VAR_11 = FUNC_2(VAR_10,
       FUNC_3(VAR_10,
          VAR_0),
       VAR_9->data, VAR_0);
 if (VAR_11 != VAR_0)
  return -VAR_6;

 FUNC_0(VAR_9);

 VAR_9->msecs = VAR_7;
 VAR_9->rxsize = VAR_5;

 return 0;
}
