
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_csi {int lock; int clk_ipu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipu_csi*,int ) ;
 int FUNC_2 (struct ipu_csi*,int,int) ;
 int FUNC_3 (struct ipu_csi*,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct ipu_csi *VAR_8, bool VAR_9,
    u32 VAR_10, u32 VAR_11, u32 VAR_12,
    u32 VAR_13)
{
 unsigned long VAR_14;
 u32 VAR_15 = FUNC_0(VAR_8->clk_ipu);
 u32 VAR_16;

 FUNC_4(&VAR_8->lock, VAR_14);

 VAR_16 = FUNC_1(VAR_8, VAR_7);

 if (!VAR_9) {
  VAR_16 &= ~VAR_4;
  FUNC_3(VAR_8, VAR_16, VAR_7);
 } else {

  FUNC_2(VAR_8, VAR_13, VAR_15);

  VAR_16 &= ~(VAR_5 | VAR_2 |
     VAR_0);
  VAR_16 |= VAR_4;
  VAR_16 |= (VAR_10 << VAR_6) |
   (VAR_11 << VAR_3) |
   (VAR_12 << VAR_1);
  FUNC_3(VAR_8, VAR_16, VAR_7);
 }

 FUNC_5(&VAR_8->lock, VAR_14);
}
