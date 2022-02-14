
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct smscore_device_t {int device_flags; int gfp_buf_flags; int context; int device; } ;
struct sms_firmware {int dummy; } ;
struct firmware {scalar_t__ size; int data; } ;
typedef int (* loadfirmware_t ) (int ,int *,scalar_t__) ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char*,int ) ;
 char* FUNC_8 (struct smscore_device_t*,int) ;
 int FUNC_9 (struct smscore_device_t*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct smscore_device_t *VAR_6,
        int VAR_7,
        loadfirmware_t VAR_8)
{
 int VAR_9 = -VAR_1;
 u8 *VAR_10;
 u32 VAR_11;
 const struct firmware *VAR_12;

 char *VAR_13 = FUNC_8(VAR_6, VAR_7);
 if (!VAR_13) {
  FUNC_5("mode %d not supported on this device\n", VAR_7);
  return -VAR_1;
 }
 FUNC_4("Firmware name: %s\n", VAR_13);

 if (!VAR_8 &&
     !(VAR_6->device_flags & VAR_5))
  return -VAR_0;

 VAR_9 = FUNC_7(&VAR_12, VAR_13, VAR_6->device);
 if (VAR_9 < 0) {
  FUNC_5("failed to open firmware file '%s'\n", VAR_13);
  return VAR_9;
 }
 FUNC_4("read fw %s, buffer size=0x%zx\n", VAR_13, VAR_12->size);
 VAR_10 = FUNC_2(FUNC_0(VAR_12->size + sizeof(struct sms_firmware),
    VAR_4), VAR_3 | VAR_6->gfp_buf_flags);
 if (!VAR_10) {
  FUNC_5("failed to allocate firmware buffer\n");
  VAR_9 = -VAR_2;
 } else {
  FUNC_3(VAR_10, VAR_12->data, VAR_12->size);
  VAR_11 = VAR_12->size;

  VAR_9 = (VAR_6->device_flags & VAR_5) ?
   FUNC_9(VAR_6, VAR_10, VAR_11)
   : VAR_8(VAR_6->context, VAR_10,
   VAR_11);
 }

 FUNC_1(VAR_10);
 FUNC_6(VAR_12);

 return VAR_9;
}
