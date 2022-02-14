
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int dummy; } ;
struct connection {int dummy; } ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct connection*,long long) ;
 int FUNC_2 (struct udp_target*,long long) ;
 int FUNC_3 (void*,long long) ;




int FUNC_4 (enum tl_type VAR_0, void *VAR_1, long long VAR_2) {
  switch (VAR_0) {
  case 130:
    return FUNC_1 ((struct connection *)VAR_1, VAR_2);
  case 129:
    return FUNC_2 ((struct udp_target *)VAR_1, VAR_2);
  case 128:
    return FUNC_3 (VAR_1, VAR_2);
  default:
    FUNC_0 (0);
  }
}
