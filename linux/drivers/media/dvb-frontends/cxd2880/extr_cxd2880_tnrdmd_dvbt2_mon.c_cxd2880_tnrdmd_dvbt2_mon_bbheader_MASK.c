
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct cxd2880_dvbt2_bbheader {int stream_input; int is_single_input_stream; int is_constant_coding_modulation; int issy_indicator; int null_packet_deletion; int ext; int input_stream_identifier; scalar_t__ plp_mode; int data_field_length; int user_packet_length; int sync_byte; int issy; } ;
typedef enum cxd2880_dvbt2_stream { ____Placeholder_cxd2880_dvbt2_stream } cxd2880_dvbt2_stream ;
typedef enum cxd2880_dvbt2_plp_btype { ____Placeholder_cxd2880_dvbt2_plp_btype } cxd2880_dvbt2_plp_btype ;
typedef int data ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_7(struct cxd2880_tnrdmd
          *VAR_9,
          enum cxd2880_dvbt2_plp_btype
          VAR_10,
          struct cxd2880_dvbt2_bbheader
          *VAR_11)
{
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;
 u8 VAR_15[14];
 u8 VAR_16 = 0;
 int VAR_17;

 if (!VAR_9 || !VAR_11)
  return -VAR_8;

 if (VAR_9->diver_mode == VAR_5)
  return -VAR_8;

 if (VAR_9->state != VAR_6)
  return -VAR_8;

 if (VAR_9->sys != VAR_0)
  return -VAR_8;

 VAR_17 = FUNC_1(VAR_9);
 if (VAR_17)
  return VAR_17;

 VAR_17 =
     FUNC_0(VAR_9, &VAR_12,
             &VAR_13,
             &VAR_14);
 if (VAR_17) {
  FUNC_2(VAR_9);
  return VAR_17;
 }

 if (!VAR_13) {
  FUNC_2(VAR_9);
  return -VAR_7;
 }

 VAR_17 = VAR_9->io->write_reg(VAR_9->io,
         VAR_4,
         0x00, 0x0b);
 if (VAR_17) {
  FUNC_2(VAR_9);
  return VAR_17;
 }

 if (VAR_10 == VAR_1) {
  u8 VAR_18;
  u8 VAR_19;

  VAR_17 = VAR_9->io->read_regs(VAR_9->io,
          VAR_4,
          0x86, &VAR_18, 1);
  if (VAR_17) {
   FUNC_2(VAR_9);
   return VAR_17;
  }

  if (!(VAR_18 & 0x01)) {
   FUNC_2(VAR_9);
   return -VAR_7;
  }

  VAR_17 = VAR_9->io->read_regs(VAR_9->io,
          VAR_4,
          0xb6, &VAR_19, 1);
  if (VAR_17) {
   FUNC_2(VAR_9);
   return VAR_17;
  }

  if (VAR_19 == 0) {
   FUNC_2(VAR_9);
   return -VAR_7;
  }
 }

 if (VAR_10 == VAR_1)
  VAR_16 = 0x51;
 else
  VAR_16 = 0x42;

 VAR_17 = VAR_9->io->read_regs(VAR_9->io,
         VAR_4,
         VAR_16, VAR_15, sizeof(VAR_15));
 if (VAR_17) {
  FUNC_2(VAR_9);
  return VAR_17;
 }

 FUNC_2(VAR_9);

 VAR_11->stream_input =
     (enum cxd2880_dvbt2_stream)((VAR_15[0] >> 6) & 0x03);
 VAR_11->is_single_input_stream = (VAR_15[0] >> 5) & 0x01;
 VAR_11->is_constant_coding_modulation =
     (VAR_15[0] >> 4) & 0x01;
 VAR_11->issy_indicator = (VAR_15[0] >> 3) & 0x01;
 VAR_11->null_packet_deletion = (VAR_15[0] >> 2) & 0x01;
 VAR_11->ext = VAR_15[0] & 0x03;

 VAR_11->input_stream_identifier = VAR_15[1];
 VAR_11->plp_mode =
     (VAR_15[3] & 0x01) ? VAR_2 :
     VAR_3;
 VAR_11->data_field_length = (VAR_15[4] << 8) | VAR_15[5];

 if (VAR_11->plp_mode == VAR_3) {
  VAR_11->user_packet_length =
      (VAR_15[6] << 8) | VAR_15[7];
  VAR_11->sync_byte = VAR_15[8];
  VAR_11->issy = 0;
 } else {
  VAR_11->user_packet_length = 0;
  VAR_11->sync_byte = 0;
  VAR_11->issy =
      (VAR_15[11] << 16) | (VAR_15[12] << 8) | VAR_15[13];
 }

 return 0;
}
