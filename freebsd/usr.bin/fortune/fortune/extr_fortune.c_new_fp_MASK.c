
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int datfd; int fd; int * posfile; int * datfile; int * parent; int * child; int * prev; int * next; int read_tbl; int percent; int * inf; int pos; } ;
typedef TYPE_1__ FILEDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static FILEDESC *
FUNC_1(void)
{
 FILEDESC *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 VAR_3->datfd = -1;
 VAR_3->pos = VAR_2;
 VAR_3->inf = ((void*)0);
 VAR_3->fd = -1;
 VAR_3->percent = VAR_1;
 VAR_3->read_tbl = VAR_0;
 VAR_3->next = ((void*)0);
 VAR_3->prev = ((void*)0);
 VAR_3->child = ((void*)0);
 VAR_3->parent = ((void*)0);
 VAR_3->datfile = ((void*)0);
 VAR_3->posfile = ((void*)0);

 return (VAR_3);
}
