
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vmbuspipe_hdr {int dummy; } ;
struct icmsg_negotiate {int icframe_vercnt; int icmsg_vercnt; TYPE_1__* icversion_data; } ;
struct icmsg_hdr {int icmsgsize; } ;
struct TYPE_2__ {int major; int minor; } ;



bool FUNC_0(struct icmsg_hdr *VAR_0,
    u8 *VAR_1, const int *VAR_2, int VAR_3,
    const int *VAR_4, int VAR_5,
    int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;
 bool VAR_18 = 0;
 struct icmsg_negotiate *VAR_19;

 VAR_0->icmsgsize = 0x10;
 VAR_19 = (struct icmsg_negotiate *)&VAR_1[
  sizeof(struct vmbuspipe_hdr) +
  sizeof(struct icmsg_hdr)];

 VAR_8 = VAR_19->icframe_vercnt;
 VAR_9 = 0;

 VAR_10 = VAR_19->icmsg_vercnt;
 VAR_11 = 0;






 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  VAR_12 = (VAR_2[VAR_16] >> 16);
  VAR_13 = (VAR_2[VAR_16] & 0xFFFF);

  for (VAR_17 = 0; VAR_17 < VAR_19->icframe_vercnt; VAR_17++) {
   if ((VAR_19->icversion_data[VAR_17].major == VAR_12) &&
       (VAR_19->icversion_data[VAR_17].minor == VAR_13)) {
    VAR_8 = VAR_19->icversion_data[VAR_17].major;
    VAR_9 = VAR_19->icversion_data[VAR_17].minor;
    VAR_18 = 1;
    break;
   }
  }

  if (VAR_18)
   break;
 }

 if (!VAR_18)
  goto fw_error;

 VAR_18 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  VAR_14 = (VAR_4[VAR_16] >> 16);
  VAR_15 = (VAR_4[VAR_16] & 0xFFFF);

  for (VAR_17 = VAR_19->icframe_vercnt;
   (VAR_17 < VAR_19->icframe_vercnt + VAR_19->icmsg_vercnt);
   VAR_17++) {

   if ((VAR_19->icversion_data[VAR_17].major == VAR_14) &&
    (VAR_19->icversion_data[VAR_17].minor == VAR_15)) {

    VAR_10 = VAR_19->icversion_data[VAR_17].major;
    VAR_11 = VAR_19->icversion_data[VAR_17].minor;
    VAR_18 = 1;
    break;
   }
  }

  if (VAR_18)
   break;
 }






fw_error:
 if (!VAR_18) {
  VAR_19->icframe_vercnt = 0;
  VAR_19->icmsg_vercnt = 0;
 } else {
  VAR_19->icframe_vercnt = 1;
  VAR_19->icmsg_vercnt = 1;
 }

 if (VAR_6)
  *VAR_6 = (VAR_8 << 16) | VAR_9;

 if (VAR_7)
  *VAR_7 = (VAR_10 << 16) | VAR_11;

 VAR_19->icversion_data[0].major = VAR_8;
 VAR_19->icversion_data[0].minor = VAR_9;
 VAR_19->icversion_data[1].major = VAR_10;
 VAR_19->icversion_data[1].minor = VAR_11;
 return VAR_18;
}
