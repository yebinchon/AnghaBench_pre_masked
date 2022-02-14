
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 struct resource* FUNC_1 (struct platform_device*,int ,char const*) ;
 unsigned long FUNC_2 (struct resource*) ;

__attribute__((used)) static unsigned long FUNC_3(struct platform_device *VAR_1,
        const char *VAR_2)
{
 struct resource *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (!VAR_3) {
  FUNC_0("failed to get memory resource: %s\n", VAR_2);
  return 0;
 }

 return FUNC_2(VAR_3);
}
