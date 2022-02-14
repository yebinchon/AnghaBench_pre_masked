
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimd_context {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct fimd_context*,int ,int ,int) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct fimd_context *VAR_7, unsigned int VAR_8,
    unsigned int VAR_9, unsigned int VAR_10)
{
 u32 VAR_11 = (VAR_9 >> 8) & 0xf;
 u32 VAR_12 = VAR_9 >> 12;
 u32 VAR_13 = 0;

 switch (VAR_10) {
 case 129:
  break;
 case 130:
 case 128:
 default:
  VAR_13 |= VAR_4;
  VAR_13 |= VAR_5;
  VAR_13 |= VAR_3;
  break;
 }
 FUNC_13(VAR_7, FUNC_12(VAR_8), VAR_6, VAR_13);


 VAR_13 = FUNC_2(VAR_12) |
  FUNC_1(VAR_12) |
  FUNC_0(VAR_12) |
  FUNC_5(0x0) |
  FUNC_4(0x0) |
  FUNC_3(0x0);
 FUNC_14(VAR_13, VAR_7->regs + FUNC_6(VAR_8));

 VAR_13 = FUNC_9(VAR_11) | FUNC_8(VAR_11) |
  FUNC_7(VAR_11);
 FUNC_14(VAR_13, VAR_7->regs + FUNC_10(VAR_8));

 VAR_13 = FUNC_9(0x0) | FUNC_8(0x0) |
  FUNC_7(0x0);
 FUNC_14(VAR_13, VAR_7->regs + FUNC_11(VAR_8));

 FUNC_13(VAR_7, VAR_0, VAR_2,
   VAR_1);
}
