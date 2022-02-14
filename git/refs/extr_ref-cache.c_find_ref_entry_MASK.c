
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int flag; } ;
struct ref_dir {struct ref_entry** entries; } ;


 int VAR_0 ;
 struct ref_dir* FUNC_0 (struct ref_dir*,char const*,int ) ;
 int FUNC_1 (struct ref_dir*,char const*,int ) ;
 int FUNC_2 (char const*) ;

struct ref_entry *FUNC_3(struct ref_dir *VAR_1, const char *VAR_2)
{
 int VAR_3;
 struct ref_entry *VAR_4;
 VAR_1 = FUNC_0(VAR_1, VAR_2, 0);
 if (!VAR_1)
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_1, VAR_2, FUNC_2(VAR_2));
 if (VAR_3 == -1)
  return ((void*)0);
 VAR_4 = VAR_1->entries[VAR_3];
 return (VAR_4->flag & VAR_0) ? ((void*)0) : VAR_4;
}
