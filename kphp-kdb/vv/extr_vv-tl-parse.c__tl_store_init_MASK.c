
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int remote_pid; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int * VAR_0 ;
 int FUNC_1 (struct connection*,int ,int ,int *,int,int,long long) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_2 (struct connection *VAR_3, long long VAR_4, int VAR_5) {
  if (VAR_3) {
    VAR_0 = &(FUNC_0(VAR_3)->remote_pid);
  } else {
    VAR_0 = 0;
  }
  return FUNC_1 (VAR_3, 0, VAR_2, &VAR_1, (1 << 27), VAR_5, VAR_4);
}
