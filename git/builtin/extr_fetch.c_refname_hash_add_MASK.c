
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refname_hash_entry {int ent; int oid; } ;
struct object_id {int dummy; } ;
struct hashmap {int dummy; } ;


 int FUNC_0 (struct refname_hash_entry*,char const*,char const*,size_t) ;
 int FUNC_1 (struct hashmap*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct object_id const*) ;
 int FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static struct refname_hash_entry *FUNC_6(struct hashmap *VAR_0,
         const char *VAR_1,
         const struct object_id *VAR_2)
{
 struct refname_hash_entry *VAR_3;
 size_t VAR_4 = FUNC_5(VAR_1);

 FUNC_0(VAR_3, VAR_1, VAR_1, VAR_4);
 FUNC_2(&VAR_3->ent, FUNC_4(VAR_1));
 FUNC_3(&VAR_3->oid, VAR_2);
 FUNC_1(VAR_0, &VAR_3->ent);
 return VAR_3;
}
