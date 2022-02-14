
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int lock; int bg_work; } ;
struct policy_work {int dummy; } ;
struct dm_cache_policy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct policy_work**) ;
 int FUNC_1 (struct smq_policy*,int) ;
 int FUNC_2 (struct smq_policy*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct smq_policy* FUNC_5 (struct dm_cache_policy*) ;

__attribute__((used)) static int FUNC_6(struct dm_cache_policy *VAR_1, bool VAR_2,
       struct policy_work **VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct smq_policy *VAR_6 = FUNC_5(VAR_1);

 FUNC_3(&VAR_6->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_6->bg_work, VAR_3);
 if (VAR_4 == -VAR_0) {
  if (!FUNC_1(VAR_6, VAR_2)) {
   FUNC_2(VAR_6, VAR_2);
   VAR_4 = FUNC_0(VAR_6->bg_work, VAR_3);
  }
 }
 FUNC_4(&VAR_6->lock, VAR_5);

 return VAR_4;
}
