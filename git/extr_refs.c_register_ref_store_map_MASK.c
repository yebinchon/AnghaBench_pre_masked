
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store_hash_entry {int ent; } ;
struct ref_store {int dummy; } ;
struct hashmap {int tablesize; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 struct ref_store_hash_entry* FUNC_1 (char const*,struct ref_store*) ;
 int FUNC_2 (struct hashmap*,int ,int *,int ) ;
 scalar_t__ FUNC_3 (struct hashmap*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct hashmap *VAR_1,
       const char *VAR_2,
       struct ref_store *VAR_3,
       const char *VAR_4)
{
 struct ref_store_hash_entry *VAR_5;

 if (!VAR_1->tablesize)
  FUNC_2(VAR_1, VAR_0, ((void*)0), 0);

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (FUNC_3(VAR_1, &VAR_5->ent))
  FUNC_0("%s ref_store '%s' initialized twice", VAR_2, VAR_4);
}
