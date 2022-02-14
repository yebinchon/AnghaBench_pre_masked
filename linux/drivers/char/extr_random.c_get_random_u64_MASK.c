
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct batched_entropy {int position; int batch_lock; scalar_t__* entropy_u64; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (unsigned long*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct batched_entropy* FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (void**) ;

u64 FUNC_7(void)
{
 u64 VAR_1;
 unsigned long VAR_2;
 struct batched_entropy *VAR_3;
 static void *VAR_4;





 if (FUNC_1((unsigned long *)&VAR_1) &&
     FUNC_1((unsigned long *)&VAR_1 + 1))
     return VAR_1;


 FUNC_6(&VAR_4);

 VAR_3 = FUNC_3(&VAR_0);
 FUNC_4(&VAR_3->batch_lock, VAR_2);
 if (VAR_3->position % FUNC_0(VAR_3->entropy_u64) == 0) {
  FUNC_2((u8 *)VAR_3->entropy_u64);
  VAR_3->position = 0;
 }
 VAR_1 = VAR_3->entropy_u64[VAR_3->position++];
 FUNC_5(&VAR_3->batch_lock, VAR_2);
 return VAR_1;
}
