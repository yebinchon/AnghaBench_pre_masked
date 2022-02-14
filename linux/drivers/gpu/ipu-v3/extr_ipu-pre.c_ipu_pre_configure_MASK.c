
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef unsigned int u32 ;
struct ipu_pre {unsigned int safe_window_end; unsigned int last_bufaddr; unsigned int buffer_paddr; scalar_t__ regs; } ;
struct drm_format_info {int* cpp; } ;


 int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int VAR_12 ;
 unsigned int FUNC_6 (int) ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int VAR_16 ;
 unsigned int FUNC_8 (int) ;
 scalar_t__ VAR_17 ;
 unsigned int FUNC_9 (unsigned int) ;
 scalar_t__ VAR_18 ;
 unsigned int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 (unsigned int) ;
 scalar_t__ VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 struct drm_format_info* FUNC_12 (unsigned int) ;
 unsigned int FUNC_13 (scalar_t__) ;
 int FUNC_14 (unsigned int,scalar_t__) ;

void FUNC_15(struct ipu_pre *VAR_24, unsigned int VAR_25,
         unsigned int VAR_26, unsigned int VAR_27, u32 VAR_28,
         uint64_t VAR_29, unsigned int VAR_30)
{
 const struct drm_format_info *VAR_31 = FUNC_12(VAR_28);
 u32 VAR_32 = VAR_31->cpp[0] >> 1;
 u32 VAR_33;


 if (VAR_29 == VAR_0)
  VAR_24->safe_window_end = VAR_26 - 2;
 else
  VAR_24->safe_window_end = FUNC_0(VAR_26, 4) - 1;

 FUNC_14(VAR_30, VAR_24->regs + VAR_7);
 FUNC_14(VAR_30, VAR_24->regs + VAR_8);
 VAR_24->last_bufaddr = VAR_30;

 VAR_33 = FUNC_5(0) |
       FUNC_4(VAR_32) |
       FUNC_6(4) |
       VAR_13 |
       VAR_12;
 FUNC_14(VAR_33, VAR_24->regs + VAR_9);

 VAR_33 = FUNC_2(VAR_25) |
       FUNC_1(VAR_26);
 FUNC_14(VAR_33, VAR_24->regs + VAR_10);

 VAR_33 = FUNC_3(VAR_27);
 FUNC_14(VAR_33, VAR_24->regs + VAR_11);

 VAR_33 = FUNC_7(VAR_32) |
       FUNC_8(4) |
       VAR_16;
 FUNC_14(VAR_33, VAR_24->regs + VAR_15);

 VAR_33 = FUNC_11(VAR_25) |
       FUNC_10(VAR_26);
 FUNC_14(VAR_33, VAR_24->regs + VAR_18);

 VAR_33 = FUNC_9(VAR_27);
 FUNC_14(VAR_33, VAR_24->regs + VAR_17);

 FUNC_14(VAR_24->buffer_paddr, VAR_24->regs + VAR_14);

 VAR_33 = FUNC_13(VAR_24->regs + VAR_19);
 VAR_33 &= ~VAR_21;
 if (VAR_29 != VAR_0) {

  VAR_33 |= VAR_22;
  if (VAR_29 == VAR_1)
   VAR_33 |= VAR_23;
  if (VAR_31->cpp[0] == 2)
   VAR_33 |= VAR_20;
 }
 FUNC_14(VAR_33, VAR_24->regs + VAR_19);

 VAR_33 = FUNC_13(VAR_24->regs + VAR_2);
 VAR_33 |= VAR_5 | VAR_4 |
        VAR_6;
 if (VAR_29 == VAR_0)
  VAR_33 &= ~VAR_3;
 else
  VAR_33 |= VAR_3;
 FUNC_14(VAR_33, VAR_24->regs + VAR_2);
}
