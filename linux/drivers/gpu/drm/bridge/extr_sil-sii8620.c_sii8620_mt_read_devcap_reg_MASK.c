
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620_mt_msg {int* reg; int recv; int send; } ;
struct sii8620 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sii8620_mt_msg* FUNC_0 (struct sii8620*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct sii8620 *VAR_4, u8 VAR_5)
{
 struct sii8620_mt_msg *VAR_6 = FUNC_0(VAR_4);

 if (!VAR_6)
  return;

 VAR_6->reg[0] = (VAR_5 & 0x80) ? VAR_1 : VAR_0;
 VAR_6->reg[1] = VAR_5;
 VAR_6->send = VAR_2;
 VAR_6->recv = VAR_3;
}
