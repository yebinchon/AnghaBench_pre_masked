
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blksize; int timeout; int tsize; char* options; } ;
struct TYPE_6__ {TYPE_1__ rrq; } ;
struct TYPE_7__ {char* error_msg; TYPE_2__ u; int error_code; } ;
typedef TYPE_3__ tftp_packet_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;

int FUNC_3 (tftp_packet_t *VAR_1, char *VAR_2, int VAR_3) {
  VAR_1->u.rrq.blksize = VAR_1->u.rrq.timeout = 0;
  VAR_1->u.rrq.tsize = -1;
  if (!VAR_3) {
    VAR_1->u.rrq.options = "";
    return 0;
  }
  VAR_1->u.rrq.options = VAR_2;
  while (VAR_3 > 0) {
    if (VAR_1->u.rrq.options != VAR_2) {
      VAR_2[-1] = ',';
    }
    int VAR_4;
    char *VAR_5[2];
    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
      const int VAR_6 = FUNC_2 (VAR_2, VAR_3);
      if (VAR_6 < 0) {
        VAR_1->error_code = VAR_0;
        VAR_1->error_msg = "Format error: option isn't NUL-terminated.";
        return -1;
      }
      VAR_5[VAR_4] = VAR_2;
      VAR_2 += VAR_6;
      VAR_3 -= VAR_6;
    }
    if (!FUNC_1 (VAR_5[0], "blksize")) {
      VAR_4 = FUNC_0 (VAR_5[1]);
      if (VAR_4 >= 8 && VAR_4 <= 65464) {
        VAR_1->u.rrq.blksize = VAR_4;
      }
    }
    if (!FUNC_1 (VAR_5[0], "timeout")) {
      VAR_4 = FUNC_0 (VAR_5[1]);
      if (VAR_4 >= 1 && VAR_4 <= 255) {
        VAR_1->u.rrq.timeout = VAR_4;
      }
    }
    if (!FUNC_1 (VAR_5[0], "tsize")) {
      VAR_4 = FUNC_0 (VAR_5[1]);
      if (VAR_4 >= 0) {
        VAR_1->u.rrq.tsize = VAR_4;
      }
    }
    VAR_5[1][-1] = '=';
  }
  return 0;
}
