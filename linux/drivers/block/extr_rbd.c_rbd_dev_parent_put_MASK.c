
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int parent_ref; int parent_spec; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*,char*) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_0)
{
 int VAR_1;

 if (!VAR_0->parent_spec)
  return;

 VAR_1 = FUNC_0(&VAR_0->parent_ref);
 if (VAR_1 > 0)
  return;



 if (!VAR_1)
  FUNC_1(VAR_0);
 else
  FUNC_2(VAR_0, "parent reference underflow");
}
