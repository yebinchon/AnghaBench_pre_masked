
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (int) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (int ,int) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (unsigned int) ;
 struct platform_device** VAR_2 ;

__attribute__((used)) static struct platform_device *FUNC_5(unsigned int VAR_3)
{
 int VAR_4, VAR_5 = FUNC_4(VAR_3);
 struct platform_device *VAR_6;

 if (VAR_5 < 0)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_2(VAR_0, VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_4 = FUNC_1(VAR_6);
 if (VAR_4) {
  FUNC_3(VAR_6);
  return FUNC_0(VAR_4);
 }

 VAR_2[VAR_5] = VAR_6;
 return VAR_6;
}
