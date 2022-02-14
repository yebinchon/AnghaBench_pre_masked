
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smscore_device_t {scalar_t__ mode; int fw_version; int ir_init_done; int gpio_get_level_done; int gpio_get_res; int gpio_set_level_done; int gpio_configuration_done; int resume_done; int trigger_done; int data_download_done; int data_validity_done; int reload_start_done; int init_device_done; int version_ex_done; int modes_supported; } ;
struct smscore_client_t {int (* onresponse_handler ) (int ,struct smscore_buffer_t*) ;int context; } ;
struct smscore_buffer_t {int offset; scalar_t__ size; scalar_t__ p; } ;
struct sms_version_res {int firmware_id; int rom_ver_major; int rom_ver_minor; int supported_protocols; } ;
struct sms_msg_hdr {int msg_type; scalar_t__ msg_length; int msg_dst_id; } ;
struct sms_msg_data {int * msg_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *) ;
 int VAR_6 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct smscore_device_t*,char const*,int) ;
 struct smscore_client_t* FUNC_4 (struct smscore_device_t*,int,int ) ;
 int FUNC_5 (struct smscore_device_t*,struct smscore_buffer_t*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,struct smscore_buffer_t*) ;

void FUNC_8(struct smscore_device_t *VAR_7,
  struct smscore_buffer_t *VAR_8) {
 struct sms_msg_hdr *VAR_9 = (struct sms_msg_hdr *) ((u8 *) VAR_8->p
   + VAR_8->offset);
 struct smscore_client_t *VAR_10;
 int VAR_11 = -VAR_3;
 static unsigned long VAR_12;
 static int VAR_13;
 unsigned long VAR_14 = FUNC_1(VAR_6);

 if (!VAR_12)
  VAR_12 = VAR_14;

 if (VAR_14 - VAR_12 > 10000) {
  FUNC_2("data rate %d bytes/secs\n",
     (int)((VAR_13 * 1000) /
    (VAR_14 - VAR_12)));

  VAR_12 = VAR_14;
  VAR_13 = 0;
 }

 VAR_13 += VAR_8->size;

 if ((VAR_9->msg_type == VAR_4) ||
   (VAR_9->msg_type == VAR_5)) {
  if (VAR_7->mode == VAR_0)
   VAR_9->msg_dst_id = VAR_2;
 }


 VAR_10 = FUNC_4(VAR_7, VAR_9->msg_type, VAR_9->msg_dst_id);



 if (VAR_10)
  VAR_11 = VAR_10->onresponse_handler(VAR_10->context, VAR_8);

 if (VAR_11 < 0) {
  switch (VAR_9->msg_type) {
  case 137:
   break;
  case 135:
   break;
  case 134:
   break;
  case 136:
   break;
  case 132:
   break;
  case 140:
   break;
  case 139:
   break;
  case 145:
  {
   struct sms_version_res *VAR_15 =
    (struct sms_version_res *) VAR_9;
   FUNC_2("Firmware id %d prots 0x%x ver %d.%d\n",
      VAR_15->firmware_id, VAR_15->supported_protocols,
      VAR_15->rom_ver_major, VAR_15->rom_ver_minor);

   VAR_7->mode = VAR_15->firmware_id == 255 ?
    VAR_1 : VAR_15->firmware_id;
   VAR_7->modes_supported = VAR_15->supported_protocols;
   VAR_7->fw_version = VAR_15->rom_ver_major << 8 |
           VAR_15->rom_ver_minor;

   FUNC_0(&VAR_7->version_ex_done);
   break;
  }
  case 141:
   FUNC_0(&VAR_7->init_device_done);
   break;
  case 128:
   FUNC_0(&VAR_7->reload_start_done);
   break;
  case 147:
  {
   struct sms_msg_data *VAR_16 = (struct sms_msg_data *) VAR_9;

   FUNC_2("MSG_SMS_DATA_VALIDITY_RES, checksum = 0x%x\n",
    VAR_16->msg_data[0]);
   FUNC_0(&VAR_7->data_validity_done);
   break;
  }
  case 148:
   FUNC_0(&VAR_7->data_download_done);
   break;
  case 129:
   break;
  case 130:
   FUNC_0(&VAR_7->trigger_done);
   break;
  case 133:
   FUNC_0(&VAR_7->resume_done);
   break;
  case 144:
   FUNC_0(&VAR_7->gpio_configuration_done);
   break;
  case 142:
   FUNC_0(&VAR_7->gpio_set_level_done);
   break;
  case 143:
  {
   u32 *VAR_17 = (u32 *) VAR_9;
   VAR_7->gpio_get_res = VAR_17[1];
   FUNC_2("gpio level %d\n",
     VAR_7->gpio_get_res);
   FUNC_0(&VAR_7->gpio_get_level_done);
   break;
  }
  case 131:
   FUNC_0(&VAR_7->ir_init_done);
   break;
  case 138:
   FUNC_3(VAR_7,
    (const char *)
    ((char *)VAR_9
    + sizeof(struct sms_msg_hdr)),
    (int)VAR_9->msg_length
    - sizeof(struct sms_msg_hdr));
   break;

  case 146:






   break;

  default:
   FUNC_2("message %s(%d) not handled.\n",
      FUNC_6(VAR_9->msg_type),
      VAR_9->msg_type);
   break;
  }
  FUNC_5(VAR_7, VAR_8);
 }
}
