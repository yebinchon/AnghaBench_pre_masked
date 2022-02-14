
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {scalar_t__ state; } ;
struct process_id {int dummy; } ;
struct connection {int dummy; } ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;


 int FUNC_0 (int ) ;
 struct connection* FUNC_1 (int ,struct process_id*) ;
 int FUNC_2 (struct process_id*) ;
 int FUNC_3 (struct connection*,long long) ;
 int FUNC_4 (struct udp_target*,long long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct udp_target* FUNC_5 (struct process_id*) ;
 int FUNC_6 (int,char*) ;

int FUNC_7 (enum tl_type VAR_3, struct process_id *VAR_4, long long VAR_5) {
  if (VAR_3 == VAR_0) {
    struct connection *VAR_6 = FUNC_1 (FUNC_2 (VAR_4), VAR_4);
    if (VAR_6) {
      FUNC_6 (2, "Good connection\n");
      FUNC_3 (VAR_6, VAR_5);
      return 1;
    } else {
      FUNC_6 (2, "Bad connection\n");
      return -1;
    }
  } else if (VAR_3 == VAR_1) {
    struct udp_target *VAR_7 = FUNC_5 (VAR_4);
    if (VAR_7 && VAR_7->state != VAR_2) {
      FUNC_4 (VAR_7, VAR_5);
      return 1;
    } else {
      return -1;
    }
  } else {
    FUNC_0 (0);
    return -1;
  }
}
