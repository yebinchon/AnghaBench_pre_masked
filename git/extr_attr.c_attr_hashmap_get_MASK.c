
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tablesize; } ;
struct attr_hashmap {TYPE_1__ map; } ;
struct attr_hash_entry {char const* key; size_t keylen; void* value; int ent; } ;


 int FUNC_0 (struct attr_hashmap*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct attr_hash_entry* FUNC_2 (TYPE_1__*,struct attr_hash_entry*,int ,int *) ;
 int FUNC_3 (char const*,size_t) ;

__attribute__((used)) static void *FUNC_4(struct attr_hashmap *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct attr_hash_entry VAR_4;
 struct attr_hash_entry *VAR_5;

 if (!VAR_1->map.tablesize)
  FUNC_0(VAR_1);

 FUNC_1(&VAR_4.ent, FUNC_3(VAR_2, VAR_3));
 VAR_4.key = VAR_2;
 VAR_4.keylen = VAR_3;
 VAR_5 = FUNC_2(&VAR_1->map, &VAR_4, VAR_0, ((void*)0));

 return VAR_5 ? VAR_5->value : ((void*)0);
}
