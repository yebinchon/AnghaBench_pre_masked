
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40iw_device {int resource_lock; } ;


 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct i40iw_device *VAR_0,
           unsigned long *VAR_1,
           u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->resource_lock, VAR_3);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_0->resource_lock, VAR_3);
}
