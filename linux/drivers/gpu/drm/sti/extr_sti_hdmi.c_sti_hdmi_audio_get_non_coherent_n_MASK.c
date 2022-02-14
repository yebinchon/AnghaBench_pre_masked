
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1;

 switch (VAR_0) {
 case 32000:
  VAR_1 = 4096;
  break;
 case 44100:
  VAR_1 = 6272;
  break;
 case 48000:
  VAR_1 = 6144;
  break;
 case 88200:
  VAR_1 = 6272 * 2;
  break;
 case 96000:
  VAR_1 = 6144 * 2;
  break;
 case 176400:
  VAR_1 = 6272 * 4;
  break;
 case 192000:
  VAR_1 = 6144 * 4;
  break;
 default:

  VAR_1 = (VAR_0 * 128) / 1000;
 }

 return VAR_1;
}
