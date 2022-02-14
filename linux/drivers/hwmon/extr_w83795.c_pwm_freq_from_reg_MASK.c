
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(u8 VAR_1, u16 VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1 & 0x80) {
  VAR_3 = VAR_2 * 1000 / ((VAR_2 == 48000) ? 384 : 256);
  return VAR_3 / ((VAR_1 & 0x7f) + 1);
 } else
  return VAR_0[VAR_1 & 0x0f];
}
