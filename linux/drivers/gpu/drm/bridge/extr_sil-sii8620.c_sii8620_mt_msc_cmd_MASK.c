
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sii8620_mt_msg {int send; void** reg; } ;
struct sii8620 {int dummy; } ;


 int VAR_0 ;
 struct sii8620_mt_msg* FUNC_0 (struct sii8620*) ;

__attribute__((used)) static void FUNC_1(struct sii8620 *VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct sii8620_mt_msg *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5)
  return;

 VAR_5->reg[0] = VAR_2;
 VAR_5->reg[1] = VAR_3;
 VAR_5->reg[2] = VAR_4;
 VAR_5->send = VAR_0;
}
