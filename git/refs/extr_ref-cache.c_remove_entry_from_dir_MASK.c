
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int dummy; } ;
struct ref_dir {int nr; int sorted; struct ref_entry** entries; } ;


 int FUNC_0 (struct ref_entry**,struct ref_entry**,int) ;
 struct ref_dir* FUNC_1 (struct ref_dir*,char const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ref_entry*) ;
 int FUNC_4 (struct ref_dir*,char const*,int) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,int) ;

int FUNC_7(struct ref_dir *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_5(VAR_1);
 int VAR_3;
 struct ref_entry *VAR_4;
 int VAR_5 = VAR_1[VAR_2 - 1] == '/';
 if (VAR_5) {






  char *VAR_6 = FUNC_6(VAR_1, VAR_2 - 1);
  VAR_0 = FUNC_1(VAR_0, VAR_6, 0);
  FUNC_2(VAR_6);
 } else {
  VAR_0 = FUNC_1(VAR_0, VAR_1, 0);
 }
 if (!VAR_0)
  return -1;
 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == -1)
  return -1;
 VAR_4 = VAR_0->entries[VAR_3];

 FUNC_0(&VAR_0->entries[VAR_3],
     &VAR_0->entries[VAR_3 + 1], VAR_0->nr - VAR_3 - 1);
 VAR_0->nr--;
 if (VAR_0->sorted > VAR_3)
  VAR_0->sorted--;
 FUNC_3(VAR_4);
 return VAR_0->nr;
}
