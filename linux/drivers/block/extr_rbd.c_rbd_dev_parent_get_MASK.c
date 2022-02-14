
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int header_rwsem; int parent_ref; scalar_t__ parent_overlap; int parent_spec; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rbd_device*,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct rbd_device *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->parent_spec)
  return 0;

 FUNC_1(&VAR_0->header_rwsem);
 if (VAR_0->parent_overlap)
  VAR_1 = FUNC_0(&VAR_0->parent_ref);
 FUNC_3(&VAR_0->header_rwsem);

 if (VAR_1 < 0)
  FUNC_2(VAR_0, "parent reference overflow");

 return VAR_1 > 0;
}
