
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_fd; scalar_t__ pack_size; struct pack_window* windows; } ;
struct pack_window {scalar_t__ len; int offset; } ;


 int FUNC_0 (struct packed_git*) ;

int FUNC_1(struct packed_git *VAR_0)
{

 if (VAR_0->pack_fd != -1)
  return 1;





 if (VAR_0->windows) {
  struct pack_window *VAR_1 = VAR_0->windows;

  if (!VAR_1->offset && VAR_1->len == VAR_0->pack_size)
   return 1;
 }


 return !FUNC_0(VAR_0);
}
