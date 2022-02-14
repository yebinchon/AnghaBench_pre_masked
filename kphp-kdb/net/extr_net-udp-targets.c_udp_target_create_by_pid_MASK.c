
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int dummy; } ;
struct process_id {int port; int ip; } ;


 struct udp_target* FUNC_0 (struct process_id*,int ,unsigned char*,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ) ;

struct udp_target *FUNC_3 (struct process_id *VAR_0, int *VAR_1) {
  static unsigned char VAR_2[16];
  FUNC_2 (VAR_2, FUNC_1 (VAR_0->ip));
  return FUNC_0 (VAR_0, 0, VAR_2, VAR_0->port, VAR_1);
}
