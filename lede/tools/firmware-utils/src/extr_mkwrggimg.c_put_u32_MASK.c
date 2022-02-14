
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, uint32_t VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_0;

 if (VAR_2) {
  VAR_3[0] = (VAR_1 >> 24) & 0xff;
  VAR_3[1] = (VAR_1 >> 16) & 0xff;
  VAR_3[2] = (VAR_1 >> 8) & 0xff;
  VAR_3[3] = VAR_1 & 0xff;
 } else {
  VAR_3[3] = (VAR_1 >> 24) & 0xff;
  VAR_3[2] = (VAR_1 >> 16) & 0xff;
  VAR_3[1] = (VAR_1 >> 8) & 0xff;
  VAR_3[0] = VAR_1 & 0xff;
 }
}
