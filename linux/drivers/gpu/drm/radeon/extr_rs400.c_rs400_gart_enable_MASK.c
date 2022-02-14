
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int ready; scalar_t__ table_addr; } ;
struct TYPE_3__ {int gtt_size; int gtt_end; int gtt_start; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ gart; TYPE_1__ mc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned long long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(struct radeon_device *VAR_36)
{
 uint32_t VAR_37;
 uint32_t VAR_38;

 VAR_38 = FUNC_3(VAR_28);
 VAR_38 |= VAR_30;
 FUNC_5(VAR_28, VAR_38);

 switch(VAR_36->mc.gtt_size / (1024 * 1024)) {
 case 32:
  VAR_37 = VAR_24;
  break;
 case 64:
  VAR_37 = VAR_26;
  break;
 case 128:
  VAR_37 = VAR_20;
  break;
 case 256:
  VAR_37 = VAR_22;
  break;
 case 512:
  VAR_37 = VAR_25;
  break;
 case 1024:
  VAR_37 = VAR_21;
  break;
 case 2048:
  VAR_37 = VAR_23;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_36->family == VAR_0 || (VAR_36->family == VAR_1)) {
  FUNC_5(VAR_31, 0xFFFFFFFF);
  FUNC_5(VAR_32, 0);
 } else {
  FUNC_4(VAR_3, 0xFFFFFFFF);
  FUNC_4(VAR_9, 0);
 }
 VAR_38 = FUNC_1(VAR_35, VAR_36->mc.gtt_end >> 16);
 VAR_38 |= FUNC_1(VAR_34, VAR_36->mc.gtt_start >> 16);
 if ((VAR_36->family == VAR_0) || (VAR_36->family == VAR_1)) {
  FUNC_5(VAR_33, VAR_38);
  VAR_38 = FUNC_2(VAR_4) & ~VAR_27;
  FUNC_4(VAR_4, VAR_38);
 } else {
  FUNC_4(VAR_6, VAR_38);
  VAR_38 = FUNC_2(VAR_4) & ~VAR_5;
  FUNC_4(VAR_4, VAR_38);
 }

 VAR_38 = (u32)VAR_36->gart.table_addr & 0xfffff000;
 VAR_38 |= (FUNC_7(VAR_36->gart.table_addr) & 0xff) << 4;

 FUNC_5(VAR_11, VAR_38);

 FUNC_5(VAR_13,
    (VAR_19 |
     VAR_15 | VAR_7));

 FUNC_5(VAR_10,
    (1 << VAR_18) | VAR_17);



 if ((VAR_36->family == VAR_0) || (VAR_36->family == VAR_1)) {
  VAR_38 = FUNC_3(VAR_16);
  VAR_38 |= VAR_14 | VAR_29;
  FUNC_5(VAR_16, VAR_38);
 } else {
  VAR_38 = FUNC_3(VAR_16);
  VAR_38 |= VAR_14;
  FUNC_5(VAR_16, VAR_38);
 }

 FUNC_5(VAR_8, (VAR_12 | VAR_37));
 FUNC_6(VAR_36);
 FUNC_0("PCIE GART of %uM enabled (table at 0x%016llX).\n",
   (unsigned)(VAR_36->mc.gtt_size >> 20),
   (unsigned long long)VAR_36->gart.table_addr);
 VAR_36->gart.ready = 1;
 return 0;
}
