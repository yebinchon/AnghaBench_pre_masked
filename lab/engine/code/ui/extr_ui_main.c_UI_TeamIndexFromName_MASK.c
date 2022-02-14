
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {int teamName; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1) {
  int VAR_2;

  if (VAR_1 && *VAR_1) {
    for (VAR_2 = 0; VAR_2 < VAR_0.teamCount; VAR_2++) {
      if (FUNC_0(VAR_1, VAR_0.teamList[VAR_2].teamName) == 0) {
        return VAR_2;
      }
    }
  }

  return 0;

}
