
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef unsigned int uint16_t ;
struct TYPE_7__ {int chipset; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_6__ {unsigned int prim; unsigned int skip; unsigned int count; } ;
struct TYPE_8__ {TYPE_1__ idx; } ;
typedef TYPE_3__ drm_savage_cmd_header_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (int const*,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (char*,unsigned int,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_6(drm_savage_private_t * VAR_5,
      const drm_savage_cmd_header_t * VAR_6,
      const uint16_t *VAR_7,
      const uint32_t *VAR_8,
      unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned char VAR_11 = 0;
 unsigned int VAR_12 = VAR_6->idx.prim;
 unsigned int VAR_13 = VAR_6->idx.skip;
 unsigned int VAR_14 = VAR_6->idx.count;
 unsigned int VAR_15;
 unsigned int VAR_16;
 VAR_1;

 if (!VAR_14)
  return 0;

 switch (VAR_12) {
 case 129:
  VAR_11 = 1;
  VAR_12 = 130;

 case 130:
  if (VAR_14 % 3 != 0) {
   FUNC_4("wrong number of indices %u in TRILIST\n", VAR_14);
   return -VAR_2;
  }
  break;
 case 128:
 case 131:
  if (VAR_14 < 3) {
   FUNC_4
       ("wrong number of indices %u in TRIFAN/STRIP\n", VAR_14);
   return -VAR_2;
  }
  break;
 default:
  FUNC_4("invalid primitive type %u\n", VAR_12);
  return -VAR_2;
 }

 if (FUNC_5(VAR_5->chipset)) {
  if (VAR_13 > VAR_3) {
   FUNC_4("invalid skip flags 0x%04x\n", VAR_13);
   return -VAR_2;
  }
  VAR_15 = 8;
 } else {
  if (VAR_13 > VAR_4) {
   FUNC_4("invalid skip flags 0x%04x\n", VAR_13);
   return -VAR_2;
  }
  VAR_15 = 10;
 }

 VAR_15 -= (VAR_13 & 1) + (VAR_13 >> 1 & 1) +
     (VAR_13 >> 2 & 1) + (VAR_13 >> 3 & 1) + (VAR_13 >> 4 & 1) +
     (VAR_13 >> 5 & 1) + (VAR_13 >> 6 & 1) + (VAR_13 >> 7 & 1);

 if (VAR_15 > VAR_10) {
  FUNC_4("vertex size greater than vb stride (%u > %u)\n",
     VAR_15, VAR_10);
  return -VAR_2;
 }

 VAR_12 <<= 25;
 while (VAR_14 != 0) {

  unsigned int VAR_17 = VAR_14 > 255 ? 255 : VAR_14;


  for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {
   if (VAR_7[VAR_16] > VAR_9 / (VAR_10 * 4)) {
    FUNC_4("idx[%u]=%u out of range (0-%u)\n",
       VAR_16, VAR_7[VAR_16], VAR_9 / (VAR_10 * 4));
    return -VAR_2;
   }
  }

  if (VAR_11) {



   int VAR_18[3] = { 2, -1, -1 };

   FUNC_0(VAR_17 * VAR_15 + 1);
   FUNC_3(VAR_17, VAR_12, VAR_13);

   for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {
    unsigned int VAR_19 = VAR_7[VAR_16 + VAR_18[VAR_16 % 3]];
    FUNC_2(&VAR_8[VAR_10 * VAR_19], VAR_15);
   }

   FUNC_1();
  } else {
   FUNC_0(VAR_17 * VAR_15 + 1);
   FUNC_3(VAR_17, VAR_12, VAR_13);

   for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {
    unsigned int VAR_20 = VAR_7[VAR_16];
    FUNC_2(&VAR_8[VAR_10 * VAR_20], VAR_15);
   }

   FUNC_1();
  }

  VAR_7 += VAR_17;
  VAR_14 -= VAR_17;

  VAR_12 |= VAR_0;
 }

 return 0;
}
