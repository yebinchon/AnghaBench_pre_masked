
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_response_frame {int* operand; } ;
struct avc_command_frame {int subunit; scalar_t__* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int ) ;
 size_t FUNC_2 (struct avc_response_frame*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct firedtv *VAR_9, int *VAR_10)
{
 struct avc_command_frame *VAR_11 = (void *)VAR_9->avc_data;
 struct avc_response_frame *VAR_12 = (void *)VAR_9->avc_data;
 int VAR_13;

 FUNC_3(&VAR_9->avc_mutex);

 VAR_11->ctype = VAR_0;
 VAR_11->subunit = VAR_2 | VAR_9->subunit;
 VAR_11->opcode = VAR_1;

 VAR_11->operand[0] = VAR_4;
 VAR_11->operand[1] = VAR_5;
 VAR_11->operand[2] = VAR_6;
 VAR_11->operand[3] = VAR_7;
 VAR_11->operand[4] = 0;
 VAR_11->operand[5] = VAR_8;
 FUNC_1(VAR_11, 6, VAR_3);

 VAR_9->avc_data_length = 12;
 VAR_13 = FUNC_0(VAR_9);
 if (VAR_13 < 0)
  goto out;



 *VAR_10 = VAR_12->operand[FUNC_2(VAR_12)];
out:
 FUNC_4(&VAR_9->avc_mutex);

 return VAR_13;
}
