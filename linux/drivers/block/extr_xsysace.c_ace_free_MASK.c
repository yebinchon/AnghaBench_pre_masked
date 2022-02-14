
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ace_device {int dummy; } ;


 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (struct device*,char*,struct device*) ;
 struct ace_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct ace_device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct ace_device *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_0, "ace_free(%p)\n", VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_1);
  FUNC_3(VAR_0, ((void*)0));
  FUNC_4(VAR_1);
 }
}
