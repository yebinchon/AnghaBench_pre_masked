
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ads7846 {int disabled; int lock; int suspended; } ;


 int FUNC_0 (struct ads7846*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ads7846 *VAR_0)
{
 FUNC_1(&VAR_0->lock);

 if (VAR_0->disabled) {

  VAR_0->disabled = 0;

  if (!VAR_0->suspended)
   FUNC_0(VAR_0);
 }

 FUNC_2(&VAR_0->lock);
}
