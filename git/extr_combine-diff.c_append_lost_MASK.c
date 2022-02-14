
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; struct lline* lost_tail; struct lline* lost_head; } ;
struct sline {TYPE_1__ plost; } ;
struct lline {int len; unsigned long parent_map; struct lline* next; struct lline* prev; } ;


 int FUNC_0 (struct lline*,char const*,char const*,int) ;

__attribute__((used)) static void FUNC_1(struct sline *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 struct lline *VAR_4;
 unsigned long VAR_5 = (1UL<<VAR_1);
 if (VAR_2[VAR_3-1] == '\n')
  VAR_3--;

 FUNC_0(VAR_4, VAR_2, VAR_2, VAR_3);
 VAR_4->len = VAR_3;
 VAR_4->next = ((void*)0);
 VAR_4->prev = VAR_0->plost.lost_tail;
 if (VAR_4->prev)
  VAR_4->prev->next = VAR_4;
 else
  VAR_0->plost.lost_head = VAR_4;
 VAR_0->plost.lost_tail = VAR_4;
 VAR_0->plost.len++;
 VAR_4->parent_map = VAR_5;
}
