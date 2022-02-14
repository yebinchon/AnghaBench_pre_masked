
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_rdma {int dummy; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_disp_rdma*) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 struct mtk_disp_rdma* FUNC_3 (struct mtk_ddp_comp*) ;
 int FUNC_4 (struct mtk_ddp_comp*,int ,int,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mtk_ddp_comp *VAR_4, unsigned int VAR_5,
       unsigned int VAR_6, unsigned int VAR_7,
       unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;
 struct mtk_disp_rdma *VAR_11 = FUNC_3(VAR_4);

 FUNC_4(VAR_4, VAR_1, 0xfff, VAR_5);
 FUNC_4(VAR_4, VAR_2, 0xfffff, VAR_6);







 VAR_9 = VAR_5 * VAR_6 * VAR_7 * 4 * 7 / 1000000;
 VAR_10 = VAR_3 |
       FUNC_0(FUNC_1(VAR_11)) |
       FUNC_2(VAR_9);
 FUNC_5(VAR_10, VAR_4->regs + VAR_0);
}
