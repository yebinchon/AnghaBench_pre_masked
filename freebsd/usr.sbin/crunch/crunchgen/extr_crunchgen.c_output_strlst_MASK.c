
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; struct TYPE_3__* next; } ;
typedef TYPE_1__ strlst_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (char*) ;

void
FUNC_2(FILE *VAR_0, strlst_t *VAR_1)
{
 for (; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  if ( FUNC_1(VAR_1->str) )
   FUNC_0(VAR_0, " %s", VAR_1->str);
 FUNC_0(VAR_0, "\n");
}
