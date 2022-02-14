
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int sleeping; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 int VAR_4;

 while (!FUNC_0()) {
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   FUNC_3(&VAR_2[VAR_4].lock);
   if (!VAR_2[VAR_4].sleeping)
    FUNC_1(VAR_4);
   FUNC_4(&VAR_2[VAR_4].lock);
  }

  FUNC_2(VAR_0);
 }
 return 0;
}
