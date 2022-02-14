
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct tsg_bl_flash_row_head {int flash_data; int flash_row_id; scalar_t__ flash_array_id; } ;
struct pip_bl_packet_start {int data_length; int cmd_code; int sop; } ;
struct pip_bl_packet_end {int eop; int crc; } ;
struct pip_bl_cmd_head {scalar_t__ data; int report_id; int length; int addr; struct pip_bl_packet_start packet_start; } ;
struct cyapa_tsg_bin_image_data_record {scalar_t__ flash_array_id; scalar_t__* record_data; int record_len; int row_number; } ;
struct cyapa {int dummy; } ;
typedef int resp_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct cyapa*,scalar_t__*,scalar_t__,scalar_t__*,int*,int,int ,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_7(struct cyapa *VAR_11,
  struct cyapa_tsg_bin_image_data_record *VAR_12)
{
 struct pip_bl_cmd_head *VAR_13;
 struct pip_bl_packet_start *VAR_14;
 struct tsg_bl_flash_row_head *VAR_15;
 struct pip_bl_packet_end *VAR_16;
 u8 VAR_17[VAR_1];
 u16 VAR_18;
 u8 VAR_19;
 u16 VAR_20;
 u16 VAR_21;
 u8 *VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 u8 VAR_25[11];
 int VAR_26;
 int VAR_27;

 VAR_19 = VAR_12->flash_array_id;
 VAR_20 = FUNC_3(&VAR_12->row_number);
 VAR_21 = FUNC_3(&VAR_12->record_len);
 VAR_22 = VAR_12->record_data;

 FUNC_5(VAR_17, 0, VAR_1);
 VAR_13 = (struct pip_bl_cmd_head *)VAR_17;
 VAR_14 = &VAR_13->packet_start;
 VAR_18 = sizeof(struct pip_bl_cmd_head) +
    sizeof(struct tsg_bl_flash_row_head) +
    VAR_0 +
    sizeof(struct pip_bl_packet_end);

 FUNC_6(VAR_8, &VAR_13->addr);

 FUNC_6(VAR_18 - 2, &VAR_13->length);
 VAR_13->report_id = VAR_5;
 VAR_14->sop = VAR_9;
 VAR_14->cmd_code = VAR_4;


 VAR_23 = sizeof(struct tsg_bl_flash_row_head) + VAR_21;
 FUNC_6(VAR_23, &VAR_14->data_length);

 VAR_15 = (struct tsg_bl_flash_row_head *)VAR_13->data;
 VAR_15->flash_array_id = VAR_19;
 FUNC_6(VAR_20, &VAR_15->flash_row_id);
 FUNC_4(VAR_15->flash_data, VAR_22, VAR_21);

 VAR_16 = (struct pip_bl_packet_end *)(VAR_13->data +
            VAR_23);
 VAR_24 = FUNC_1(0xffff, (u8 *)VAR_14,
  sizeof(struct pip_bl_packet_start) + VAR_23);
 FUNC_6(VAR_24, &VAR_16->crc);
 VAR_16->eop = VAR_7;

 VAR_26 = sizeof(VAR_25);
 VAR_27 = FUNC_2(VAR_11, VAR_17, VAR_18,
   VAR_25, &VAR_26,
   500, VAR_10, 1);
 if (VAR_27 || VAR_26 != VAR_3 ||
   VAR_25[2] != VAR_6 ||
   !FUNC_0(VAR_25))
  return VAR_27 < 0 ? VAR_27 : -VAR_2;

 return 0;
}
