
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 void* FUNC_1 (void*,int ) ;
 struct platform_device* FUNC_2 (char*,int,int *,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_1)
{
 struct platform_device *VAR_2;

 VAR_2 = FUNC_2("sst-platform", -1, ((void*)0), 0);

 if (FUNC_0(VAR_2)) {
  FUNC_3("failed to create audio platform device\n");
  return ((void*)0);
 }

 return FUNC_1(VAR_1, VAR_0);
}
