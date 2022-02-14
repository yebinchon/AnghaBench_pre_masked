
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct firmware const**,char const*,struct device*,void*,size_t,int) ;
 scalar_t__ FUNC_2 (struct device*,char const*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(const struct firmware **VAR_4, const char *VAR_5,
     struct device *VAR_6, void *VAR_7, size_t VAR_8)
{
 int VAR_9;

 if (FUNC_2(VAR_6, VAR_5))
  return -VAR_0;

 FUNC_0(VAR_3);
 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_2 | VAR_1);
 FUNC_3(VAR_3);
 return VAR_9;
}
