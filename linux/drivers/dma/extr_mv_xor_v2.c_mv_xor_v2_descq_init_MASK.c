
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_v2_device {scalar_t__ dma_base; scalar_t__ glob_base; int hw_desq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mv_xor_v2_device *VAR_21)
{
 u32 VAR_22;


 FUNC_3(VAR_0,
        VAR_21->dma_base + VAR_8);


 FUNC_3(FUNC_0(VAR_21->hw_desq),
        VAR_21->dma_base + VAR_7);
 FUNC_3(FUNC_2(VAR_21->hw_desq),
        VAR_21->dma_base + VAR_6);
 VAR_22 = FUNC_1(VAR_21->dma_base + VAR_1);
 VAR_22 &= ~VAR_3;
 VAR_22 |= VAR_4 |
  VAR_2;
 FUNC_3(VAR_22, VAR_21->dma_base + VAR_1);

 VAR_22 = FUNC_1(VAR_21->dma_base + VAR_5);
 VAR_22 &= ~VAR_3;
 VAR_22 |= VAR_4 |
  VAR_2;
 FUNC_3(VAR_22, VAR_21->dma_base + VAR_5);
 VAR_22 = ((VAR_12 <<
  VAR_11) |
        (VAR_14 <<
  VAR_13) |
        (VAR_16 <<
  VAR_15) |
        (VAR_18 <<
  VAR_17));
 FUNC_3(VAR_22, VAR_21->glob_base + VAR_10);


 VAR_22 = FUNC_1(VAR_21->glob_base + VAR_19);
 VAR_22 |= VAR_20;
 FUNC_3(VAR_22, VAR_21->glob_base + VAR_19);


 FUNC_3(0, VAR_21->dma_base + VAR_9);

 return 0;
}
