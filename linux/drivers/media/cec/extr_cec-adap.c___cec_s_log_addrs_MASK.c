
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u16 ;
struct cec_log_addrs {int num_log_addrs; char* osd_name; int vendor_id; scalar_t__ cec_version; int flags; int* log_addr_type; int* primary_device_type; unsigned int** features; int log_addr_mask; scalar_t__* all_device_types; void** log_addr; } ;
struct TYPE_2__ {scalar_t__ unregistered; } ;
struct cec_adapter {int available_log_addrs; scalar_t__ phys_addr; struct cec_log_addrs log_addrs; TYPE_1__ devnode; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct cec_adapter*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (unsigned int*,int ,unsigned int const) ;

int FUNC_5(struct cec_adapter *VAR_16,
        struct cec_log_addrs *VAR_17, bool VAR_18)
{
 u16 VAR_19 = 0;
 int VAR_20;

 if (VAR_16->devnode.unregistered)
  return -VAR_15;

 if (!VAR_17 || VAR_17->num_log_addrs == 0) {
  FUNC_1(VAR_16);
  VAR_16->log_addrs.num_log_addrs = 0;
  for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++)
   VAR_16->log_addrs.log_addr[VAR_20] = VAR_1;
  VAR_16->log_addrs.osd_name[0] = '\0';
  VAR_16->log_addrs.vendor_id = VAR_13;
  VAR_16->log_addrs.cec_version = VAR_9;
  return 0;
 }

 if (VAR_17->flags & VAR_0) {




  VAR_17->num_log_addrs = 1;
  VAR_17->osd_name[0] = '\0';
  VAR_17->vendor_id = VAR_13;
  VAR_17->log_addr_type[0] = VAR_6;
  VAR_17->primary_device_type[0] = VAR_11;
  VAR_17->all_device_types[0] = 0;
  VAR_17->features[0][0] = 0;
  VAR_17->features[0][1] = 0;
 }


 VAR_17->osd_name[sizeof(VAR_17->osd_name) - 1] = '\0';


 if (VAR_17->num_log_addrs > VAR_16->available_log_addrs) {
  FUNC_3(1, "num_log_addrs > %d\n", VAR_16->available_log_addrs);
  return -VAR_14;
 }





 if (VAR_17->vendor_id != VAR_13 &&
     (VAR_17->vendor_id & 0xff000000) != 0) {
  FUNC_3(1, "invalid vendor ID\n");
  return -VAR_14;
 }

 if (VAR_17->cec_version != VAR_8 &&
     VAR_17->cec_version != VAR_9) {
  FUNC_3(1, "invalid CEC version\n");
  return -VAR_14;
 }

 if (VAR_17->num_log_addrs > 1)
  for (VAR_20 = 0; VAR_20 < VAR_17->num_log_addrs; VAR_20++)
   if (VAR_17->log_addr_type[VAR_20] ==
     VAR_6) {
    FUNC_3(1, "num_log_addrs > 1 can't be combined with unregistered LA\n");
    return -VAR_14;
   }

 for (VAR_20 = 0; VAR_20 < VAR_17->num_log_addrs; VAR_20++) {
  const u8 VAR_21 = FUNC_0(VAR_17->features[0]);
  u8 *VAR_22 = VAR_17->features[VAR_20];
  bool VAR_23 = 0;
  unsigned VAR_24;

  VAR_17->log_addr[VAR_20] = VAR_1;
  if (VAR_19 & (1 << VAR_17->log_addr_type[VAR_20])) {
   FUNC_3(1, "duplicate logical address type\n");
   return -VAR_14;
  }
  VAR_19 |= 1 << VAR_17->log_addr_type[VAR_20];
  if ((VAR_19 & (1 << VAR_4)) &&
      (VAR_19 & (1 << VAR_3))) {

   FUNC_3(1, "invalid record + playback combination\n");
   return -VAR_14;
  }
  if (VAR_17->primary_device_type[VAR_20] >
     VAR_10) {
   FUNC_3(1, "unknown primary device type\n");
   return -VAR_14;
  }
  if (VAR_17->primary_device_type[VAR_20] == 2) {
   FUNC_3(1, "invalid primary device type\n");
   return -VAR_14;
  }
  if (VAR_17->log_addr_type[VAR_20] > VAR_6) {
   FUNC_3(1, "unknown logical address type\n");
   return -VAR_14;
  }
  for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++) {
   if ((VAR_22[VAR_24] & 0x80) == 0) {
    if (VAR_23)
     break;
    VAR_23 = 1;
   }
  }
  if (!VAR_23 || VAR_24 == VAR_21) {
   FUNC_3(1, "malformed features\n");
   return -VAR_14;
  }

  FUNC_4(VAR_22 + VAR_24 + 1, 0, VAR_21 - VAR_24 - 1);
 }

 if (VAR_17->cec_version >= VAR_9) {
  if (VAR_17->num_log_addrs > 2) {
   FUNC_3(1, "CEC 2.0 allows no more than 2 logical addresses\n");
   return -VAR_14;
  }
  if (VAR_17->num_log_addrs == 2) {
   if (!(VAR_19 & ((1 << VAR_2) |
        (1 << VAR_5)))) {
    FUNC_3(1, "two LAs is only allowed for audiosystem and TV\n");
    return -VAR_14;
   }
   if (!(VAR_19 & ((1 << VAR_3) |
        (1 << VAR_4)))) {
    FUNC_3(1, "an audiosystem/TV can only be combined with record or playback\n");
    return -VAR_14;
   }
  }
 }


 for (VAR_20 = VAR_17->num_log_addrs; VAR_20 < VAR_7; VAR_20++) {
  VAR_17->primary_device_type[VAR_20] = 0;
  VAR_17->log_addr_type[VAR_20] = 0;
  VAR_17->all_device_types[VAR_20] = 0;
  FUNC_4(VAR_17->features[VAR_20], 0,
         sizeof(VAR_17->features[VAR_20]));
 }

 VAR_17->log_addr_mask = VAR_16->log_addrs.log_addr_mask;
 VAR_16->log_addrs = *VAR_17;
 if (VAR_16->phys_addr != VAR_12)
  FUNC_2(VAR_16, VAR_18);
 return 0;
}
