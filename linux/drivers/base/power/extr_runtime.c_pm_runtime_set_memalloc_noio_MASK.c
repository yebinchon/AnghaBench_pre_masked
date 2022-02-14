
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memalloc_noio; int lock; } ;
struct device {struct device* parent; TYPE_1__ power; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_1, bool VAR_2)
{
 static DEFINE_MUTEX(VAR_3);

 FUNC_1(&VAR_3);
 for (;;) {
  bool VAR_4;


  FUNC_3(&VAR_1->power.lock);
  VAR_4 = VAR_1->power.memalloc_noio;
  VAR_1->power.memalloc_noio = VAR_2;
  FUNC_4(&VAR_1->power.lock);





  if (VAR_4 && VAR_2)
   break;

  VAR_1 = VAR_1->parent;






  if (!VAR_1 || (!VAR_2 &&
        FUNC_0(VAR_1, ((void*)0),
         VAR_0)))
   break;
 }
 FUNC_2(&VAR_3);
}
