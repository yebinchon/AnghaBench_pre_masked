
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int str; struct TYPE_5__* next; } ;
typedef TYPE_1__ strlst_t ;


 scalar_t__ FUNC_0 (TYPE_1__**,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(strlst_t **VAR_0, strlst_t **VAR_1)
{
 int VAR_2 = 0;
 strlst_t *VAR_3;
 for (VAR_3 = *VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if ( FUNC_0(VAR_0, VAR_3->str) ) {
   FUNC_2("Will compile library `%s' dynamically", VAR_3->str);
   FUNC_1(VAR_3->str, "");
   VAR_2++;
  }
 return VAR_2;
}
