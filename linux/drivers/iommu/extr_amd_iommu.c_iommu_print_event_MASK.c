
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;
struct amd_iommu {TYPE_1__ iommu; } ;


 int volatile VAR_0 ;
 int volatile VAR_1 ;
 int volatile VAR_2 ;
 int volatile VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;







 int VAR_6 ;
 int volatile VAR_7 ;

 int volatile VAR_8 ;
 int VAR_9 ;
 int volatile FUNC_0 (int) ;
 int volatile FUNC_1 (int) ;
 int volatile FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (struct device*,char*,int volatile,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct amd_iommu *VAR_10, void *VAR_11)
{
 struct device *VAR_12 = VAR_10->iommu.dev;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 volatile u32 *VAR_18 = VAR_11;
 int VAR_19 = 0;
 u64 VAR_20;

retry:
 VAR_13 = (VAR_18[1] >> VAR_8) & VAR_7;
 VAR_14 = (VAR_18[0] >> VAR_1) & VAR_0;
 VAR_15 = (VAR_18[0] & VAR_2) |
    (VAR_18[1] & VAR_3);
 VAR_16 = (VAR_18[1] >> VAR_5) & VAR_4;
 VAR_20 = (u64)(((u64)VAR_18[3]) << 32) | VAR_18[2];

 if (VAR_13 == 0) {

  if (++VAR_19 == VAR_9) {
   FUNC_8("No event written to event log\n");
   return;
  }
  FUNC_9(1);
  goto retry;
 }

 if (VAR_13 == VAR_6) {
  FUNC_3(VAR_14, VAR_15, VAR_20, VAR_16);
  return;
 }

 switch (VAR_13) {
 case 132:
  FUNC_4(VAR_12, "Event logged [ILLEGAL_DEV_TABLE_ENTRY device=%02x:%02x.%x pasid=0x%05x address=0x%llx flags=0x%04x]\n",
   FUNC_0(VAR_14), FUNC_2(VAR_14), FUNC_1(VAR_14),
   VAR_15, VAR_20, VAR_16);
  FUNC_6(VAR_14);
  break;
 case 134:
  FUNC_4(VAR_12, "Event logged [DEV_TAB_HARDWARE_ERROR device=%02x:%02x.%x "
   "address=0x%llx flags=0x%04x]\n",
   FUNC_0(VAR_14), FUNC_2(VAR_14), FUNC_1(VAR_14),
   VAR_20, VAR_16);
  break;
 case 128:
  FUNC_4(VAR_12, "Event logged [PAGE_TAB_HARDWARE_ERROR device=%02x:%02x.%x pasid=0x%04x address=0x%llx flags=0x%04x]\n",
   FUNC_0(VAR_14), FUNC_2(VAR_14), FUNC_1(VAR_14),
   VAR_15, VAR_20, VAR_16);
  break;
 case 133:
  FUNC_4(VAR_12, "Event logged [ILLEGAL_COMMAND_ERROR address=0x%llx]\n", VAR_20);
  FUNC_5(VAR_20);
  break;
 case 135:
  FUNC_4(VAR_12, "Event logged [COMMAND_HARDWARE_ERROR address=0x%llx flags=0x%04x]\n",
   VAR_20, VAR_16);
  break;
 case 129:
  FUNC_4(VAR_12, "Event logged [IOTLB_INV_TIMEOUT device=%02x:%02x.%x address=0x%llx]\n",
   FUNC_0(VAR_14), FUNC_2(VAR_14), FUNC_1(VAR_14),
   VAR_20);
  break;
 case 131:
  FUNC_4(VAR_12, "Event logged [INVALID_DEVICE_REQUEST device=%02x:%02x.%x pasid=0x%05x address=0x%llx flags=0x%04x]\n",
   FUNC_0(VAR_14), FUNC_2(VAR_14), FUNC_1(VAR_14),
   VAR_15, VAR_20, VAR_16);
  break;
 case 130:
  VAR_15 = ((VAR_18[0] >> 16) & 0xFFFF)
   | ((VAR_18[1] << 6) & 0xF0000);
  VAR_17 = VAR_18[1] & 0x03FF;
  FUNC_4(VAR_12, "Event logged [INVALID_PPR_REQUEST device=%02x:%02x.%x pasid=0x%05x address=0x%llx flags=0x%04x tag=0x%03x]\n",
   FUNC_0(VAR_14), FUNC_2(VAR_14), FUNC_1(VAR_14),
   VAR_15, VAR_20, VAR_16, VAR_17);
  break;
 default:
  FUNC_4(VAR_12, "Event logged [UNKNOWN event[0]=0x%08x event[1]=0x%08x event[2]=0x%08x event[3]=0x%08x\n",
   VAR_18[0], VAR_18[1], VAR_18[2], VAR_18[3]);
 }

 FUNC_7(VAR_11, 0, 4 * sizeof(u32));
}
