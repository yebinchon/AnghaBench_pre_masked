
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned int VAR_0, unsigned char *VAR_1)
{

 if ((VAR_0 == 1) && VAR_1[0] & 0x80) {
  VAR_1[1] = 0xff;
  VAR_1[2] = 0xff;
  VAR_1[3] = 0xff;
 }
 if ((VAR_0 == 2) && VAR_1[1] & 0x80) {
  VAR_1[2] = 0xff;
  VAR_1[3] = 0xff;
 }
}
