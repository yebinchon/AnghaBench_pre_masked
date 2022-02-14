
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ l; } ;
typedef TYPE_1__ kstring_t ;


 int FUNC_0 (char*,TYPE_1__*,char*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(kstring_t *VAR_0, int VAR_1)
{
 char VAR_2[16];

 VAR_0->l = 0;
 FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_2, "%d", VAR_1);
 FUNC_0("kputw()", VAR_0, VAR_2);
}
