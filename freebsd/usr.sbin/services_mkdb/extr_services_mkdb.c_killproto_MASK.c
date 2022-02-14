
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int size; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 () ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void
FUNC_2(DBT *VAR_0)
{
 char *VAR_1, *VAR_2 = VAR_0->data;

 if ((VAR_1 = FUNC_1(VAR_2, '/')) == ((void*)0))
  FUNC_0();
 *VAR_1++ = '\0';
 VAR_0->size = VAR_1 - VAR_2;
}
