
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pathspec {int dummy; } ;
struct grep_opt {scalar_t__ status_only; TYPE_1__* repo; } ;
struct dir_struct {int nr; TYPE_2__** entries; int flags; } ;
typedef int dir ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,struct pathspec const*,int ,int *) ;
 int FUNC_1 (struct dir_struct*,int ,struct pathspec const*) ;
 int FUNC_2 (struct grep_opt*,int ) ;
 int FUNC_3 (struct dir_struct*,int ,int) ;
 int FUNC_4 (struct dir_struct*) ;

__attribute__((used)) static int FUNC_5(struct grep_opt *VAR_1, const struct pathspec *VAR_2,
     int VAR_3, int VAR_4)
{
 struct dir_struct VAR_5;
 int VAR_6, VAR_7 = 0;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 if (!VAR_4)
  VAR_5.flags |= VAR_0;
 if (VAR_3)
  FUNC_4(&VAR_5);

 FUNC_1(&VAR_5, VAR_1->repo->index, VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_5.nr; VAR_6++) {
  if (!FUNC_0(VAR_1->repo->index, VAR_5.entries[VAR_6], VAR_2, 0, ((void*)0)))
   continue;
  VAR_7 |= FUNC_2(VAR_1, VAR_5.entries[VAR_6]->name);
  if (VAR_7 && VAR_1->status_only)
   break;
 }
 return VAR_7;
}
