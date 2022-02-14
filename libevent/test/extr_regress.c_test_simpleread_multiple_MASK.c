
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct event*,int ,int ,int ,int *) ;
 int FUNC_4 (int) ;
 int * VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct event VAR_5, VAR_6;


 FUNC_5("Simple read to multiple evens: ");

 if (FUNC_9(VAR_3[0], VAR_2, FUNC_7(VAR_2)+1) < 0) {
  FUNC_8("write");
 }

 FUNC_6(VAR_3[0], VAR_0);

 FUNC_3(&VAR_5, VAR_3[1], VAR_1, VAR_4, ((void*)0));
 if (FUNC_1(&VAR_5, ((void*)0)) == -1)
  FUNC_4(1);
 FUNC_3(&VAR_6, VAR_3[1], VAR_1, VAR_4, ((void*)0));
 if (FUNC_1(&VAR_6, ((void*)0)) == -1)
  FUNC_4(1);
 FUNC_2();

 FUNC_0();
}
