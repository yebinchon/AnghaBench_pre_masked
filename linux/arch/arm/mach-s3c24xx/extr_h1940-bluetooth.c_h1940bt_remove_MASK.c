
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rfkill* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (struct rfkill*) ;
 int FUNC_6 (struct rfkill*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct rfkill *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0, ((void*)0));
 FUNC_1(FUNC_0(1));

 if (VAR_1) {
  FUNC_6(VAR_1);
  FUNC_5(VAR_1);
 }
 VAR_1 = ((void*)0);

 FUNC_2(0);

 return 0;
}
