
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwarp_ctrl {int ddp_rdmap_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct iwarp_ctrl *VAR_1, u8 VAR_2)
{
 VAR_1->ddp_rdmap_ctrl = (VAR_1->ddp_rdmap_ctrl & ~VAR_0) |
          (FUNC_0(VAR_2 << 6) & VAR_0);
}
