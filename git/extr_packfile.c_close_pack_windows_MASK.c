
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct pack_window* windows; int pack_name; } ;
struct pack_window {struct pack_window* next; scalar_t__ len; int base; scalar_t__ inuse_cnt; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pack_window*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct packed_git *VAR_2)
{
 while (VAR_2->windows) {
  struct pack_window *VAR_3 = VAR_2->windows;

  if (VAR_3->inuse_cnt)
   FUNC_0("pack '%s' still has open windows to it",
       VAR_2->pack_name);
  FUNC_2(VAR_3->base, VAR_3->len);
  VAR_0 -= VAR_3->len;
  VAR_1--;
  VAR_2->windows = VAR_3->next;
  FUNC_1(VAR_3);
 }
}
