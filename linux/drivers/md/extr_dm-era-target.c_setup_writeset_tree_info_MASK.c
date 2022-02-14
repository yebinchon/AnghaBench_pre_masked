
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeset_disk {int dummy; } ;
struct dm_btree_value_type {int size; int equal; int dec; int inc; struct era_metadata* context; } ;
struct TYPE_2__ {int levels; int tm; struct dm_btree_value_type value_type; } ;
struct era_metadata {TYPE_1__ writeset_tree_info; int tm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct era_metadata *VAR_3)
{
 struct dm_btree_value_type *VAR_4 = &VAR_3->writeset_tree_info.value_type;
 VAR_3->writeset_tree_info.tm = VAR_3->tm;
 VAR_3->writeset_tree_info.levels = 1;
 VAR_4->context = VAR_3;
 VAR_4->size = sizeof(struct writeset_disk);
 VAR_4->inc = VAR_2;
 VAR_4->dec = VAR_0;
 VAR_4->equal = VAR_1;
}
