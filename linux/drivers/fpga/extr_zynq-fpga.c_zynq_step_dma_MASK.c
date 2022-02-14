
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_fpga_priv {scalar_t__ dma_elm; scalar_t__ dma_nelms; int * cur_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (struct zynq_fpga_priv*,int ) ;
 int FUNC_4 (struct zynq_fpga_priv*,int) ;
 int FUNC_5 (struct zynq_fpga_priv*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct zynq_fpga_priv *VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 bool VAR_14;

 VAR_14 = VAR_11->dma_elm == 0;
 while (VAR_11->cur_sg) {

  if (FUNC_3(VAR_11, VAR_10) & VAR_9)
   break;

  VAR_12 = FUNC_0(VAR_11->cur_sg);
  VAR_13 = FUNC_1(VAR_11->cur_sg);
  if (VAR_11->dma_elm + 1 == VAR_11->dma_nelms) {





   VAR_12 |= VAR_4;
   VAR_11->cur_sg = ((void*)0);
  } else {
   VAR_11->cur_sg = FUNC_2(VAR_11->cur_sg);
   VAR_11->dma_elm++;
  }

  FUNC_5(VAR_11, VAR_3, VAR_12);
  FUNC_5(VAR_11, VAR_1, VAR_2);
  FUNC_5(VAR_11, VAR_5, VAR_13 / 4);
  FUNC_5(VAR_11, VAR_0, 0);
 }







 if (VAR_14 && VAR_11->cur_sg) {
  FUNC_4(VAR_11,
      VAR_6 | VAR_8);
 } else if (!VAR_11->cur_sg) {




  FUNC_4(VAR_11,
      VAR_7 | VAR_8);
 }
}
