
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct related_binlog {int flags; int targets; TYPE_1__** client; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0 (struct related_binlog *VAR_3) {
  if ((VAR_3->flags & VAR_1)) {
    return 4;
  }
  if ((VAR_3->flags & VAR_0)) {
    return 0;
  }
  int VAR_4, VAR_5 = 1;
  for (VAR_4 = 0; VAR_4 < VAR_3->targets; VAR_4++) {
    int VAR_6 = (!VAR_3->client[VAR_4]) ? 1 : (!(VAR_3->client[VAR_4]->flags & VAR_2)) ? 2 : 3;
    if (VAR_5 < VAR_6) {
      VAR_5 = VAR_6;
    }
  }
  return VAR_5;
}
