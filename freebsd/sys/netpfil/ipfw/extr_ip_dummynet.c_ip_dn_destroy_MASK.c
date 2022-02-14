
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int evheap; int fshash; int schedhash; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(int VAR_7)
{
 FUNC_0();

 VAR_1 = 1;


 if (VAR_7) {
  FUNC_3("removing last instance\n");
  VAR_5 = ((void*)0);
  VAR_6 = ((void*)0);
 }

 FUNC_6();
 FUNC_1();

 FUNC_4(&VAR_3);
 FUNC_8(VAR_4, &VAR_2);
 FUNC_9(VAR_4);

 FUNC_5(VAR_0.schedhash, 0);
 FUNC_5(VAR_0.fshash, 0);
 FUNC_7(&VAR_0.evheap);

 FUNC_2();
}
