
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packed_git {int windows; struct packed_git* next; } ;
struct pack_window {int next; scalar_t__ len; int base; } ;
struct TYPE_4__ {TYPE_1__* objects; } ;
struct TYPE_3__ {struct packed_git* packed_git; } ;


 int FUNC_0 (struct pack_window*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct packed_git*,struct packed_git**,struct pack_window**,struct pack_window**) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct packed_git *VAR_3)
{
 struct packed_git *VAR_4, *VAR_5 = ((void*)0);
 struct pack_window *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

 if (VAR_3)
  FUNC_2(VAR_3, &VAR_5, &VAR_6, &VAR_7);
 for (VAR_4 = VAR_2->objects->packed_git; VAR_4; VAR_4 = VAR_4->next)
  FUNC_2(VAR_4, &VAR_5, &VAR_6, &VAR_7);
 if (VAR_5) {
  FUNC_1(VAR_6->base, VAR_6->len);
  VAR_0 -= VAR_6->len;
  if (VAR_7)
   VAR_7->next = VAR_6->next;
  else
   VAR_5->windows = VAR_6->next;
  FUNC_0(VAR_6);
  VAR_1--;
  return 1;
 }
 return 0;
}
