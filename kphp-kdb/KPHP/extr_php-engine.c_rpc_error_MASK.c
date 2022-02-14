
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_5__ {long long req_id; struct connection* conn; } ;
typedef TYPE_1__ php_worker ;
struct TYPE_7__ {int out_packet_num; } ;
struct TYPE_6__ {int (* flush_packet ) (struct connection*) ;} ;


 TYPE_4__* FUNC_0 (struct connection*) ;
 TYPE_3__* FUNC_1 (struct connection*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (char*,char const*,size_t) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (int *,int*,int) ;

void FUNC_8 (php_worker *VAR_1, int VAR_2, const char *VAR_3) {
  struct connection *VAR_4 = VAR_1->conn;

  static int VAR_5[10000];
  VAR_5[1] = FUNC_0(VAR_4)->out_packet_num++;
  VAR_5[2] = VAR_0;
  *(long long *)(VAR_5 + 3) = VAR_1->req_id;
  VAR_5[5] = VAR_2;


  char *VAR_6 = (char *)(VAR_5 + 6);
  int VAR_7 = 0;
  int VAR_8 = (int)FUNC_5 (VAR_3);

  if (VAR_8 > 5000) {
    VAR_8 = 5000;
  }

  if (VAR_8 < 254) {
    *VAR_6++ = (char) (VAR_8);
    VAR_7 += 1;
  } else if (VAR_8 < (1 << 24)) {
    *VAR_6++ = (char) (254);
    *VAR_6++ = (char) (VAR_8 & 255);
    *VAR_6++ = (char) ((VAR_8 >> 8) & 255);
    *VAR_6++ = (char) ((VAR_8 >> 16) & 255);
    VAR_7 += 4;
  } else {
    FUNC_2 ("TODO: store too big string" && 0);
  }

  FUNC_4 (VAR_6, VAR_3, (size_t)VAR_8);
  VAR_6 += VAR_8;
  VAR_7 += VAR_8;
  while (VAR_7 % 4 != 0) {
    *VAR_6++ = 0;
    VAR_7++;
  }

  int VAR_9 = 7 + VAR_7 / 4;
  VAR_5[0] = VAR_9 * 4;
  VAR_5[VAR_9 - 1] = (int)FUNC_3 (VAR_5, VAR_5[0] - 4);

  FUNC_2 (FUNC_7 (&VAR_4->Out, VAR_5, VAR_5[0]) == VAR_5[0]);

  FUNC_1(VAR_4)->flush_packet (VAR_4);
}
