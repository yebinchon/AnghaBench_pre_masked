
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hsf_load_header {int data_dma_base; int data_size; int non_sec_code_size; int non_sec_code_off; } ;
struct acr_r352_flcn_bl_desc {int data_size; void* data_dma_base; scalar_t__ code_entry_point; int sec_code_size; int sec_code_off; int non_sec_code_size; int non_sec_code_off; void* code_dma_base; int ctx_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct hsf_load_header const*,int ) ;
 int FUNC_1 (struct hsf_load_header const*,int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(const struct hsf_load_header *VAR_1, void *VAR_2,
        u64 VAR_3)
{
 struct acr_r352_flcn_bl_desc *VAR_4 = VAR_2;
 u64 VAR_5, VAR_6;

 VAR_5 = VAR_3 >> 8;
 VAR_6 = (VAR_3 + VAR_1->data_dma_base) >> 8;

 VAR_4->ctx_dma = VAR_0;
 VAR_4->code_dma_base = FUNC_2(VAR_5);
 VAR_4->non_sec_code_off = VAR_1->non_sec_code_off;
 VAR_4->non_sec_code_size = VAR_1->non_sec_code_size;
 VAR_4->sec_code_off = FUNC_0(VAR_1, 0);
 VAR_4->sec_code_size = FUNC_1(VAR_1, 0);
 VAR_4->code_entry_point = 0;
 VAR_4->data_dma_base = FUNC_2(VAR_6);
 VAR_4->data_size = VAR_1->data_size;
}
