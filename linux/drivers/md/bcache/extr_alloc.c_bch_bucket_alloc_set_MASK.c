
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int bucket_lock; } ;
struct bkey {int dummy; } ;


 int FUNC_0 (struct cache_set*,unsigned int,struct bkey*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cache_set *VAR_0, unsigned int VAR_1,
    struct bkey *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->bucket_lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->bucket_lock);
 return VAR_5;
}
