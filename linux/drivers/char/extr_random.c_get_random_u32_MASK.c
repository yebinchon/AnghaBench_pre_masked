
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct batched_entropy {int position; int batch_lock; int * entropy_u32; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct batched_entropy* FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (void**) ;

u32 FUNC_7(void)
{
 u32 VAR_1;
 unsigned long VAR_2;
 struct batched_entropy *VAR_3;
 static void *VAR_4;

 if (FUNC_1(&VAR_1))
  return VAR_1;

 FUNC_6(&VAR_4);

 VAR_3 = FUNC_3(&VAR_0);
 FUNC_4(&VAR_3->batch_lock, VAR_2);
 if (VAR_3->position % FUNC_0(VAR_3->entropy_u32) == 0) {
  FUNC_2((u8 *)VAR_3->entropy_u32);
  VAR_3->position = 0;
 }
 VAR_1 = VAR_3->entropy_u32[VAR_3->position++];
 FUNC_5(&VAR_3->batch_lock, VAR_2);
 return VAR_1;
}
