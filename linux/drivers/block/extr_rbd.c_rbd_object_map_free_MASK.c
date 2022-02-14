
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {scalar_t__ object_map_size; int * object_map; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rbd_device *VAR_0)
{
 FUNC_0(VAR_0->object_map);
 VAR_0->object_map = ((void*)0);
 VAR_0->object_map_size = 0;
}
