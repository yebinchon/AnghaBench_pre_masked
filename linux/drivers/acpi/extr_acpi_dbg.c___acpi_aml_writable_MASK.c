
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct circ_buf {int dummy; } ;
struct TYPE_2__ {unsigned long flags; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct circ_buf*) ;

__attribute__((used)) static inline bool FUNC_1(struct circ_buf *VAR_1, unsigned long VAR_2)
{




 if (!(VAR_0.flags & VAR_2) && FUNC_0(VAR_1))
  return 1;
 return 0;
}
