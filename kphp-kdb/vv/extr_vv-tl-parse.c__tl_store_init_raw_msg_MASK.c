
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int PID; } ;
struct raw_message {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct raw_message*,struct udp_target*,int ,int *,int,int,long long) ;
 int FUNC_1 (struct raw_message*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3 (struct udp_target *VAR_3, long long VAR_4, int VAR_5) {
  if (VAR_3) {
    VAR_0 = &(VAR_3->PID);
  } else {
    VAR_0 = 0;
  }
  struct raw_message *VAR_6 = 0;
  if (VAR_3) {
    VAR_6 = (struct raw_message *)FUNC_2 (sizeof (*VAR_6));
    FUNC_1 (VAR_6, 0);
  }
  return FUNC_0 (VAR_6, VAR_3, VAR_2, &VAR_1, (1 << 27), VAR_5, VAR_4);
}
