
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {scalar_t__ parent_overlap; int * parent_spec; } ;


 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rbd_device *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->parent_spec);
 VAR_0->parent_spec = ((void*)0);
 VAR_0->parent_overlap = 0;
}
