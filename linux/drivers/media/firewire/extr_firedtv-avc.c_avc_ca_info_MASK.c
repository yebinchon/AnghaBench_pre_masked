
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_response_frame {unsigned char* operand; } ;
struct avc_command_frame {int subunit; scalar_t__* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int ) ;
 int* VAR_10 ;
 int FUNC_2 (struct avc_response_frame*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_11 ;

int FUNC_5(struct firedtv *VAR_12, unsigned char *VAR_13,
  unsigned int *VAR_14)
{
 struct avc_command_frame *VAR_15 = (void *)VAR_12->avc_data;
 struct avc_response_frame *VAR_16 = (void *)VAR_12->avc_data;
 int VAR_17, VAR_18, VAR_19;

 FUNC_3(&VAR_12->avc_mutex);

 VAR_15->ctype = VAR_0;
 VAR_15->subunit = VAR_2 | VAR_12->subunit;
 VAR_15->opcode = VAR_1;

 VAR_15->operand[0] = VAR_5;
 VAR_15->operand[1] = VAR_6;
 VAR_15->operand[2] = VAR_7;
 VAR_15->operand[3] = VAR_8;
 VAR_15->operand[4] = 0;
 VAR_15->operand[5] = VAR_9;
 FUNC_1(VAR_15, 6, VAR_4);

 VAR_12->avc_data_length = 12;
 VAR_19 = FUNC_0(VAR_12);
 if (VAR_19 < 0)
  goto out;



 VAR_18 = FUNC_2(VAR_16);
 VAR_13[0] = (VAR_3 >> 16) & 0xff;
 VAR_13[1] = (VAR_3 >> 8) & 0xff;
 VAR_13[2] = (VAR_3 >> 0) & 0xff;
 if (VAR_11 == 0) {
  VAR_13[3] = 2;
  VAR_13[4] = VAR_16->operand[VAR_18 + 0];
  VAR_13[5] = VAR_16->operand[VAR_18 + 1];
 } else {
  VAR_13[3] = VAR_11 * 2;
  for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
   VAR_13[4 + VAR_17 * 2] =
    (VAR_10[VAR_17] >> 8) & 0xff;
   VAR_13[5 + VAR_17 * 2] = VAR_10[VAR_17] & 0xff;
  }
 }
 *VAR_14 = VAR_13[3] + 4;
out:
 FUNC_4(&VAR_12->avc_mutex);

 return VAR_19;
}
