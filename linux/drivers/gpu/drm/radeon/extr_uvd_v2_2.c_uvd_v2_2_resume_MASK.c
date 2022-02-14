
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int gpu_addr; int max_handles; } ;
struct radeon_device {int family; TYPE_2__ uvd; TYPE_1__* uvd_fw; } ;
struct TYPE_3__ {scalar_t__ size; } ;
 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

int FUNC_4(struct radeon_device *VAR_14)
{
 uint64_t VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18;


 if (VAR_14->family == VAR_0)
  return FUNC_3(VAR_14);

 VAR_18 = FUNC_2(VAR_14);
 if (VAR_18)
  return VAR_18;


 VAR_15 = VAR_14->uvd.gpu_addr >> 3;
 VAR_17 = FUNC_0(VAR_14->uvd_fw->size + 4) >> 3;
 FUNC_1(VAR_7, VAR_15);
 FUNC_1(VAR_10, VAR_17);

 VAR_15 += VAR_17;
 VAR_17 = VAR_2 >> 3;
 FUNC_1(VAR_8, VAR_15);
 FUNC_1(VAR_11, VAR_17);

 VAR_15 += VAR_17;
 VAR_17 = (VAR_4 +
        (VAR_3 * VAR_14->uvd.max_handles)) >> 3;
 FUNC_1(VAR_9, VAR_15);
 FUNC_1(VAR_12, VAR_17);


 VAR_15 = (VAR_14->uvd.gpu_addr >> 28) & 0xF;
 FUNC_1(VAR_5, (VAR_15 << 12) | (VAR_15 << 0));


 VAR_15 = (VAR_14->uvd.gpu_addr >> 32) & 0xFF;
 FUNC_1(VAR_6, VAR_15 | (0x9 << 16) | (0x1 << 31));


 switch (VAR_14->family) {
 default:
  return -VAR_1;
 case 135:
  VAR_16 = 0x01000005;
  break;
 case 134:
  VAR_16 = 0x01000006;
  break;
 case 133:
  VAR_16 = 0x01000007;
  break;
 case 142:
 case 141:
  VAR_16 = 0x01000008;
  break;
 case 140:
  VAR_16 = 0x01000009;
  break;
 case 136:
  VAR_16 = 0x0100000a;
  break;
 case 143:
  VAR_16 = 0x0100000b;
  break;
 case 132:
 case 131:
  VAR_16 = 0x0100000c;
  break;
 case 138:
  VAR_16 = 0x0100000e;
  break;
 case 144:
  VAR_16 = 0x0100000f;
  break;
 case 146:
  VAR_16 = 0x01000010;
  break;
 case 129:
  VAR_16 = 0x01000011;
  break;
 case 145:
  VAR_16 = 0x01000012;
  break;
 case 130:
  VAR_16 = 0x01000014;
  break;
 case 128:
  VAR_16 = 0x01000015;
  break;
 case 137:
 case 139:
  VAR_16 = 0x01000016;
  break;
 case 147:
  VAR_16 = 0x01000017;
  break;
 }
 FUNC_1(VAR_13, VAR_16);

 return 0;
}
