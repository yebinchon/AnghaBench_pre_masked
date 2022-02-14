
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (char const*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, const char *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_2, 0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3);
}
