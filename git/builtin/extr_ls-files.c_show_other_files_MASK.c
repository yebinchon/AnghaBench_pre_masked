
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_struct {int nr; struct dir_entry** entries; } ;
struct dir_entry {int len; int name; } ;


 int FUNC_0 (struct index_state const*,int ,int ) ;
 int FUNC_1 (struct index_state const*,int ,struct dir_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const struct index_state *VAR_1,
        const struct dir_struct *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++) {
  struct dir_entry *VAR_4 = VAR_2->entries[VAR_3];
  if (!FUNC_0(VAR_1, VAR_4->name, VAR_4->len))
   continue;
  FUNC_1(VAR_1, VAR_0, VAR_4);
 }
}
