
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int cmd_prefix_; int dist_extra_; int dist_prefix_; } ;
typedef TYPE_1__ Command ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int *,int *) ;

__attribute__((used)) static void FUNC_3(Command* VAR_0,
                                      size_t VAR_1,
                                      uint32_t VAR_2,
                                      uint32_t VAR_3) {
  size_t VAR_4;
  if (VAR_2 == 0 && VAR_3 == 0) {
    return;
  }
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
    Command* VAR_5 = &VAR_0[VAR_4];
    if (FUNC_0(VAR_5) && VAR_5->cmd_prefix_ >= 128) {
      FUNC_2(FUNC_1(VAR_5),
                               VAR_2,
                               VAR_3,
                               &VAR_5->dist_prefix_,
                               &VAR_5->dist_extra_);
    }
  }
}
