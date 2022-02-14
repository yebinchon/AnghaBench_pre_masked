
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_mutex; int device; int avc_data_length; scalar_t__ avc_data; } ;
struct dvb_diseqc_master_cmd {int msg_len; int* msg; } ;
struct avc_response_frame {scalar_t__ response; } ;
struct avc_command_frame {int subunit; char* operand; int opcode; int ctype; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int FUNC_1 (struct firedtv*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct avc_command_frame*,int) ;

int FUNC_6(struct firedtv *VAR_9, char VAR_10, char VAR_11,
      char VAR_12, char VAR_13,
      struct dvb_diseqc_master_cmd *VAR_14)
{
 struct avc_command_frame *VAR_15 = (void *)VAR_9->avc_data;
 struct avc_response_frame *VAR_16 = (void *)VAR_9->avc_data;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_3(&VAR_9->avc_mutex);

 VAR_15->ctype = VAR_0;
 VAR_15->subunit = VAR_3 | VAR_9->subunit;
 VAR_15->opcode = VAR_1;

 VAR_15->operand[0] = VAR_5;
 VAR_15->operand[1] = VAR_6;
 VAR_15->operand[2] = VAR_7;
 VAR_15->operand[3] = VAR_8;
 VAR_15->operand[4] = VAR_10;
 VAR_15->operand[5] = VAR_13;

 VAR_17 = 6;
 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
  VAR_15->operand[VAR_17++] = VAR_14[VAR_18].msg_len;

  for (VAR_19 = 0; VAR_19 < VAR_14[VAR_18].msg_len; VAR_19++)
   VAR_15->operand[VAR_17++] = VAR_14[VAR_18].msg[VAR_19];
 }
 VAR_15->operand[VAR_17++] = VAR_11;
 VAR_15->operand[VAR_17++] = VAR_12;
 FUNC_5(VAR_15, VAR_17);

 VAR_9->avc_data_length = FUNC_0(3 + VAR_17, 4);
 VAR_20 = FUNC_1(VAR_9);
 if (VAR_20 < 0)
  goto out;

 if (VAR_16->response != VAR_2) {
  FUNC_2(VAR_9->device, "LNB control failed\n");
  VAR_20 = -VAR_4;
 }
out:
 FUNC_4(&VAR_9->avc_mutex);

 return VAR_20;
}
