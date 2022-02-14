
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int str_longlen; } ;
struct TYPE_6__ {TYPE_1__ tbl; struct TYPE_6__* child; struct TYPE_6__* next; } ;
typedef TYPE_2__ FILEDESC ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(FILEDESC *VAR_0)
{
 FILEDESC *VAR_1;
 int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->next) {
  if (VAR_1->child != ((void*)0)) {
   if ((VAR_2 = FUNC_1(VAR_1->child)) > VAR_3)
    VAR_3 = VAR_2;
  }
  else {
   FUNC_0(VAR_1);
   if (VAR_1->tbl.str_longlen > (unsigned int)VAR_3)
    VAR_3 = VAR_1->tbl.str_longlen;
  }
 }

 return (VAR_3);
}
