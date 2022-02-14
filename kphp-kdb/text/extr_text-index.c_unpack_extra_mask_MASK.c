
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (int VAR_0) {
  int VAR_1 = VAR_0 & 0xff;
  VAR_1 += 3*(VAR_0 & 0x100);
  VAR_1 += 6*(VAR_0 & 0x200);
  VAR_1 += 12*(VAR_0 & 0x400);
  VAR_1 += 24*(VAR_0 & 0x800);
  return VAR_1;
}
