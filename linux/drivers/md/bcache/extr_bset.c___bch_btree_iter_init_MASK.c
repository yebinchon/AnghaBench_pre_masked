
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys {int dummy; } ;
struct btree_iter {struct btree_keys* b; scalar_t__ used; int data; int size; } ;
struct bset_tree {int data; } ;
struct bkey {int dummy; } ;


 int FUNC_0 (int ) ;
 struct bkey* FUNC_1 (struct btree_keys*,struct bset_tree*,struct bkey*) ;
 int FUNC_2 (struct btree_iter*,struct bkey*,int ) ;
 int FUNC_3 (int ) ;
 struct bset_tree* FUNC_4 (struct btree_keys*) ;

__attribute__((used)) static struct bkey *FUNC_5(struct btree_keys *VAR_0,
       struct btree_iter *VAR_1,
       struct bkey *VAR_2,
       struct bset_tree *VAR_3)
{
 struct bkey *VAR_4 = ((void*)0);

 VAR_1->size = FUNC_0(VAR_1->data);
 VAR_1->used = 0;





 for (; VAR_3 <= FUNC_4(VAR_0); VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_2);
  FUNC_2(VAR_1, VAR_4, FUNC_3(VAR_3->data));
 }

 return VAR_4;
}
