
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int hash; scalar_t__ sector; } ;
struct r5conf {int dummy; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *,struct hlist_head*) ;
 int FUNC_1 (char*,unsigned long long) ;
 struct hlist_head* FUNC_2 (struct r5conf*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct r5conf *VAR_0, struct stripe_head *VAR_1)
{
 struct hlist_head *VAR_2 = FUNC_2(VAR_0, VAR_1->sector);

 FUNC_1("insert_hash(), stripe %llu\n",
  (unsigned long long)VAR_1->sector);

 FUNC_0(&VAR_1->hash, VAR_2);
}
