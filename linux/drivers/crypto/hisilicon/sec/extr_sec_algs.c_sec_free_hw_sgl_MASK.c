
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_hw_sgl {int next_sgl; struct sec_hw_sgl* next; } ;
struct sec_dev_info {int hw_sgl_pool; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,struct sec_hw_sgl*,int ) ;

__attribute__((used)) static void FUNC_1(struct sec_hw_sgl *VAR_0,
       dma_addr_t VAR_1, struct sec_dev_info *VAR_2)
{
 struct sec_hw_sgl *VAR_3, *VAR_4;
 dma_addr_t VAR_5;

 VAR_3 = VAR_0;
 while (VAR_3) {
  VAR_4 = VAR_3->next;
  VAR_5 = VAR_3->next_sgl;

  FUNC_0(VAR_2->hw_sgl_pool, VAR_3, VAR_1);

  VAR_3 = VAR_4;
  VAR_1 = VAR_5;
 }
}
