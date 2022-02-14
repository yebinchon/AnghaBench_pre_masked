
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store_hash_entry {struct ref_store* refs; int ent; } ;
struct ref_store {int dummy; } ;


 int FUNC_0 (struct ref_store_hash_entry*,char const*,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct ref_store_hash_entry *FUNC_3(
  const char *VAR_0, struct ref_store *VAR_1)
{
 struct ref_store_hash_entry *VAR_2;

 FUNC_0(VAR_2, VAR_0, VAR_0);
 FUNC_1(&VAR_2->ent, FUNC_2(VAR_0));
 VAR_2->refs = VAR_1;
 return VAR_2;
}
