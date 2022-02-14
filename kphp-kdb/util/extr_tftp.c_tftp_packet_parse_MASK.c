
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {char* msg; void* code; } ;
struct TYPE_12__ {void* block; } ;
struct TYPE_11__ {char* d; int len; void* block; } ;
struct TYPE_10__ {char* filename; char* mode; } ;
struct TYPE_14__ {TYPE_4__ error; TYPE_3__ ack; TYPE_2__ data; TYPE_1__ rrq; } ;
struct TYPE_15__ {char* error_msg; int opcode; void* error_code; TYPE_5__ u; } ;
typedef TYPE_6__ tftp_packet_t ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;



 int FUNC_2 (char*,int) ;
 void* VAR_0 ;

 int FUNC_3 (TYPE_6__*,char*,int) ;

 void* VAR_1 ;

 char FUNC_4 (char) ;

int FUNC_5 (tftp_packet_t *VAR_2, char *VAR_3, int VAR_4) {
  FUNC_1 (VAR_2, 0, sizeof (*VAR_2));
  if (VAR_4 < 2) {
    VAR_2->error_code = VAR_1;
    VAR_2->error_msg = "Format error: opcode expected, but packet is too short";
    return -1;
  }
  VAR_2->opcode = FUNC_0 (VAR_3);
  VAR_3 += 2;
  VAR_4 -= 2;
  int VAR_5, VAR_6;
  switch (VAR_2->opcode) {
    case 129:
    case 128:
      VAR_6 = FUNC_2 (VAR_3, VAR_4);
      if (VAR_6 < 0) {
        VAR_2->error_code = VAR_1;
        VAR_2->error_msg = "Format error: filename expected, but end of packet found.";
        return -1;
      }
      VAR_2->u.rrq.filename = VAR_3;
      VAR_3 += VAR_6;
      VAR_4 -= VAR_6;
      VAR_6 = FUNC_2 (VAR_3, VAR_4);
      if (VAR_6 < 0) {
        VAR_2->error_code = VAR_1;
        VAR_2->error_msg = "Format error: mode expected, but end of packet found.";
        return -1;
      }
      VAR_2->u.rrq.mode = VAR_3;
      for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        VAR_3[VAR_5] = FUNC_4 (VAR_3[VAR_5]);
      }
      VAR_3 += VAR_6;
      VAR_4 -= VAR_6;
      return FUNC_3 (VAR_2, VAR_3, VAR_4);
    case 132:
      if (VAR_4 < 2) {
        VAR_2->error_code = VAR_1;
        VAR_2->error_msg = "Format error: block expected, but packet is too short";
        return -1;
      }
      VAR_2->u.data.block = FUNC_0 (VAR_3);
      VAR_3 += 2;
      VAR_4 -= 2;
      VAR_2->u.data.d = VAR_3;
      VAR_2->u.data.len = VAR_4;
      return 0;
    case 133:
      if (VAR_4 < 2) {
        VAR_2->error_code = VAR_1;
        VAR_2->error_msg = "Format error: block expected, but packet is too short";
        return -1;
      }
      VAR_2->u.ack.block = FUNC_0 (VAR_3);
      VAR_3 += 2;
      VAR_4 -= 2;
      break;
    case 131:
      if (VAR_4 < 2) {
        VAR_2->error_code = VAR_1;
        VAR_2->error_msg = "Format error: error code expected, but packet is too short";
        return -1;
      }
      VAR_2->u.error.code = FUNC_0 (VAR_3);
      VAR_3 += 2;
      VAR_4 -= 2;
      VAR_6 = FUNC_2 (VAR_3, VAR_4);
      if (VAR_6 < 0) {
        VAR_2->error_code = VAR_1;
        VAR_2->error_msg = "Format error: error message expected, but end of packet found.";
        return -1;
      }
      VAR_2->u.error.msg = VAR_3;
      VAR_3 += VAR_6;
      VAR_4 -= VAR_6;
      break;
   case 130:
     return FUNC_3 (VAR_2, VAR_3, VAR_4);
   default:
      VAR_2->error_code = VAR_0;
      return -1;
  }
  if (VAR_4) {
    VAR_2->error_code = VAR_1;
    VAR_2->error_msg = "Format error: packet contains extra data";
    return -1;
  }
  return 0;
}
