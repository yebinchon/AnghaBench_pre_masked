
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_mutex; int device; int avc_data_length; scalar_t__ avc_data; } ;
struct avc_response_frame {int response; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct firedtv*) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct avc_command_frame*,int) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct firedtv *VAR_14, char *VAR_15, int VAR_16)
{
 struct avc_command_frame *VAR_17 = (void *)VAR_14->avc_data;
 struct avc_response_frame *VAR_18 = (void *)VAR_14->avc_data;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 if (FUNC_10(VAR_13 & VAR_1))
  FUNC_3(VAR_15, VAR_16);

 FUNC_7(&VAR_14->avc_mutex);

 VAR_17->ctype = VAR_0;
 VAR_17->subunit = VAR_4 | VAR_14->subunit;
 VAR_17->opcode = VAR_2;

 if (VAR_15[0] != VAR_7) {
  FUNC_5(VAR_14->device, "forcing list_management to ONLY\n");
  VAR_15[0] = VAR_7;
 }

 VAR_19 = VAR_15[0];
 VAR_20 = ((VAR_15[4] & 0x0f) << 8) + VAR_15[5];
 if (VAR_20 > 0)
  VAR_20--;
 VAR_21 = VAR_15[6];

 VAR_17->operand[0] = VAR_8;
 VAR_17->operand[1] = VAR_9;
 VAR_17->operand[2] = VAR_10;
 VAR_17->operand[3] = VAR_11;
 VAR_17->operand[4] = 0;
 VAR_17->operand[5] = VAR_12;
 VAR_17->operand[6] = 0;

 VAR_17->operand[10] = VAR_19;
 VAR_17->operand[11] = 0x01;



 VAR_17->operand[12] = 0x02;
 VAR_17->operand[13] = 0x80;

 VAR_17->operand[15] = VAR_15[1];
 VAR_17->operand[16] = VAR_15[2];
 VAR_17->operand[17] = VAR_15[3];
 VAR_17->operand[18] = 0x00;
 VAR_17->operand[19] = 0x00;
 VAR_17->operand[20] = 0x1f;
 VAR_17->operand[21] = 0xff;
 VAR_17->operand[22] = (VAR_20 >> 8);
 VAR_17->operand[23] = (VAR_20 & 0xff);


 VAR_22 = 6;
 VAR_23 = 24;
 if (VAR_20 > 0) {
  VAR_21 = VAR_15[VAR_22++];
  if (VAR_21 != 1 && VAR_21 != 4)
   FUNC_4(VAR_14->device,
    "invalid pmt_cmd_id %d\n", VAR_21);
  if (VAR_20 > sizeof(VAR_17->operand) - 4 - VAR_23) {
   VAR_26 = -VAR_6;
   goto out;
  }

  FUNC_6(&VAR_17->operand[VAR_23], &VAR_15[VAR_22],
         VAR_20);
  VAR_22 += VAR_20;
  VAR_23 += VAR_20;
 }
 while (VAR_22 < VAR_16) {
  VAR_17->operand[VAR_23++] = VAR_15[VAR_22++];
  VAR_17->operand[VAR_23++] = VAR_15[VAR_22++];
  VAR_17->operand[VAR_23++] = VAR_15[VAR_22++];
  VAR_24 =
   ((VAR_15[VAR_22] & 0x0f) << 8) + VAR_15[VAR_22 + 1];
  VAR_22 += 2;
  if (VAR_24 > 0)
   VAR_24--;
  VAR_17->operand[VAR_23++] = VAR_24 >> 8;
  VAR_17->operand[VAR_23++] = VAR_24 & 0xff;
  if (VAR_24 > 0) {
   VAR_21 = VAR_15[VAR_22++];
   if (VAR_21 != 1 && VAR_21 != 4)
    FUNC_4(VAR_14->device, "invalid pmt_cmd_id %d at stream level\n",
     VAR_21);

   if (VAR_24 > sizeof(VAR_17->operand) - 4 -
          VAR_23) {
    VAR_26 = -VAR_6;
    goto out;
   }

   FUNC_6(&VAR_17->operand[VAR_23], &VAR_15[VAR_22],
          VAR_24);
   VAR_22 += VAR_24;
   VAR_23 += VAR_24;
  }
 }
 VAR_23 += 4;

 VAR_17->operand[7] = 0x82;
 VAR_17->operand[8] = (VAR_23 - 10) >> 8;
 VAR_17->operand[9] = (VAR_23 - 10) & 0xff;
 VAR_17->operand[14] = VAR_23 - 15;

 VAR_25 = FUNC_2(0, &VAR_17->operand[10], VAR_17->operand[12] - 1);
 VAR_17->operand[VAR_23 - 4] = (VAR_25 >> 24) & 0xff;
 VAR_17->operand[VAR_23 - 3] = (VAR_25 >> 16) & 0xff;
 VAR_17->operand[VAR_23 - 2] = (VAR_25 >> 8) & 0xff;
 VAR_17->operand[VAR_23 - 1] = (VAR_25 >> 0) & 0xff;
 FUNC_9(VAR_17, VAR_23);

 VAR_14->avc_data_length = FUNC_0(3 + VAR_23, 4);
 VAR_26 = FUNC_1(VAR_14);
 if (VAR_26 < 0)
  goto out;

 if (VAR_18->response != VAR_3) {
  FUNC_4(VAR_14->device,
   "CA PMT failed with response 0x%x\n", VAR_18->response);
  VAR_26 = -VAR_5;
 }
out:
 FUNC_8(&VAR_14->avc_mutex);

 return VAR_26;
}
