
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_bytes; } ;
struct udp_msg {int S; TYPE_1__ raw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4 (struct udp_msg *VAR_1) {
  FUNC_3 (2, "work_resend_request: len = %d\n", VAR_1->raw.total_bytes);
  if (VAR_1->raw.total_bytes > 102 * 4) { return 0; }
  int VAR_2 = VAR_1->raw.total_bytes;
  static int VAR_3[102];
  FUNC_0 (FUNC_2 (&VAR_1->raw, VAR_3, VAR_2) == VAR_2);
  if ((VAR_3[1] + 1) * 8 != VAR_2) { return 0; }
  FUNC_0 (VAR_3[0] == VAR_0);
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3[1]; VAR_4++) {
    if (VAR_3[2 + 2 * VAR_4] <= VAR_3[2 + 2 * VAR_4 + 1]) {
      FUNC_1 (VAR_1->S, VAR_3[2 + 2 * VAR_4], VAR_3[2 + 2 * VAR_4 + 1], 1);
    }
  }
  return 0;
}
