
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ git_error_state ;
struct TYPE_7__ {int message; int klass; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 TYPE_5__* FUNC_4 () ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
 git_error_state VAR_0 = {0};

 FUNC_3();

 FUNC_5(42, "Foo: %s", "bar");
 FUNC_1(-1, FUNC_6(&VAR_0, -1));

 FUNC_5(99, "Bar: %s", "foo");

 FUNC_7(&VAR_0);

 FUNC_1(99, FUNC_4()->klass);
 FUNC_2("Bar: foo", FUNC_4()->message);

 FUNC_8(&VAR_0);

 FUNC_0(FUNC_4() == ((void*)0));
}
