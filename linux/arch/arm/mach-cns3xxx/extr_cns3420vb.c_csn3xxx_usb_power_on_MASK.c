
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 if (FUNC_2(&VAR_4) == 1) {
  FUNC_4(1 << VAR_2);
  FUNC_3(1 << VAR_1);
  FUNC_5(1 << VAR_3);
  FUNC_1((FUNC_0(VAR_0) | (0X2 << 24)),
   VAR_0);
 }

 return 0;
}
