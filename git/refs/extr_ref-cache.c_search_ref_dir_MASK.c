
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_slice {size_t len; char const* str; } ;
struct ref_entry {int dummy; } ;
struct ref_dir {struct ref_entry** entries; int nr; } ;


 struct ref_entry** FUNC_0 (struct string_slice*,struct ref_entry**,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ref_dir*) ;

int FUNC_2(struct ref_dir *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct ref_entry **VAR_4;
 struct string_slice VAR_5;

 if (VAR_2 == ((void*)0) || !VAR_1->nr)
  return -1;

 FUNC_1(VAR_1);
 VAR_5.len = VAR_3;
 VAR_5.str = VAR_2;
 VAR_4 = FUNC_0(&VAR_5, VAR_1->entries, VAR_1->nr, sizeof(*VAR_1->entries),
      VAR_0);

 if (VAR_4 == ((void*)0))
  return -1;

 return VAR_4 - VAR_1->entries;
}
