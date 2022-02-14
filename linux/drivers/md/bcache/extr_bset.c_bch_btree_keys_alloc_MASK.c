
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys {unsigned int page_order; struct bset_tree* set; } ;
struct bset_tree {void* prev; void* tree; void* data; } ;
typedef int gfp_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct btree_keys*) ;
 scalar_t__ FUNC_3 (struct btree_keys*) ;
 scalar_t__ FUNC_4 (struct btree_keys*) ;
 unsigned int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (scalar_t__,int ) ;

int FUNC_7(struct btree_keys *VAR_2,
    unsigned int VAR_3,
    gfp_t VAR_4)
{
 struct bset_tree *VAR_5 = VAR_2->set;

 FUNC_0(VAR_5->data);

 VAR_2->page_order = VAR_3;

 VAR_5->data = (void *) FUNC_1(VAR_4, VAR_2->page_order);
 if (!VAR_5->data)
  goto err;

 VAR_5->tree = FUNC_4(VAR_2) < VAR_1
  ? FUNC_6(FUNC_4(VAR_2), VAR_4)
  : (void *) FUNC_1(VAR_4, FUNC_5(FUNC_4(VAR_2)));
 if (!VAR_5->tree)
  goto err;

 VAR_5->prev = FUNC_3(VAR_2) < VAR_1
  ? FUNC_6(FUNC_3(VAR_2), VAR_4)
  : (void *) FUNC_1(VAR_4, FUNC_5(FUNC_3(VAR_2)));
 if (!VAR_5->prev)
  goto err;

 return 0;
err:
 FUNC_2(VAR_2);
 return -VAR_0;
}
