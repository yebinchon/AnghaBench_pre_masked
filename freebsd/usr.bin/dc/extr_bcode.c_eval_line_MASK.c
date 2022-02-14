
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source {TYPE_1__* vtable; } ;
struct TYPE_2__ {char* (* readline ) (struct source*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct source*,int ) ;
 int VAR_0 ;
 char* FUNC_3 (struct source*) ;

__attribute__((used)) static void
FUNC_4(void)
{

 struct source VAR_1;
 char *VAR_2;

 FUNC_0(VAR_0);
 FUNC_2(&VAR_1, VAR_0);
 VAR_2 = (*VAR_1.vtable->readline)(&VAR_1);
 FUNC_1(VAR_2);
}
