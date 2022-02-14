
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashmap {int dummy; } ;
struct dir_rename_entry {int dummy; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct diff_filepair {char status; TYPE_1__* two; } ;
struct collision_entry {char* target_file; int source_files; int ent; } ;
struct TYPE_2__ {int path; } ;


 char* FUNC_0 (struct dir_rename_entry*,int ) ;
 struct dir_rename_entry* FUNC_1 (int ,struct hashmap*) ;
 struct collision_entry* FUNC_2 (struct hashmap*,char*) ;
 int FUNC_3 (struct hashmap*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct hashmap*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ) ;
 struct collision_entry* FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct hashmap *VAR_0,
          struct hashmap *VAR_1,
          struct diff_queue_struct *VAR_2)
{
 int VAR_3;
 FUNC_3(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->nr; ++VAR_3) {
  struct dir_rename_entry *VAR_4;
  struct collision_entry *VAR_5;
  char *VAR_6;
  struct diff_filepair *VAR_7 = VAR_2->queue[VAR_3];

  if (VAR_7->status != 'A' && VAR_7->status != 'R')
   continue;
  VAR_4 = FUNC_1(VAR_7->two->path,
         VAR_1);
  if (!VAR_4)
   continue;

  VAR_6 = FUNC_0(VAR_4, VAR_7->two->path);
  if (!VAR_6)






   continue;
  VAR_5 = FUNC_2(VAR_0, VAR_6);
  if (!VAR_5) {
   VAR_5 = FUNC_9(1,
      sizeof(struct collision_entry));
   FUNC_5(&VAR_5->ent,
      FUNC_7(VAR_6));
   FUNC_6(VAR_0, &VAR_5->ent);
   VAR_5->target_file = VAR_6;
  } else {
   FUNC_4(VAR_6);
  }
  FUNC_8(&VAR_5->source_files,
       VAR_7->two->path);
 }
}
