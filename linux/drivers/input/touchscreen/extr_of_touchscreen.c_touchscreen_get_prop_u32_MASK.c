
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char const*,unsigned int*) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_0,
         const char *VAR_1,
         unsigned int VAR_2,
         unsigned int *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5) {
  *VAR_3 = VAR_2;
  return 0;
 }

 *VAR_3 = VAR_4;
 return 1;
}
