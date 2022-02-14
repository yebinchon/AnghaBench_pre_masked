
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* g; } ;
struct TYPE_3__ {long long clicks; long long views; } ;


 TYPE_2__ VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,TYPE_1__*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,char*,char*,long long,long long) ;

int FUNC_6 (char *VAR_5) {
  if (VAR_4 > 0) {
    FUNC_2 (VAR_3, "loading global click/view statistics from %s\n", VAR_5);
  }
  int VAR_6 = FUNC_3 (VAR_5, VAR_2);
  if (VAR_6 < 0) {
    FUNC_2 (VAR_3, "cannot open statistics file %s: %m\n", VAR_5);
    return -1;
  }
  int VAR_7 = FUNC_4 (VAR_6, VAR_0.g, sizeof (VAR_0.g));
  FUNC_0 (VAR_7 == sizeof (VAR_0.g));
  long VAR_8;
  long long VAR_9 = VAR_0.g[0].clicks, VAR_10 = VAR_0.g[0].views;
  FUNC_0 (VAR_9 >= 0 && VAR_10 >= 0);
  for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8++) {
    FUNC_0 (VAR_0.g[VAR_8].clicks >= 0 && VAR_0.g[VAR_8].views >= 0);
    FUNC_0 (VAR_0.g[VAR_8].clicks <= VAR_9 && VAR_0.g[VAR_8].views <= VAR_10);
    VAR_9 -= VAR_0.g[VAR_8].clicks;
    VAR_10 -= VAR_0.g[VAR_8].views;
  }
  FUNC_0 (!VAR_9 && !VAR_10);
  FUNC_1 (VAR_6);
  FUNC_5 (1, "loaded global click/view statistics from file %s, %lld/%lld clicks/views\n", VAR_5, VAR_0.g[0].clicks, VAR_0.g[0].views);
  return 1;
}
