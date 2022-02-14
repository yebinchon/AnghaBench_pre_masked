
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct rb_node* rb_node; } ;
struct thin_c {TYPE_4__ sort_bio_list; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct dm_thin_endio_hook {int rb_node; } ;
struct TYPE_5__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {scalar_t__ bi_sector; } ;
struct TYPE_7__ {TYPE_2__ bi_iter; } ;


 struct dm_thin_endio_hook* FUNC_0 (struct bio*,int) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,struct rb_node*,struct rb_node**) ;
 TYPE_3__* FUNC_3 (struct dm_thin_endio_hook*) ;
 struct dm_thin_endio_hook* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static void FUNC_5(struct thin_c *VAR_0, struct bio *VAR_1)
{
 struct rb_node **VAR_2, *VAR_3;
 struct dm_thin_endio_hook *VAR_4;
 sector_t VAR_5 = VAR_1->bi_iter.bi_sector;

 VAR_2 = &VAR_0->sort_bio_list.rb_node;
 VAR_3 = ((void*)0);
 while (*VAR_2) {
  VAR_3 = *VAR_2;
  VAR_4 = FUNC_4(VAR_3);

  if (VAR_5 < FUNC_3(VAR_4)->bi_iter.bi_sector)
   VAR_2 = &(*VAR_2)->rb_left;
  else
   VAR_2 = &(*VAR_2)->rb_right;
 }

 VAR_4 = FUNC_0(VAR_1, sizeof(struct dm_thin_endio_hook));
 FUNC_2(&VAR_4->rb_node, VAR_3, VAR_2);
 FUNC_1(&VAR_4->rb_node, &VAR_0->sort_bio_list);
}
