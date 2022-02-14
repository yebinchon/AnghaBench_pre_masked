
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int hash; scalar_t__ sector; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,unsigned long long) ;

__attribute__((used)) static inline void FUNC_2(struct stripe_head *VAR_0)
{
 FUNC_1("remove_hash(), stripe %llu\n",
  (unsigned long long)VAR_0->sector);

 FUNC_0(&VAR_0->hash);
}
