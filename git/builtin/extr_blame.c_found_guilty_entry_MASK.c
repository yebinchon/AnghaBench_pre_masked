
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct progress_info {int blamed_lines; int progress; } ;
struct blame_origin {TYPE_2__* commit; } ;
struct blame_entry {int s_lno; int lno; int num_lines; struct blame_origin* suspect; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct blame_origin*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,int,int) ;
 int VAR_1 ;
 int FUNC_5 (struct blame_origin*) ;

__attribute__((used)) static void FUNC_6(struct blame_entry *VAR_2, void *VAR_3)
{
 struct progress_info *VAR_4 = (struct progress_info *)VAR_3;

 if (VAR_0) {
  struct blame_origin *VAR_5 = VAR_2->suspect;

  FUNC_4("%s %d %d %d\n",
         FUNC_3(&VAR_5->commit->object.oid),
         VAR_2->s_lno + 1, VAR_2->lno + 1, VAR_2->num_lines);
  FUNC_1(VAR_5, 0);
  FUNC_5(VAR_5);
  FUNC_2(VAR_1, "stdout");
 }
 VAR_4->blamed_lines += VAR_2->num_lines;
 FUNC_0(VAR_4->progress, VAR_4->blamed_lines);
}
