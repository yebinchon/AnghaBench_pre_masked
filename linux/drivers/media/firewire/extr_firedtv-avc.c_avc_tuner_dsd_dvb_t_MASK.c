
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {scalar_t__ avc_data; } ;
struct dtv_frontend_properties {int bandwidth_hz; int modulation; int hierarchy; int code_rate_HP; int code_rate_LP; int guard_interval; int transmission_mode; int frequency; } ;
struct avc_command_frame {int* operand; int opcode; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct firedtv*,int*) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_3,
          struct dtv_frontend_properties *VAR_4)
{
 struct avc_command_frame *VAR_5 = (void *)VAR_3->avc_data;

 VAR_5->opcode = VAR_0;

 VAR_5->operand[0] = 0;
 VAR_5->operand[1] = 0xd2;
 VAR_5->operand[2] = 0x20;
 VAR_5->operand[3] = 0x00;
 VAR_5->operand[4] = 0x0c;


 VAR_5->operand[5] =
       0 << 7
     | 1 << 6
     | (VAR_4->bandwidth_hz != 0 ? 1 << 5 : 0)
     | (VAR_4->modulation != VAR_2 ? 1 << 4 : 0)
     | (VAR_4->hierarchy != 135 ? 1 << 3 : 0)
     | (VAR_4->code_rate_HP != VAR_1 ? 1 << 2 : 0)
     | (VAR_4->code_rate_LP != VAR_1 ? 1 << 1 : 0)
     | (VAR_4->guard_interval != 139 ? 1 << 0 : 0);


 VAR_5->operand[6] =
       0 << 7
     | (VAR_4->transmission_mode != 128 ? 1 << 6 : 0)
     | 0 << 5
     | 0 << 0 ;

 VAR_5->operand[7] = 0x0;
 VAR_5->operand[8] = (VAR_4->frequency / 10) >> 24;
 VAR_5->operand[9] = ((VAR_4->frequency / 10) >> 16) & 0xff;
 VAR_5->operand[10] = ((VAR_4->frequency / 10) >> 8) & 0xff;
 VAR_5->operand[11] = (VAR_4->frequency / 10) & 0xff;

 switch (VAR_4->bandwidth_hz) {
 case 7000000: VAR_5->operand[12] = 0x20; break;
 case 8000000:
 case 6000000:
 case 0:
 default: VAR_5->operand[12] = 0x00;
 }

 switch (VAR_4->modulation) {
 case 133: VAR_5->operand[13] = 1 << 6; break;
 case 132: VAR_5->operand[13] = 2 << 6; break;
 case 131:
 default: VAR_5->operand[13] = 0x00;
 }

 switch (VAR_4->hierarchy) {
 case 138: VAR_5->operand[13] |= 1 << 3; break;
 case 137: VAR_5->operand[13] |= 2 << 3; break;
 case 136: VAR_5->operand[13] |= 3 << 3; break;
 case 135:
 case 134:
 default: break;
 }

 switch (VAR_4->code_rate_HP) {
 case 147: VAR_5->operand[13] |= 1; break;
 case 146: VAR_5->operand[13] |= 2; break;
 case 145: VAR_5->operand[13] |= 3; break;
 case 144: VAR_5->operand[13] |= 4; break;
 case 148:
 default: break;
 }

 switch (VAR_4->code_rate_LP) {
 case 147: VAR_5->operand[14] = 1 << 5; break;
 case 146: VAR_5->operand[14] = 2 << 5; break;
 case 145: VAR_5->operand[14] = 3 << 5; break;
 case 144: VAR_5->operand[14] = 4 << 5; break;
 case 148:
 default: VAR_5->operand[14] = 0x00; break;
 }

 switch (VAR_4->guard_interval) {
 case 143: VAR_5->operand[14] |= 1 << 3; break;
 case 140: VAR_5->operand[14] |= 2 << 3; break;
 case 141: VAR_5->operand[14] |= 3 << 3; break;
 case 142:
 case 139:
 default: break;
 }

 switch (VAR_4->transmission_mode) {
 case 129: VAR_5->operand[14] |= 1 << 1; break;
 case 130:
 case 128:
 default: break;
 }

 VAR_5->operand[15] = 0x00;
 VAR_5->operand[16] = 0x00;

 return 17 + FUNC_0(VAR_3, &VAR_5->operand[17]);
}
