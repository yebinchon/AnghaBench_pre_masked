
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static int FUNC_6(int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_4 = FUNC_4(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_3);





  if (FUNC_5()->board_type == VAR_0)
   FUNC_3(VAR_4,
           FUNC_2(VAR_4));
 }

 return 0;
}
