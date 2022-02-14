
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qm_sg_entry {int offset; scalar_t__ bpid; scalar_t__ __reserved2; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qm_sg_entry*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct qm_sg_entry *VAR_1, dma_addr_t VAR_2,
      u16 VAR_3)
{
 FUNC_1(VAR_1, VAR_2);
 VAR_1->__reserved2 = 0;
 VAR_1->bpid = 0;
 VAR_1->offset = FUNC_0(VAR_3 & VAR_0);
}
