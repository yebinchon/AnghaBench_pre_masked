
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void *FUNC_8(void *VAR_5)
{
 FUNC_5(VAR_5);
 for (;;) {
  int VAR_6;
  FUNC_0();
  FUNC_2(VAR_4, VAR_2);
  FUNC_1();
  FUNC_6();
  while (VAR_0 < VAR_1 &&
         FUNC_3(VAR_3[VAR_0].type))
   VAR_0++;
  if (VAR_0 >= VAR_1) {
   FUNC_7();
   break;
  }
  VAR_6 = VAR_0++;
  FUNC_7();

  FUNC_4(&VAR_3[VAR_6]);
 }
 return ((void*)0);
}
