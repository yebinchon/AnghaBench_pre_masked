
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qm_sg_entry {int cfg; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qm_sg_entry*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct qm_sg_entry *VAR_3,
          dma_addr_t VAR_4, u32 VAR_5,
          u16 VAR_6)
{
 FUNC_0(VAR_3, VAR_4, VAR_6);
 VAR_3->cfg = FUNC_1(VAR_0 | VAR_1 |
         (VAR_5 & VAR_2));
}
