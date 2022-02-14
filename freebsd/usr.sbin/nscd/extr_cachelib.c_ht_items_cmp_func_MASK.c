
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_ht_item_data_ {size_t key_size; int * key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
     struct cache_ht_item_data_ *VAR_2, *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_2 = (struct cache_ht_item_data_ *)VAR_0;
 VAR_3 = (struct cache_ht_item_data_ *)VAR_1;

 FUNC_0(VAR_2->key != ((void*)0));
 FUNC_0(VAR_3->key != ((void*)0));

 if (VAR_2->key_size != VAR_3->key_size) {
  VAR_4 = (VAR_2->key_size < VAR_3->key_size) ? VAR_2->key_size :
   VAR_3->key_size;
  VAR_5 = FUNC_1(VAR_2->key, VAR_3->key, VAR_4);

  if (VAR_5 == 0)
   return ((VAR_2->key_size < VAR_3->key_size) ? -1 : 1);
  else
   return (VAR_5);
 } else
  return (FUNC_1(VAR_2->key, VAR_3->key, VAR_2->key_size));
}
