
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rbd_device {int object_map_lock; } ;


 int FUNC_0 (struct rbd_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u8 FUNC_3(struct rbd_device *VAR_0, u64 VAR_1)
{
 u8 VAR_2;

 FUNC_1(&VAR_0->object_map_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->object_map_lock);
 return VAR_2;
}
