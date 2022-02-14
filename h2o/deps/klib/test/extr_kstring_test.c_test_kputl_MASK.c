
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ l; } ;
typedef TYPE_1__ kstring_t ;


 int FUNC_0 (char*,TYPE_1__*,char*) ;
 int FUNC_1 (long,TYPE_1__*) ;
 int FUNC_2 (char*,char*,long) ;

void FUNC_3(kstring_t *VAR_0, long VAR_1)
{
 char VAR_2[24];

 VAR_0->l = 0;
 FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_2, "%ld", VAR_1);
 FUNC_0("kputl()", VAR_0, VAR_2);
}
