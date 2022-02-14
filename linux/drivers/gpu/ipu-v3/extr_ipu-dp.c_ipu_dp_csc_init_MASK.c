
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_flow {scalar_t__ base; } ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ipu_flow *VAR_10,
  enum ipu_color_space VAR_11,
  enum ipu_color_space VAR_12,
  u32 VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_10->base + VAR_0);
 VAR_14 &= ~VAR_1;

 if (VAR_11 == VAR_12) {
  FUNC_1(VAR_14, VAR_10->base + VAR_0);
  return;
 }

 if (VAR_11 == VAR_8 && VAR_12 == VAR_9) {
  FUNC_1(0x099 | (0x12d << 16), VAR_10->base + VAR_4);
  FUNC_1(0x03a | (0x3a9 << 16), VAR_10->base + VAR_5);
  FUNC_1(0x356 | (0x100 << 16), VAR_10->base + VAR_6);
  FUNC_1(0x100 | (0x329 << 16), VAR_10->base + VAR_7);
  FUNC_1(0x3d6 | (0x0000 << 16) | (2 << 30),
    VAR_10->base + VAR_2);
  FUNC_1(0x200 | (2 << 14) | (0x200 << 16) | (2 << 30),
    VAR_10->base + VAR_3);
 } else {
  FUNC_1(0x095 | (0x000 << 16), VAR_10->base + VAR_4);
  FUNC_1(0x0cc | (0x095 << 16), VAR_10->base + VAR_5);
  FUNC_1(0x3ce | (0x398 << 16), VAR_10->base + VAR_6);
  FUNC_1(0x095 | (0x0ff << 16), VAR_10->base + VAR_7);
  FUNC_1(0x000 | (0x3e42 << 16) | (1 << 30),
    VAR_10->base + VAR_2);
  FUNC_1(0x10a | (1 << 14) | (0x3dd6 << 16) | (1 << 30),
    VAR_10->base + VAR_3);
 }

 VAR_14 |= VAR_13;

 FUNC_1(VAR_14, VAR_10->base + VAR_0);
}
