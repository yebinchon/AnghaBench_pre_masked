
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_ht_item_data_ {size_t key_size; scalar_t__* key; } ;
typedef int hashtable_index_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static hashtable_index_t
FUNC_1(const void *VAR_0, size_t VAR_1)
{
     struct cache_ht_item_data_ *VAR_2;
 size_t VAR_3;

 hashtable_index_t VAR_4;

 VAR_2 = (struct cache_ht_item_data_ *)VAR_0;
 FUNC_0(VAR_2->key != ((void*)0));

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->key_size; ++VAR_3)
     VAR_4 = (127 * VAR_4 + (unsigned char)VAR_2->key[VAR_3]) %
  VAR_1;

 return VAR_4;
}
