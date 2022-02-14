
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;

int FUNC_7(void)
{
 int VAR_2, VAR_3;
 int VAR_4, VAR_5;

 FUNC_1(&VAR_2, &VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_6 = VAR_2 + VAR_5;

  if (VAR_6 == VAR_3)
   continue;

  VAR_4 = FUNC_3(VAR_6, "camif");
  if (!VAR_4)
   VAR_4 = FUNC_5(VAR_6, FUNC_0(2));
  if (VAR_4) {
   FUNC_4("failed to configure GPIO %d\n", VAR_6);
   for (--VAR_5; VAR_5 >= 0; VAR_5--)
    FUNC_2(VAR_6--);
   return VAR_4;
  }
  FUNC_6(VAR_6, VAR_1);
 }

 return 0;
}
