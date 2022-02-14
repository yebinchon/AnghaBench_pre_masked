
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int fd; short flags; void (* cb ) (int,short,void*) ;void* cbarg; } ;



void
FUNC_0(struct event *VAR_0, int VAR_1, short VAR_2,
 void (*VAR_3)(int, short, void *), void *VAR_4)
{
 VAR_0->fd = VAR_1;
 VAR_0->flags = VAR_2;
 VAR_0->cb = VAR_3;
 VAR_0->cbarg = VAR_4;
}
