
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_children; int fd; char* path; char* name; char* datfile; char* posfile; int read_tbl; int was_pos_file; int * inf; int percent; struct TYPE_4__* parent; struct TYPE_4__* child; struct TYPE_4__* next; } ;
typedef TYPE_1__ FILEDESC ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char**,char**,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int VAR_5 ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(FILEDESC *VAR_6, char *VAR_7)
{
 char *VAR_8;
 FILEDESC *VAR_9, *VAR_10;
 int VAR_11;
 char *VAR_12, *VAR_13;

 if (VAR_6->child != ((void*)0))
  return;
 if (!FUNC_2(VAR_7, &VAR_12, &VAR_13, VAR_0))
  return;
 if ((VAR_11 = FUNC_4(VAR_7, VAR_2)) < 0)
  return;
 FUNC_0(1, (VAR_5, "adding \"%s\" because of -a\n", VAR_7));
 VAR_9 = FUNC_3();
 VAR_10 = FUNC_3();
 *VAR_9 = *VAR_6;

 VAR_6->num_children = 2;
 VAR_6->child = VAR_9;
 VAR_9->next = VAR_10;
 VAR_10->next = ((void*)0);
 VAR_9->child = VAR_10->child = ((void*)0);
 VAR_9->parent = VAR_10->parent = VAR_6;

 VAR_6->fd = -1;
 VAR_9->percent = VAR_10->percent = VAR_1;

 VAR_10->fd = VAR_11;
 VAR_10->inf = ((void*)0);
 VAR_10->path = VAR_7;
 if ((VAR_8 = FUNC_5(VAR_7, '/')) == ((void*)0))
  VAR_10->name = VAR_7;
 else
  VAR_10->name = ++VAR_8;
 VAR_10->datfile = VAR_12;
 VAR_10->posfile = VAR_13;
 VAR_10->read_tbl = 0;
 if (VAR_4)
  VAR_10->was_pos_file = (FUNC_1(VAR_10->posfile, VAR_3) >= 0);
}
