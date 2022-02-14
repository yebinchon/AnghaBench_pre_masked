
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct dir_struct {int nr; struct dir_entry** entries; } ;
struct dir_entry {char* name; int len; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct index_state const*,char*,int) ;
 int FUNC_4 (struct index_state const*,int ,struct dir_entry*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(const struct index_state *VAR_1,
         const struct dir_struct *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++) {
  struct dir_entry *VAR_4 = VAR_2->entries[VAR_3];
  char *VAR_5, *VAR_6;
  int VAR_7, VAR_8, VAR_9 = 0;

  for (VAR_5 = VAR_4->name; VAR_5 - VAR_4->name < VAR_4->len; VAR_5 = VAR_6 + 1) {
   VAR_6 = FUNC_5(VAR_5, '/');
   if (!VAR_6) {



    VAR_7 = FUNC_3(VAR_1, VAR_4->name, VAR_4->len);
    if (0 <= VAR_7)
     FUNC_0("killed-file %.*s not found",
      VAR_4->len, VAR_4->name);
    VAR_7 = -VAR_7 - 1;
    while (VAR_7 < VAR_1->cache_nr &&
           FUNC_2(VAR_1->cache[VAR_7]))
     VAR_7++;
    if (VAR_1->cache_nr <= VAR_7)
     break;




    VAR_8 = FUNC_1(VAR_1->cache[VAR_7]);
    if ((VAR_4->len < VAR_8) &&
        !FUNC_6(VAR_1->cache[VAR_7]->name,
          VAR_4->name, VAR_4->len) &&
        VAR_1->cache[VAR_7]->name[VAR_4->len] == '/')
     VAR_9 = 1;
    break;
   }
   if (0 <= FUNC_3(VAR_1, VAR_4->name, VAR_6 - VAR_4->name)) {




    VAR_9 = 1;
    break;
   }
  }
  if (VAR_9)
   FUNC_4(VAR_1, VAR_0, VAR_2->entries[VAR_3]);
 }
}
