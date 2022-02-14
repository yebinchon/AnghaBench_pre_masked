
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct object*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct object* FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_7, VAR_8;


 FUNC_7();






 if (VAR_0 && (VAR_3 || VAR_6)) {
  FUNC_2(VAR_1, ((void*)0), 0);
  FUNC_3(VAR_2, ((void*)0), 0);
 }


 VAR_8 = FUNC_6();
 if (VAR_5)
  FUNC_4(VAR_4, FUNC_0("Checking connectivity (%d objects)"), VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct object *VAR_9 = FUNC_5(VAR_7);

  if (VAR_9)
   FUNC_1(VAR_9);
 }
}
