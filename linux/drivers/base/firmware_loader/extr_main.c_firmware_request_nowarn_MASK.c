
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct firmware const**,char const*,struct device*,int *,int ,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(const struct firmware **VAR_3, const char *VAR_4,
       struct device *VAR_5)
{
 int VAR_6;


 FUNC_0(VAR_2);
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0), 0,
    VAR_1 | VAR_0);
 FUNC_2(VAR_2);
 return VAR_6;
}
