
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_message {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {int remote_pid; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int * VAR_0 ;
 int FUNC_1 (struct raw_message*,struct connection*,int ,int *,int,int,long long) ;
 int FUNC_2 (struct raw_message*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4 (struct connection *VAR_3, long long VAR_4, int VAR_5) {
  if (VAR_3) {
    VAR_0 = &(FUNC_0(VAR_3)->remote_pid);
  } else {
    VAR_0 = 0;
  }
  struct raw_message *VAR_6 = 0;
  if (VAR_3) {
    VAR_6 = (struct raw_message *)FUNC_3 (sizeof (*VAR_6));
    FUNC_2 (VAR_6, 0);
  }
  return FUNC_1 (VAR_6, VAR_3, VAR_2, &VAR_1, (1 << 27), VAR_5, VAR_4);
}
