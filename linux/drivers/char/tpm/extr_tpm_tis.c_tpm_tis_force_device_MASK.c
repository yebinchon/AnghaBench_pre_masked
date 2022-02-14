
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; int end; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct resource const*) ;

 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;

 int VAR_0 ;
 struct platform_device* VAR_1 ;
 struct platform_device* FUNC_3 (char*,int,struct resource const*,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct platform_device *VAR_2;
 static const struct resource VAR_3[] = {
  {
   .start = 0xFED40000,
   .end = 0xFED40000 + 128 - 1,
   .flags = 129,
  },
 };

 if (!VAR_0)
  return 0;





 VAR_2 = FUNC_3("tpm_tis", -1, VAR_3,
            FUNC_0(VAR_3));
 if (FUNC_1(VAR_2))
  return FUNC_2(VAR_2);
 VAR_1 = VAR_2;

 return 0;
}
