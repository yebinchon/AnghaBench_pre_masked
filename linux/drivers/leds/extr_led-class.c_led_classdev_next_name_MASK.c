
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,size_t,char*,char const*,unsigned int) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, char *VAR_3,
      size_t VAR_4)
{
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;
 struct device *VAR_7;

 FUNC_3(VAR_3, VAR_2, VAR_4);

 while ((VAR_6 < VAR_4) &&
        (VAR_7 = FUNC_0(VAR_1, VAR_3))) {
  FUNC_1(VAR_7);
  VAR_6 = FUNC_2(VAR_3, VAR_4, "%s_%u", VAR_2, ++VAR_5);
 }

 if (VAR_6 >= VAR_4)
  return -VAR_0;

 return VAR_5;
}
