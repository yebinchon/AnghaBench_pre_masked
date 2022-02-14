
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_device {int resource_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long*,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned long*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_5(struct i40iw_device *VAR_1,
           unsigned long *VAR_2,
           u32 VAR_3,
           u32 *VAR_4,
           u32 *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_1->resource_lock, VAR_7);
 VAR_6 = FUNC_1(VAR_2, VAR_3, *VAR_5);
 if (VAR_6 >= VAR_3) {
  VAR_6 = FUNC_0(VAR_2, VAR_3);
  if (VAR_6 >= VAR_3) {
   FUNC_4(&VAR_1->resource_lock, VAR_7);
   return -VAR_0;
  }
 }
 FUNC_2(VAR_6, VAR_2);
 *VAR_5 = VAR_6 + 1;
 if (*VAR_5 == VAR_3)
  *VAR_5 = 0;
 *VAR_4 = VAR_6;
 FUNC_4(&VAR_1->resource_lock, VAR_7);

 return 0;
}
