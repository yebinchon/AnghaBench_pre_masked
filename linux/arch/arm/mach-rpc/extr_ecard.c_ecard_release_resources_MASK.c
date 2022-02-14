
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct expansion_card*,int) ;
 int FUNC_1 (struct expansion_card*,int) ;
 int FUNC_2 (struct expansion_card*,int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct expansion_card *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_0(VAR_1, VAR_2))
   FUNC_3(FUNC_2(VAR_1, VAR_2),
        FUNC_1(VAR_1, VAR_2));
}
