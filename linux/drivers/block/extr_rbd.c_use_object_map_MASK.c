
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
struct rbd_device {int object_map_flags; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct rbd_device *VAR_2)
{
 return ((VAR_2->header.features & VAR_0) &&
  !(VAR_2->object_map_flags & VAR_1));
}
