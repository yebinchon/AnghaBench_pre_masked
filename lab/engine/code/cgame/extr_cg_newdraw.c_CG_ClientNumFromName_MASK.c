
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int maxclients; TYPE_1__* clientinfo; } ;
struct TYPE_3__ {int name; scalar_t__ infoValid; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(const char *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0.maxclients; VAR_2++) {
    if (VAR_0.clientinfo[VAR_2].infoValid && FUNC_0(VAR_0.clientinfo[VAR_2].name, VAR_1) == 0) {
      return VAR_2;
    }
  }
  return -1;
}
