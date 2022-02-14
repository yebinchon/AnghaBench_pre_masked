
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buf; } ;
struct TYPE_6__ {int buf; } ;
struct commit_info {TYPE_3__ author; TYPE_2__ author_mail; } ;
struct blame_scoreboard {int path; struct blame_entry* ent; } ;
struct blame_origin {TYPE_4__* commit; int path; } ;
struct blame_entry {int s_lno; int num_lines; int lno; struct blame_origin* suspect; struct blame_entry* next; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct blame_scoreboard*,struct blame_entry*) ;
 int FUNC_1 (struct commit_info*) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_4__*,struct commit_info*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,struct blame_origin*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct blame_scoreboard *VAR_10, int *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 unsigned VAR_14 = 0;
 struct blame_entry *VAR_15;
 int VAR_16 = (VAR_4 < 0);
 int VAR_17 = VAR_0;

 for (VAR_15 = VAR_10->ent; VAR_15; VAR_15 = VAR_15->next) {
  struct blame_origin *VAR_18 = VAR_15->suspect;
  int VAR_19;

  if (VAR_16)
   VAR_17 = FUNC_6(VAR_17, VAR_18);
  if (FUNC_4(VAR_18->path, VAR_10->path))
   *VAR_11 |= VAR_3;
  VAR_19 = FUNC_5(VAR_18->path);
  if (VAR_6 < VAR_19)
   VAR_6 = VAR_19;
  if (!(VAR_18->commit->object.flags & VAR_1)) {
   struct commit_info VAR_20;
   VAR_18->commit->object.flags |= VAR_1;
   FUNC_3(VAR_18->commit, &VAR_20, 1);
   if (*VAR_11 & VAR_2)
    VAR_19 = FUNC_7(VAR_20.author_mail.buf);
   else
    VAR_19 = FUNC_7(VAR_20.author.buf);
   if (VAR_5 < VAR_19)
    VAR_5 = VAR_19;
   FUNC_1(&VAR_20);
  }
  VAR_19 = VAR_15->s_lno + VAR_15->num_lines;
  if (VAR_12 < VAR_19)
   VAR_12 = VAR_19;
  VAR_19 = VAR_15->lno + VAR_15->num_lines;
  if (VAR_13 < VAR_19)
   VAR_13 = VAR_19;
  if (VAR_14 < FUNC_0(VAR_10, VAR_15))
   VAR_14 = FUNC_0(VAR_10, VAR_15);
 }
 VAR_8 = FUNC_2(VAR_12);
 VAR_7 = FUNC_2(VAR_13);
 VAR_9 = FUNC_2(VAR_14);

 if (VAR_16)

  VAR_4 = VAR_17 + 1;
}
