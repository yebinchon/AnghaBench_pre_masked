
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int tm; int hint_info; scalar_t__ policy_hint_size; int info; } ;
struct dm_btree_value_type {int size; int * equal; int * dec; int * inc; int * context; } ;
typedef int __le64 ;
typedef int __le32 ;


 int FUNC_0 (int *,int ,struct dm_btree_value_type*) ;

__attribute__((used)) static void FUNC_1(struct dm_cache_metadata *VAR_0)
{
 struct dm_btree_value_type VAR_1;

 VAR_1.context = ((void*)0);
 VAR_1.size = sizeof(__le64);
 VAR_1.inc = ((void*)0);
 VAR_1.dec = ((void*)0);
 VAR_1.equal = ((void*)0);
 FUNC_0(&VAR_0->info, VAR_0->tm, &VAR_1);

 if (VAR_0->policy_hint_size) {
  VAR_1.size = sizeof(__le32);
  FUNC_0(&VAR_0->hint_info, VAR_0->tm, &VAR_1);
 }
}
