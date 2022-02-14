
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr; TYPE_1__** queue; } ;
struct TYPE_3__ {int one; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline int FUNC_1(void)
{
 return VAR_0.nr == 1 &&
  !FUNC_0(VAR_0.queue[0]->one);
}
