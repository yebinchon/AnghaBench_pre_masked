
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

int FUNC_0(u32 VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 bool VAR_6 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return -VAR_0;


 VAR_5 = 100;







 switch (VAR_2) {
 case 32000:
 case 48000:
 case 96000:
 case 192000:
  if (VAR_5 == 125)
   if (VAR_1 == 27027000 || VAR_1 == 74250000)
    VAR_6 = 1;
  if (VAR_5 == 150)
   if (VAR_1 == 27027000)
    VAR_6 = 1;
  break;
 case 44100:
 case 88200:
 case 176400:
  if (VAR_5 == 125)
   if (VAR_1 == 27027000)
    VAR_6 = 1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6) {
  switch (VAR_2) {
  case 32000:
   *VAR_3 = 8192;
   break;
  case 44100:
   *VAR_3 = 12544;
   break;
  case 48000:
   *VAR_3 = 8192;
   break;
  case 88200:
   *VAR_3 = 25088;
   break;
  case 96000:
   *VAR_3 = 16384;
   break;
  case 176400:
   *VAR_3 = 50176;
   break;
  case 192000:
   *VAR_3 = 32768;
   break;
  default:
   return -VAR_0;
  }
 } else {
  switch (VAR_2) {
  case 32000:
   *VAR_3 = 4096;
   break;
  case 44100:
   *VAR_3 = 6272;
   break;
  case 48000:
   *VAR_3 = 6144;
   break;
  case 88200:
   *VAR_3 = 12544;
   break;
  case 96000:
   *VAR_3 = 12288;
   break;
  case 176400:
   *VAR_3 = 25088;
   break;
  case 192000:
   *VAR_3 = 24576;
   break;
  default:
   return -VAR_0;
  }
 }

 *VAR_4 = (VAR_1/1000) * (*VAR_3 / 128) * VAR_5 / (VAR_2 / 10);

 return 0;
}
