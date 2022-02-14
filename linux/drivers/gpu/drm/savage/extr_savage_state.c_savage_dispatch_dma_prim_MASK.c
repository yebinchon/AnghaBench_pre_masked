
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_buf {int total; unsigned int bus_address; } ;
struct TYPE_9__ {unsigned int vbaddr; } ;
struct TYPE_10__ {TYPE_2__ common; } ;
struct TYPE_11__ {unsigned int dma_type; int chipset; scalar_t__ waiting; TYPE_3__ state; } ;
typedef TYPE_4__ drm_savage_private_t ;
struct TYPE_8__ {unsigned int prim; unsigned int skip; unsigned int count; unsigned int start; } ;
struct TYPE_12__ {TYPE_1__ prim; } ;
typedef TYPE_5__ drm_savage_cmd_header_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;




 unsigned int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(drm_savage_private_t * VAR_6,
        const drm_savage_cmd_header_t * VAR_7,
        const struct drm_buf * VAR_8)
{
 unsigned char VAR_9 = 0;
 unsigned int VAR_10 = VAR_7->prim.prim;
 unsigned int VAR_11 = VAR_7->prim.skip;
 unsigned int VAR_12 = VAR_7->prim.count;
 unsigned int VAR_13 = VAR_7->prim.start;
 unsigned int VAR_14;
 VAR_2;

 if (!VAR_8) {
  FUNC_6("called without dma buffers!\n");
  return -VAR_3;
 }

 if (!VAR_12)
  return 0;

 switch (VAR_10) {
 case 129:
  VAR_9 = 1;
  VAR_10 = 130;

 case 130:
  if (VAR_12 % 3 != 0) {
   FUNC_6("wrong number of vertices %u in TRILIST\n",
      VAR_12);
   return -VAR_3;
  }
  break;
 case 128:
 case 131:
  if (VAR_12 < 3) {
   FUNC_6
       ("wrong number of vertices %u in TRIFAN/STRIP\n",
        VAR_12);
   return -VAR_3;
  }
  break;
 default:
  FUNC_6("invalid primitive type %u\n", VAR_10);
  return -VAR_3;
 }

 if (FUNC_7(VAR_6->chipset)) {
  if (VAR_11 != 0) {
   FUNC_6("invalid skip flags 0x%04x for DMA\n", VAR_11);
   return -VAR_3;
  }
 } else {
  unsigned int VAR_15 = 10 - (VAR_11 & 1) - (VAR_11 >> 1 & 1) -
      (VAR_11 >> 2 & 1) - (VAR_11 >> 3 & 1) - (VAR_11 >> 4 & 1) -
      (VAR_11 >> 5 & 1) - (VAR_11 >> 6 & 1) - (VAR_11 >> 7 & 1);
  if (VAR_11 > VAR_4 || VAR_15 != 8) {
   FUNC_6("invalid skip flags 0x%04x for DMA\n", VAR_11);
   return -VAR_3;
  }
  if (VAR_9) {
   FUNC_6("TRILIST_201 used on Savage4 hardware\n");
   return -VAR_3;
  }
 }

 if (VAR_13 + VAR_12 > VAR_8->total / 32) {
  FUNC_6("vertex indices (%u-%u) out of range (0-%u)\n",
     VAR_13, VAR_13 + VAR_12 - 1, VAR_8->total / 32);
  return -VAR_3;
 }




 FUNC_5();

 if (VAR_8->bus_address != VAR_6->state.common.vbaddr) {
  FUNC_4(2);
  FUNC_2(VAR_5, 1);
  FUNC_3(VAR_8->bus_address | VAR_6->dma_type);
  VAR_6->state.common.vbaddr = VAR_8->bus_address;
 }
 if (FUNC_7(VAR_6->chipset) && VAR_6->waiting) {





  FUNC_4(63);
  for (VAR_14 = 0; VAR_14 < 63; ++VAR_14)
   FUNC_3(VAR_1);
  VAR_6->waiting = 0;
 }

 VAR_10 <<= 25;
 while (VAR_12 != 0) {

  unsigned int VAR_16 = VAR_12 > 255 ? 255 : VAR_12;
  if (VAR_9) {



   int VAR_17[3] = { -1, -1, -1 };
   VAR_17[VAR_13 % 3] = 2;

   FUNC_4((VAR_16 + 1 + 1) / 2);
   FUNC_0(VAR_16, VAR_10, VAR_13 + 2);

   for (VAR_14 = VAR_13 + 1; VAR_14 + 1 < VAR_13 + VAR_16; VAR_14 += 2)
    FUNC_3((VAR_14 + VAR_17[VAR_14 % 3]) |
       ((VAR_14 + 1 +
         VAR_17[(VAR_14 + 1) % 3]) << 16));
   if (VAR_14 < VAR_13 + VAR_16)
    FUNC_3(VAR_14 + VAR_17[VAR_14 % 3]);
  } else if (FUNC_7(VAR_6->chipset)) {
   FUNC_4((VAR_16 + 1 + 1) / 2);
   FUNC_0(VAR_16, VAR_10, VAR_13);

   for (VAR_14 = VAR_13 + 1; VAR_14 + 1 < VAR_13 + VAR_16; VAR_14 += 2)
    FUNC_3(VAR_14 | ((VAR_14 + 1) << 16));
   if (VAR_14 < VAR_13 + VAR_16)
    FUNC_3(VAR_14);
  } else {
   FUNC_4((VAR_16 + 2 + 1) / 2);
   FUNC_1(VAR_16, VAR_10, VAR_11);

   for (VAR_14 = VAR_13; VAR_14 + 1 < VAR_13 + VAR_16; VAR_14 += 2)
    FUNC_3(VAR_14 | ((VAR_14 + 1) << 16));
   if (VAR_14 < VAR_13 + VAR_16)
    FUNC_3(VAR_14);
  }

  VAR_13 += VAR_16;
  VAR_12 -= VAR_16;

  VAR_10 |= VAR_0;
 }

 return 0;
}
