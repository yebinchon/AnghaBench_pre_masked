
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int child_node_id; } ;
struct TYPE_3__ {int zone_id; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char const*,int,int ) ;
 int FUNC_1 (int,char const*,int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2 (const char *VAR_2, int VAR_3, int *VAR_4, int *VAR_5) {
  *VAR_4 = FUNC_0 (VAR_2, VAR_3, 0);
  if (*VAR_4 < 0) {

    int VAR_6 = -1;
    while (VAR_3 > 0) {
      int VAR_7;
      for (VAR_7 = VAR_3 - 1; VAR_7 >= 0 && VAR_2[VAR_7] != '.'; VAR_7--) { }

      const int VAR_8 = FUNC_1 (VAR_6, "*", 1, 0);
      if (VAR_8 >= 0) {
        *VAR_4 = VAR_8;
      }
      const int VAR_9 = FUNC_1 (VAR_6, VAR_2 + VAR_7 + 1, (VAR_3 - (VAR_7 + 1)), 0);
      if (VAR_9 < 0) {
        break;
      }
      VAR_3 = VAR_7;
      VAR_6 = VAR_0[VAR_9].child_node_id;
    }
    if (*VAR_4 < 0) {
      *VAR_5 = VAR_6 >= 0 ? VAR_1[VAR_6].zone_id : -1;
      return -1;
    }
  }
  *VAR_5 = VAR_1[*VAR_4].zone_id;
  return 0;
}
