
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int dummy; } ;
struct ref_dir {struct ref_entry** entries; int cache; } ;


 int FUNC_0 (struct ref_dir*,struct ref_entry*) ;
 struct ref_entry* FUNC_1 (int ,char const*,size_t,int ) ;
 struct ref_dir* FUNC_2 (struct ref_entry*) ;
 int FUNC_3 (struct ref_dir*,char const*,size_t) ;

__attribute__((used)) static struct ref_dir *FUNC_4(struct ref_dir *VAR_0,
      const char *VAR_1, size_t VAR_2,
      int VAR_3)
{
 int VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 struct ref_entry *VAR_5;
 if (VAR_4 == -1) {
  if (!VAR_3)
   return ((void*)0);






  VAR_5 = FUNC_1(VAR_0->cache, VAR_1, VAR_2, 0);
  FUNC_0(VAR_0, VAR_5);
 } else {
  VAR_5 = VAR_0->entries[VAR_4];
 }
 return FUNC_2(VAR_5);
}
