
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_plane_pending_state {unsigned int addr; int pitch; unsigned int format; } ;
struct mtk_plane_state {struct mtk_plane_pending_state pending; } ;
struct mtk_disp_rdma {int dummy; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct mtk_disp_rdma* FUNC_0 (struct mtk_ddp_comp*) ;
 unsigned int FUNC_1 (struct mtk_disp_rdma*,unsigned int) ;
 int FUNC_2 (struct mtk_ddp_comp*,int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mtk_ddp_comp *VAR_13, unsigned int VAR_14,
      struct mtk_plane_state *VAR_15)
{
 struct mtk_disp_rdma *VAR_16 = FUNC_0(VAR_13);
 struct mtk_plane_pending_state *VAR_17 = &VAR_15->pending;
 unsigned int VAR_18 = VAR_17->addr;
 unsigned int VAR_19 = VAR_17->pitch & 0xffff;
 unsigned int VAR_20 = VAR_17->format;
 unsigned int VAR_21;

 VAR_21 = FUNC_1(VAR_16, VAR_20);
 FUNC_4(VAR_21, VAR_13->regs + VAR_0);

 if (VAR_20 == VAR_6 || VAR_20 == VAR_7) {
  FUNC_2(VAR_13, VAR_5,
     VAR_8, VAR_8);
  FUNC_2(VAR_13, VAR_5,
     VAR_10,
     VAR_9);
 } else {
  FUNC_2(VAR_13, VAR_5,
     VAR_8, 0);
 }

 FUNC_4(VAR_18, VAR_13->regs + VAR_3);
 FUNC_4(VAR_19, VAR_13->regs + VAR_2);
 FUNC_3(VAR_11, VAR_13->regs + VAR_1);
 FUNC_2(VAR_13, VAR_4,
    VAR_12, VAR_12);
}
