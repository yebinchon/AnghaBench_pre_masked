
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {scalar_t__ mtime; struct pack_window* windows; } ;
struct pack_window {scalar_t__ last_used; scalar_t__ inuse_cnt; struct pack_window* next; } ;



__attribute__((used)) static void FUNC_0(struct packed_git *VAR_0, struct packed_git **VAR_1, struct pack_window **VAR_2, int *VAR_3)
{
 struct pack_window *VAR_4, *VAR_5;
 int VAR_6 = 0;






 if (*VAR_1 && !*VAR_2 && (VAR_0->windows || VAR_0->mtime > (*VAR_1)->mtime))
  return;

 for (VAR_4 = VAR_5 = VAR_0->windows; VAR_4; VAR_4 = VAR_4->next) {






  if (VAR_4->inuse_cnt) {
   if (*VAR_3)
    VAR_6 = 1;
   else
    return;
  }

  if (VAR_4->last_used > VAR_5->last_used)
   VAR_5 = VAR_4;
  if (*VAR_2 && *VAR_3 == VAR_6 &&
      VAR_5->last_used > (*VAR_2)->last_used)
   return;
 }




 *VAR_2 = VAR_5;
 *VAR_1 = VAR_0;
 *VAR_3 = VAR_6;
}
