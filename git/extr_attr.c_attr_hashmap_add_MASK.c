
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tablesize; } ;
struct attr_hashmap {TYPE_1__ map; } ;
struct attr_hash_entry {char const* key; size_t keylen; int ent; void* value; } ;


 int FUNC_0 (struct attr_hashmap*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*,size_t) ;
 struct attr_hash_entry* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct attr_hashmap *VAR_0,
        const char *VAR_1, size_t VAR_2,
        void *VAR_3)
{
 struct attr_hash_entry *VAR_4;

 if (!VAR_0->map.tablesize)
  FUNC_0(VAR_0);

 VAR_4 = FUNC_4(sizeof(struct attr_hash_entry));
 FUNC_2(&VAR_4->ent, FUNC_3(VAR_1, VAR_2));
 VAR_4->key = VAR_1;
 VAR_4->keylen = VAR_2;
 VAR_4->value = VAR_3;

 FUNC_1(&VAR_0->map, &VAR_4->ent);
}
