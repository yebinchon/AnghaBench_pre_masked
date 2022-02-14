
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
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct rbd_device *VAR_1, u64 VAR_2, u8 VAR_3)
{
 u64 VAR_4;
 u8 VAR_5;
 u8 *VAR_6;

 FUNC_1(&VAR_1->object_map_lock);
 FUNC_2(!(VAR_3 & ~VAR_0));

 FUNC_0(VAR_1, VAR_2, &VAR_4, &VAR_5);
 VAR_6 = &VAR_1->object_map[VAR_4];
 *VAR_6 = (*VAR_6 & ~(VAR_0 << VAR_5)) | (VAR_3 << VAR_5);
}
