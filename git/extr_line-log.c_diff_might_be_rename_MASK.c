
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
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0.nr; VAR_1++)
  if (!FUNC_0(VAR_0.queue[VAR_1]->one)) {


   return 1;
  }
 return 0;
}
