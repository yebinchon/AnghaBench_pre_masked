
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct page {int dummy; } ;
struct btree_keys {unsigned int nsets; unsigned int page_order; TYPE_1__* set; } ;
struct btree_iter {int dummy; } ;
struct bset_sort_state {unsigned int page_order; int time; int pool; } ;
struct bset {scalar_t__ start; int keys; int version; int seq; int magic; } ;
struct TYPE_4__ {int start; int keys; int version; int seq; int magic; } ;
struct TYPE_3__ {TYPE_2__* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct btree_keys*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct bset*) ;
 int FUNC_5 (struct btree_keys*,struct bset*,struct btree_iter*,int,int) ;
 int FUNC_6 (unsigned long,unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,scalar_t__,int) ;
 struct page* FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int *) ;
 struct bset* FUNC_11 (struct page*) ;
 int FUNC_12 (struct bset*,TYPE_2__*) ;
 int FUNC_13 (struct bset*) ;

__attribute__((used)) static void FUNC_14(struct btree_keys *VAR_3, struct btree_iter *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6, bool VAR_7,
    struct bset_sort_state *VAR_8)
{
 uint64_t VAR_9;
 bool VAR_10 = 0;
 struct bset *VAR_11 = (void *) FUNC_1(VAR_2|VAR_1,
           VAR_6);
 if (!VAR_11) {
  struct page *VAR_12;

  FUNC_0(VAR_6 > VAR_8->page_order);

  VAR_12 = FUNC_9(&VAR_8->pool, VAR_0);
  VAR_11 = FUNC_11(VAR_12);
  VAR_10 = 1;
  VAR_6 = VAR_8->page_order;
 }

 VAR_9 = FUNC_7();

 FUNC_5(VAR_3, VAR_11, VAR_4, VAR_7, 0);
 VAR_3->nsets = VAR_5;

 if (!VAR_5 && VAR_6 == VAR_3->page_order) {






  VAR_11->magic = VAR_3->set->data->magic;
  VAR_11->seq = VAR_3->set->data->seq;
  VAR_11->version = VAR_3->set->data->version;
  FUNC_12(VAR_11, VAR_3->set->data);
 } else {
  VAR_3->set[VAR_5].data->keys = VAR_11->keys;
  FUNC_8(VAR_3->set[VAR_5].data->start, VAR_11->start,
         (void *) FUNC_4(VAR_11) - (void *) VAR_11->start);
 }

 if (VAR_10)
  FUNC_10(FUNC_13(VAR_11), &VAR_8->pool);
 else
  FUNC_6((unsigned long) VAR_11, VAR_6);

 FUNC_2(VAR_3);

 if (!VAR_5)
  FUNC_3(&VAR_8->time, VAR_9);
}
