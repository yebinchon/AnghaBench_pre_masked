
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
   return 0;

 return 1;
}
