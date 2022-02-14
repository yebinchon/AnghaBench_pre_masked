
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct rbd_device {scalar_t__ object_map_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct rbd_device *VAR_2, u64 VAR_3,
       u64 *VAR_4, u8 *VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_3 < VAR_2->object_map_size);
 *VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_6);
 *VAR_5 = (VAR_1 - VAR_6 - 1) * VAR_0;
}
