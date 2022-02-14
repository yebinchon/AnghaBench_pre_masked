
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; scalar_t__ type; int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct firedtv *VAR_4)
{
 struct avc_command_frame *VAR_5 = (void *)VAR_4->avc_data;
 int VAR_6, VAR_7;

 FUNC_3(&VAR_4->avc_mutex);

 VAR_5->ctype = VAR_0;
 VAR_5->subunit = VAR_2 | VAR_4->subunit;
 VAR_5->opcode = VAR_1;

 VAR_7 = VAR_4->type == VAR_3 ? 0x0c : 0x11;

 VAR_5->operand[0] = 0;
 VAR_5->operand[1] = 0xd2;
 VAR_5->operand[2] = 0xff;
 VAR_5->operand[3] = 0x20;
 VAR_5->operand[4] = 0x00;
 VAR_5->operand[5] = 0x0;
 VAR_5->operand[6] = VAR_7;





 FUNC_1(VAR_5, 7, 24);

 VAR_4->avc_data_length = VAR_4->type == VAR_3 ? 24 : 28;
 VAR_6 = FUNC_0(VAR_4);



 FUNC_4(&VAR_4->avc_mutex);

 if (VAR_6 == 0)
  FUNC_2(250);

 return VAR_6;
}
