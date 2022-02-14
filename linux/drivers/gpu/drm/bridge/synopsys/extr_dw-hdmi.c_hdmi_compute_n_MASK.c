
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2 = (128 * VAR_0) / 1000;
 unsigned int VAR_3 = 1;

 while (VAR_0 > 48000) {
  VAR_3 *= 2;
  VAR_0 /= 2;
 }

 switch (VAR_0) {
 case 32000:
  if (VAR_1 == 25175000)
   VAR_2 = 4576;
  else if (VAR_1 == 27027000)
   VAR_2 = 4096;
  else if (VAR_1 == 74176000 || VAR_1 == 148352000)
   VAR_2 = 11648;
  else
   VAR_2 = 4096;
  VAR_2 *= VAR_3;
  break;

 case 44100:
  if (VAR_1 == 25175000)
   VAR_2 = 7007;
  else if (VAR_1 == 74176000)
   VAR_2 = 17836;
  else if (VAR_1 == 148352000)
   VAR_2 = 8918;
  else
   VAR_2 = 6272;
  VAR_2 *= VAR_3;
  break;

 case 48000:
  if (VAR_1 == 25175000)
   VAR_2 = 6864;
  else if (VAR_1 == 27027000)
   VAR_2 = 6144;
  else if (VAR_1 == 74176000)
   VAR_2 = 11648;
  else if (VAR_1 == 148352000)
   VAR_2 = 5824;
  else
   VAR_2 = 6144;
  VAR_2 *= VAR_3;
  break;

 default:
  break;
 }

 return VAR_2;
}
