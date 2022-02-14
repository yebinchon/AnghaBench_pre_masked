
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct hisi_zip_sqe {void* dest_addr_h; void* dest_addr_l; void* source_addr_h; void* source_addr_l; void* dest_avail_out; int dw9; void* input_data_length; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_zip_sqe*,int ,int) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_zip_sqe *VAR_1, u8 VAR_2,
         dma_addr_t VAR_3, dma_addr_t VAR_4, u32 VAR_5,
         u32 VAR_6)
{
 FUNC_2(VAR_1, 0, sizeof(struct hisi_zip_sqe));

 VAR_1->input_data_length = VAR_5;
 VAR_1->dw9 = FUNC_0(VAR_0, VAR_2);
 VAR_1->dest_avail_out = VAR_6;
 VAR_1->source_addr_l = FUNC_1(VAR_3);
 VAR_1->source_addr_h = FUNC_3(VAR_3);
 VAR_1->dest_addr_l = FUNC_1(VAR_4);
 VAR_1->dest_addr_h = FUNC_3(VAR_4);
}
