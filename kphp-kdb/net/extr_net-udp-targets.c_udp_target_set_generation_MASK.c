
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int generation; int PID; } ;


 int FUNC_0 (struct udp_target*,int *,int) ;

void FUNC_1 (struct udp_target *VAR_0, int VAR_1) {
  if (VAR_0->generation >= VAR_1) { return; }
  FUNC_0 (VAR_0, &VAR_0->PID, VAR_1);
}
