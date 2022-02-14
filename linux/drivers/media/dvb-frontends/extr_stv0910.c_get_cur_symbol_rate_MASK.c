
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct stv {TYPE_1__* base; scalar_t__ regoff; int started; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_2__ {int mclk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct stv*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_7, u32 *VAR_8)
{
 int VAR_9 = 0;
 u8 VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u32 VAR_17;
 s32 VAR_18;

 *VAR_8 = 0;
 if (!VAR_7->started)
  return VAR_9;

 FUNC_0(VAR_7, VAR_3 + VAR_7->regoff, &VAR_13);
 FUNC_0(VAR_7, VAR_2 + VAR_7->regoff, &VAR_12);
 FUNC_0(VAR_7, VAR_1 + VAR_7->regoff, &VAR_11);
 FUNC_0(VAR_7, VAR_0 + VAR_7->regoff, &VAR_10);
 FUNC_0(VAR_7, VAR_6 + VAR_7->regoff, &VAR_16);
 FUNC_0(VAR_7, VAR_5 + VAR_7->regoff, &VAR_15);
 FUNC_0(VAR_7, VAR_4 + VAR_7->regoff, &VAR_14);

 VAR_17 = ((u32)VAR_13 << 24) | ((u32)VAR_12 << 16) |
  ((u32)VAR_11 << 8) | (u32)VAR_10;
 VAR_18 = ((u32)VAR_16 << 16) | ((u32)VAR_15 << 8) |
  (u32)VAR_14;

 if ((VAR_18 & (1 << 23)) != 0)
  VAR_18 |= 0xFF000000;

 VAR_17 = (u32)(((u64)VAR_17 * VAR_7->base->mclk) >> 32);
 VAR_18 = (s32)(((s64)VAR_17 * (s64)VAR_18) >> 29);

 *VAR_8 = VAR_17 + VAR_18;

 return 0;
}
