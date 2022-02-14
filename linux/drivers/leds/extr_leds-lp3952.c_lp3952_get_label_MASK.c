
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char const*,char const**) ;
 int FUNC_1 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, const char *VAR_2, char *VAR_3)
{
 int VAR_4;
 const char *VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3, VAR_5, VAR_0);
 return 0;
}
