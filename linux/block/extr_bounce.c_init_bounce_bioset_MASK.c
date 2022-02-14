
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 static bool VAR_4;
 int VAR_5;

 if (VAR_4)
  return;

 VAR_5 = FUNC_1(&VAR_2, VAR_1, 0, VAR_0);
 FUNC_0(VAR_5);
 if (FUNC_2(&VAR_2, VAR_1))
  FUNC_0(1);

 VAR_5 = FUNC_1(&VAR_3, VAR_1, 0, 0);
 FUNC_0(VAR_5);
 VAR_4 = 1;
}
