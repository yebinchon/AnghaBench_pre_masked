
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys {int set; } ;
struct btree_iter {int dummy; } ;
struct bkey {int dummy; } ;


 struct bkey* FUNC_0 (struct btree_keys*,struct btree_iter*,struct bkey*,int ) ;

struct bkey *FUNC_1(struct btree_keys *VAR_0,
     struct btree_iter *VAR_1,
     struct bkey *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->set);
}
