
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_2__ {unsigned int decode_image_width; int use_ctx_buf; } ;
struct amdgpu_device {TYPE_1__ uvd; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1, uint32_t *VAR_2,
 unsigned VAR_3[])
{
 unsigned VAR_4 = VAR_2[4];
 unsigned VAR_5 = VAR_2[6];
 unsigned VAR_6 = VAR_2[7];
 unsigned VAR_7 = VAR_2[9];
 unsigned VAR_8 = VAR_2[28];
 unsigned VAR_9 = VAR_2[57];

 unsigned VAR_10 = VAR_5 / 16;
 unsigned VAR_11 = FUNC_0(VAR_6 / 16, 2);
 unsigned VAR_12 = VAR_10 * VAR_11;

 unsigned VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned VAR_17 = ~0;

 VAR_13 = VAR_5 * VAR_6;
 VAR_13 += VAR_13 / 2;
 VAR_13 = FUNC_0(VAR_13, 1024);

 switch (VAR_4) {
 case 0:
  switch(VAR_9) {
  case 30:
   VAR_16 = 8100 / VAR_12;
   break;
  case 31:
   VAR_16 = 18000 / VAR_12;
   break;
  case 32:
   VAR_16 = 20480 / VAR_12;
   break;
  case 41:
   VAR_16 = 32768 / VAR_12;
   break;
  case 42:
   VAR_16 = 34816 / VAR_12;
   break;
  case 50:
   VAR_16 = 110400 / VAR_12;
   break;
  case 51:
   VAR_16 = 184320 / VAR_12;
   break;
  default:
   VAR_16 = 184320 / VAR_12;
   break;
  }
  VAR_16++;
  if (VAR_16 > 17)
   VAR_16 = 17;


  VAR_15 = VAR_13 * VAR_16;


  VAR_15 += VAR_10 * VAR_11 * VAR_16 * 192;


  VAR_15 += VAR_10 * VAR_11 * 32;
  break;

 case 1:


  VAR_15 = VAR_13 * 3;


  VAR_15 += VAR_10 * VAR_11 * 128;


  VAR_15 += VAR_10 * 64;


  VAR_15 += VAR_10 * 128;


  VAR_14 = FUNC_3(VAR_10, VAR_11);
  VAR_15 += FUNC_0(VAR_14 * 7 * 16, 64);
  break;

 case 3:


  VAR_15 = VAR_13 * 3;
  break;

 case 4:


  VAR_15 = VAR_13 * 3;


  VAR_15 += VAR_10 * VAR_11 * 64;


  VAR_15 += FUNC_0(VAR_10 * VAR_11 * 32, 64);
  break;

 case 7:
  switch(VAR_9) {
  case 30:
   VAR_16 = 8100 / VAR_12;
   break;
  case 31:
   VAR_16 = 18000 / VAR_12;
   break;
  case 32:
   VAR_16 = 20480 / VAR_12;
   break;
  case 41:
   VAR_16 = 32768 / VAR_12;
   break;
  case 42:
   VAR_16 = 34816 / VAR_12;
   break;
  case 50:
   VAR_16 = 110400 / VAR_12;
   break;
  case 51:
   VAR_16 = 184320 / VAR_12;
   break;
  default:
   VAR_16 = 184320 / VAR_12;
   break;
  }
  VAR_16++;
  if (VAR_16 > 17)
   VAR_16 = 17;


  VAR_15 = VAR_13 * VAR_16;

  if (!VAR_1->uvd.use_ctx_buf){

   VAR_15 +=
    VAR_10 * VAR_11 * VAR_16 * 192;


   VAR_15 += VAR_10 * VAR_11 * 32;
  } else {

   VAR_17 =
    VAR_10 * VAR_11 * VAR_16 * 192;
  }
  break;

 case 8:
  VAR_15 = 0;
  break;

 case 16:
  VAR_13 = (FUNC_0(VAR_5, 16) * FUNC_0(VAR_6, 16) * 3) / 2;
  VAR_13 = FUNC_0(VAR_13, 256);

  VAR_16 = (FUNC_2(VAR_2[59]) & 0xff) + 2;
  VAR_15 = VAR_13 * VAR_16;
  VAR_17 = ((VAR_5 + 255) / 16) * ((VAR_6 + 255) / 16)
        * 16 * VAR_16 + 52 * 1024;
  break;

 default:
  FUNC_1("UVD codec not handled %d!\n", VAR_4);
  return -VAR_0;
 }

 if (VAR_5 > VAR_8) {
  FUNC_1("Invalid UVD decoding target pitch!\n");
  return -VAR_0;
 }

 if (VAR_7 < VAR_15) {
  FUNC_1("Invalid dpb_size in UVD message (%d / %d)!\n",
     VAR_7, VAR_15);
  return -VAR_0;
 }

 VAR_3[0x1] = VAR_7;
 VAR_3[0x2] = VAR_13;
 VAR_3[0x4] = VAR_17;

 VAR_1->uvd.decode_image_width = VAR_5;
 return 0;
}
