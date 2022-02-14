
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct cache_set {struct hlist_head* bucket_hash; } ;
struct bkey {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_set*,struct bkey*) ;
 size_t FUNC_1 (int ,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_2(struct cache_set *VAR_1, struct bkey *VAR_2)
{
 return &VAR_1->bucket_hash[FUNC_1(FUNC_0(VAR_1, VAR_2), VAR_0)];
}
