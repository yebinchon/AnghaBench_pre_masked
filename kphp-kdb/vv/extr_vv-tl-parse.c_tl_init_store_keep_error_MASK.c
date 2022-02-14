
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int state; } ;
struct process_id {int dummy; } ;
struct connection {int dummy; } ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct connection* FUNC_2 (int ,struct process_id*) ;
 int FUNC_3 (struct process_id*) ;
 int VAR_0 ;
 int FUNC_4 (struct connection*,long long) ;
 int FUNC_5 (struct udp_target*,long long) ;
 int FUNC_6 (struct connection*,long long) ;



 int VAR_1 ;
 struct udp_target* FUNC_7 (struct process_id*) ;
 int FUNC_8 (int,char*) ;

int FUNC_9 (enum tl_type VAR_2, struct process_id *VAR_3, long long VAR_4) {
  switch (VAR_2) {
  case 130:
    {
      struct connection *VAR_5 = FUNC_2 (FUNC_3 (VAR_3), VAR_3);
      if (VAR_5) {
        FUNC_8 (2, "Good connection\n");
        FUNC_4 (VAR_5, VAR_4);
        return 1;
      } else {
        FUNC_8 (2, "Bad connection\n");
        return -1;
      }
    }
  case 129:
    {
      struct udp_target *VAR_6 = FUNC_7 (VAR_3);
      if (VAR_6 && VAR_6->state != VAR_1) {
        FUNC_5 (VAR_6, VAR_4);
        return 1;
      } else {
        return -1;
      }
    }
  case 128:
    {
      struct connection *VAR_7 = FUNC_2 (FUNC_3 (VAR_3), VAR_3);
      if (VAR_7) {
        FUNC_8 (2, "Good connection\n");
        FUNC_6 (VAR_7, VAR_4);
        return 1;
      } else {
        FUNC_8 (2, "Bad connection\n");
        return -1;
      }
    }
  default:
    FUNC_1 (VAR_0, "type = %d\n", VAR_2);
    FUNC_0 (0);
    return 0;
  }
}
