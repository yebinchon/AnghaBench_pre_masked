
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int gc_work; int release_ring; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct qxl_device *VAR_0, bool VAR_1)
{
 if (!FUNC_1(VAR_0->release_ring)) {
  FUNC_2(&VAR_0->gc_work);
  if (VAR_1)
   FUNC_0(&VAR_0->gc_work);
  return 1;
 }
 return 0;
}
