
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int async_cookie_t ;


 int FUNC_0 (struct device*,int ,int) ;
 int FUNC_1 (struct device*,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, async_cookie_t VAR_2)
{
 struct device *VAR_3 = (struct device *)VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, 1);
 if (VAR_4)
  FUNC_1(VAR_3, VAR_0, " async", VAR_4);

 FUNC_2(VAR_3);
}
