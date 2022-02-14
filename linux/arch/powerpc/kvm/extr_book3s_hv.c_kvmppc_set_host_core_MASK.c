
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* rm_core; } ;
struct TYPE_4__ {int in_host; } ;
struct TYPE_5__ {TYPE_1__ rm_state; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 TYPE_3__* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_2)
{
 int VAR_3;

 if (!VAR_0 || FUNC_0(VAR_2))
  return 0;





 VAR_3 = VAR_2 >> VAR_1;
 VAR_0->rm_core[VAR_3].rm_state.in_host = 1;
 return 0;
}
