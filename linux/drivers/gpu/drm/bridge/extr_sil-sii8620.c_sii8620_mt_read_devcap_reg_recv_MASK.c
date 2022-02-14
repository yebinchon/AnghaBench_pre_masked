
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sii8620_mt_msg {int* reg; int ret; } ;
struct sii8620 {int * devcap; int * xdevcap; } ;



__attribute__((used)) static void FUNC_0(struct sii8620 *VAR_0,
  struct sii8620_mt_msg *VAR_1)
{
 u8 VAR_2 = VAR_1->reg[1] & 0x7f;

 if (VAR_1->reg[1] & 0x80)
  VAR_0->xdevcap[VAR_2] = VAR_1->ret;
 else
  VAR_0->devcap[VAR_2] = VAR_1->ret;
}
