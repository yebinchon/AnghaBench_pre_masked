
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct dm_btree_info {int tm; } ;
struct child {int index; int block; struct btree_node* n; } ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct btree_node*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (struct btree_node*,int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct btree_node*) ;
 int FUNC_7 (struct btree_node*,struct btree_node*,unsigned int) ;
 int FUNC_8 (struct btree_node*,struct btree_node*,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct dm_btree_info *VAR_0, struct btree_node *VAR_1,
    struct child *VAR_2, struct child *VAR_3)
{
 struct btree_node *VAR_4 = VAR_2->n;
 struct btree_node *VAR_5 = VAR_3->n;
 uint32_t VAR_6 = FUNC_5(VAR_4->header.nr_entries);
 uint32_t VAR_7 = FUNC_5(VAR_5->header.nr_entries);
 unsigned VAR_8 = 2 * FUNC_6(VAR_4) + 1;

 if (VAR_6 + VAR_7 < VAR_8) {



  FUNC_7(VAR_4, VAR_5, -VAR_7);
  VAR_4->header.nr_entries = FUNC_0(VAR_6 + VAR_7);
  FUNC_1(VAR_1, VAR_3->index);





  FUNC_3(VAR_0->tm, FUNC_2(VAR_3->block));
 } else {



  unsigned VAR_9 = (VAR_6 + VAR_7) / 2;
  FUNC_8(VAR_4, VAR_5, VAR_6 - VAR_9);
  *FUNC_4(VAR_1, VAR_3->index) = VAR_5->keys[0];
 }
}
