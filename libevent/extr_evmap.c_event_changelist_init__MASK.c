
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist {scalar_t__ n_changes; scalar_t__ changes_size; int * changes; } ;



void
FUNC_0(struct event_changelist *VAR_0)
{
 VAR_0->changes = ((void*)0);
 VAR_0->changes_size = 0;
 VAR_0->n_changes = 0;
}
