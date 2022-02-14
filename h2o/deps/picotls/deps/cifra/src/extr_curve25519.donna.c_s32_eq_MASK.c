
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(s32 VAR_0, s32 VAR_1) {
  VAR_0 = ~(VAR_0 ^ VAR_1);
  VAR_0 &= VAR_0 << 16;
  VAR_0 &= VAR_0 << 8;
  VAR_0 &= VAR_0 << 4;
  VAR_0 &= VAR_0 << 2;
  VAR_0 &= VAR_0 << 1;
  return VAR_0 >> 31;
}
