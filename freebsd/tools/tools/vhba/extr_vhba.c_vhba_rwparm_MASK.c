
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
int
FUNC_0(uint8_t *VAR_0, uint64_t *VAR_1, uint32_t *VAR_2, uint64_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 uint64_t VAR_6;

 switch (VAR_0[0]) {
 case 129:
 case 133:
  VAR_5 = (((uint32_t)VAR_0[10]) << 24) |
   (((uint32_t)VAR_0[11]) << 16) |
   (((uint32_t)VAR_0[12]) << 8) |
   ((uint32_t)VAR_0[13]);

  VAR_6 = (((uint64_t)VAR_0[2]) << 56) |
   (((uint64_t)VAR_0[3]) << 48) |
   (((uint64_t)VAR_0[4]) << 40) |
   (((uint64_t)VAR_0[5]) << 32) |
   (((uint64_t)VAR_0[6]) << 24) |
   (((uint64_t)VAR_0[7]) << 16) |
   (((uint64_t)VAR_0[8]) << 8) |
   ((uint64_t)VAR_0[9]);
  break;
 case 130:
 case 134:
  VAR_5 = (((uint32_t)VAR_0[6]) << 16) |
   (((uint32_t)VAR_0[7]) << 8) |
   ((u_int32_t)VAR_0[8]);

  VAR_6 = (((uint32_t)VAR_0[2]) << 24) |
   (((uint32_t)VAR_0[3]) << 16) |
   (((uint32_t)VAR_0[4]) << 8) |
   ((uint32_t)VAR_0[5]);
  break;
 case 131:
 case 135:
  VAR_5 = (((uint32_t)VAR_0[7]) << 8) |
   ((u_int32_t)VAR_0[8]);

  VAR_6 = (((uint32_t)VAR_0[2]) << 24) |
   (((uint32_t)VAR_0[3]) << 16) |
   (((uint32_t)VAR_0[4]) << 8) |
   ((uint32_t)VAR_0[5]);
  break;
 case 128:
 case 132:
  VAR_5 = VAR_0[4];
  if (VAR_5 == 0) {
   VAR_5 = 256;
  }
  VAR_6 = (((uint32_t)VAR_0[1] & 0x1f) << 16) |
   (((uint32_t)VAR_0[2]) << 8) |
   ((uint32_t)VAR_0[3]);
  break;
 default:
  return (-1);
 }

 if (VAR_6 + VAR_5 > VAR_3) {
  return (-1);
 }
 *VAR_2 = VAR_5 << VAR_4;
 *VAR_1 = VAR_6 << VAR_4;
 return (0);
}
