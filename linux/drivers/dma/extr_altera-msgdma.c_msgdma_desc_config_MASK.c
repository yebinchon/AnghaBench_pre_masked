
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msgdma_extended_desc {size_t len; int control; scalar_t__ burst_seq_num; int stride; void* write_addr_hi; void* read_addr_hi; void* write_addr_lo; void* read_addr_lo; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct msgdma_extended_desc *VAR_3,
          dma_addr_t VAR_4, dma_addr_t VAR_5, size_t VAR_6,
          u32 VAR_7)
{

 VAR_3->read_addr_lo = FUNC_0(VAR_5);
 VAR_3->write_addr_lo = FUNC_0(VAR_4);


 VAR_3->read_addr_hi = FUNC_1(VAR_5);
 VAR_3->write_addr_hi = FUNC_1(VAR_4);

 VAR_3->len = VAR_6;
 VAR_3->stride = VAR_7;
 VAR_3->burst_seq_num = 0;





 VAR_3->control = VAR_2 | VAR_1 |
  VAR_0;
}
