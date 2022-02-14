
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u64 ;
struct rbd_device {int* object_map; int object_map_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbd_device*,size_t,size_t*,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u8 FUNC_2(struct rbd_device *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 u8 VAR_4;

 FUNC_1(&VAR_1->object_map_lock);
 FUNC_0(VAR_1, VAR_2, &VAR_3, &VAR_4);
 return (VAR_1->object_map[VAR_3] >> VAR_4) & VAR_0;
}
