
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pip_bl_packet_start {int data_length; int cmd_code; int sop; } ;
struct pip_bl_packet_end {int eop; int crc; } ;
struct pip_bl_initiate_cmd_data {scalar_t__* key; scalar_t__* metadata_raw_parameter; int metadata_crc; } ;
struct pip_bl_cmd_head {scalar_t__ data; struct pip_bl_packet_start packet_start; int report_id; int length; int addr; } ;
struct firmware {int dummy; } ;
struct cyapa_tsg_bin_image_data_record {scalar_t__* record_data; } ;
struct cyapa {int dummy; } ;
typedef int resp_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,scalar_t__*,int) ;
 int FUNC_2 (struct cyapa*,int *,int *,int *) ;
 struct cyapa_tsg_bin_image_data_record* FUNC_3 (struct firmware const*,int*) ;
 int FUNC_4 (struct cyapa*,scalar_t__*,int,scalar_t__*,int*,int,int ,int) ;
 scalar_t__* VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 int FUNC_7 (int,int *) ;

int FUNC_8(struct cyapa *VAR_14, const struct firmware *VAR_15)
{
 struct cyapa_tsg_bin_image_data_record *VAR_16;
 struct pip_bl_cmd_head *VAR_17;
 struct pip_bl_packet_start *VAR_18;
 struct pip_bl_initiate_cmd_data *VAR_19;
 struct pip_bl_packet_end *VAR_20;
 u8 VAR_21[VAR_3];
 int VAR_22;
 u16 VAR_23;
 u16 VAR_24 = 0;
 u16 VAR_25 = 0;
 u8 VAR_26[11];
 int VAR_27;
 int VAR_28;
 u8 *VAR_29;
 int VAR_30;


 FUNC_2(VAR_14, ((void*)0), ((void*)0), ((void*)0));

 FUNC_6(VAR_21, 0, VAR_3);
 VAR_17 = (struct pip_bl_cmd_head *)VAR_21;
 VAR_23 = VAR_0 + VAR_1;
 VAR_22 = sizeof(struct pip_bl_cmd_head) + VAR_23 +
    sizeof(struct pip_bl_packet_end);

 FUNC_7(VAR_10, &VAR_17->addr);
 FUNC_7(VAR_22 - 2, &VAR_17->length);
 VAR_17->report_id = VAR_6;

 VAR_18 = &VAR_17->packet_start;
 VAR_18->sop = VAR_11;
 VAR_18->cmd_code = VAR_5;

 FUNC_7(VAR_23, &VAR_18->data_length);

 VAR_19 = (struct pip_bl_initiate_cmd_data *)VAR_17->data;
 FUNC_5(VAR_19->key, VAR_12, VAR_0);

 VAR_16 = FUNC_3(VAR_15, &VAR_28);


 VAR_29 = VAR_16[VAR_28 - 1].record_data;
 FUNC_5(VAR_19->metadata_raw_parameter, VAR_29,
  VAR_2);

 VAR_25 = FUNC_1(0xffff, VAR_19->metadata_raw_parameter,
    VAR_2);
 FUNC_7(VAR_25, &VAR_19->metadata_crc);

 VAR_20 = (struct pip_bl_packet_end *)(VAR_17->data +
    VAR_23);
 VAR_24 = FUNC_1(0xffff, (u8 *)VAR_18,
  sizeof(struct pip_bl_packet_start) + VAR_23);
 FUNC_7(VAR_24, &VAR_20->crc);
 VAR_20->eop = VAR_9;

 VAR_27 = sizeof(VAR_26);
 VAR_30 = FUNC_4(VAR_14,
   VAR_21, VAR_22,
   VAR_26, &VAR_27, 12000,
   VAR_13, 1);
 if (VAR_30 || VAR_27 != VAR_7 ||
   VAR_26[2] != VAR_8 ||
   !FUNC_0(VAR_26))
  return VAR_30 ? VAR_30 : -VAR_4;

 return 0;
}
