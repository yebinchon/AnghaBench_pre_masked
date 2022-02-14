
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_write_stack {char* path; struct tree_write_stack* next; int buf; } ;
struct TYPE_2__ {int hexsz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct tree_write_stack *VAR_1,
  const char *VAR_2)
{
 struct tree_write_stack *VAR_3;
 FUNC_0(!VAR_1->next);
 FUNC_0(VAR_1->path[0] == '\0' && VAR_1->path[1] == '\0');
 VAR_3 = (struct tree_write_stack *)
  FUNC_2(sizeof(struct tree_write_stack));
 VAR_3->next = ((void*)0);
 FUNC_1(&VAR_3->buf, 256 * (32 + VAR_0->hexsz));
 VAR_3->path[0] = VAR_3->path[1] = '\0';
 VAR_1->next = VAR_3;
 VAR_1->path[0] = VAR_2[0];
 VAR_1->path[1] = VAR_2[1];
}
