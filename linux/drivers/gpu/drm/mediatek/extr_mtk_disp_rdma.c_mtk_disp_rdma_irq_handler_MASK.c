
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ddp_comp {scalar_t__ regs; } ;
struct mtk_disp_rdma {int crtc; struct mtk_ddp_comp ddp_comp; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mtk_ddp_comp*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct mtk_disp_rdma *VAR_5 = VAR_4;
 struct mtk_ddp_comp *VAR_6 = &VAR_5->ddp_comp;


 FUNC_1(0x0, VAR_6->regs + VAR_0);

 if (!VAR_5->crtc)
  return VAR_2;

 FUNC_0(VAR_5->crtc, VAR_6);

 return VAR_1;
}
