
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; int total; scalar_t__ gather; } ;
struct link {TYPE_1__ stats; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void
FUNC_1(struct link *VAR_0, int VAR_1)
{
  if (VAR_0->stats.gather) {
    FUNC_0(&VAR_0->stats.total, VAR_1);
    if (VAR_0->stats.parent)
      FUNC_0(VAR_0->stats.parent, VAR_1);
  }
}
