
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_bucket {int list; } ;
struct cache_set {int data_buckets; int data_bucket_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct open_bucket* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cache_set *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->data_bucket_lock);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct open_bucket *VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);

  if (!VAR_5)
   return -VAR_0;

  FUNC_1(&VAR_5->list, &VAR_3->data_buckets);
 }

 return 0;
}
