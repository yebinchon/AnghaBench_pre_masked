
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int level; struct TYPE_5__* ptnext; TYPE_1__* isoDirRecord; int * parent; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(cd9660node *VAR_0)
{
 cd9660node *VAR_1 = VAR_0;


 if (VAR_0->parent == ((void*)0))
  FUNC_0("debug_print_path_table: Dumping path table contents\n");

 while (VAR_1 != ((void*)0)) {
  if (VAR_1->isoDirRecord->name[0] == '\0')
   FUNC_0("0) (ROOT)\n");
  else
   FUNC_0("%i) %s\n", VAR_1->level,
       VAR_1->isoDirRecord->name);

  VAR_1 = VAR_1->ptnext;
 }
}
