
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_v2_device {int dummy; } ;
struct mv_xor_v2_descriptor {int* data_buff_addr; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mv_xor_v2_device *VAR_0,
     struct mv_xor_v2_descriptor *VAR_1,
     dma_addr_t VAR_2, int VAR_3)
{
 int VAR_4 = ((VAR_3 >> 1) * 3);
 if ((VAR_3 & 0x1) == 0) {
  VAR_1->data_buff_addr[VAR_4] = FUNC_0(VAR_2);

  VAR_1->data_buff_addr[VAR_4 + 2] &= ~0xFFFF;
  VAR_1->data_buff_addr[VAR_4 + 2] |=
   FUNC_1(VAR_2) & 0xFFFF;
 } else {
  VAR_1->data_buff_addr[VAR_4 + 1] =
   FUNC_0(VAR_2);

  VAR_1->data_buff_addr[VAR_4 + 2] &= ~0xFFFF0000;
  VAR_1->data_buff_addr[VAR_4 + 2] |=
   (FUNC_1(VAR_2) & 0xFFFF) << 16;
 }
}
