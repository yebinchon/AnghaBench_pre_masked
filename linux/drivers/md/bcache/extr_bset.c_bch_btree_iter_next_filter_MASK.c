
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys {int dummy; } ;
struct btree_iter {int dummy; } ;
struct bkey {int dummy; } ;
typedef scalar_t__ (* ptr_filter_fn ) (struct btree_keys*,struct bkey*) ;


 struct bkey* FUNC_0 (struct btree_iter*) ;

struct bkey *FUNC_1(struct btree_iter *VAR_0,
     struct btree_keys *VAR_1, ptr_filter_fn VAR_2)
{
 struct bkey *VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_0);
 } while (VAR_3 && VAR_2(VAR_1, VAR_3));

 return VAR_3;
}
