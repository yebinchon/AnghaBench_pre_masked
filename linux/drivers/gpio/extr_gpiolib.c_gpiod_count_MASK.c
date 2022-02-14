
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char const*) ;
 int FUNC_3 (struct device*,char const*) ;
 int FUNC_4 (struct device*,char const*) ;

int FUNC_5(struct device *VAR_3, const char *VAR_4)
{
 int VAR_5 = -VAR_2;

 if (FUNC_1(VAR_1) && VAR_3 && VAR_3->of_node)
  VAR_5 = FUNC_3(VAR_3, VAR_4);
 else if (FUNC_1(VAR_0) && VAR_3 && FUNC_0(VAR_3))
  VAR_5 = FUNC_2(VAR_3, VAR_4);

 if (VAR_5 < 0)
  VAR_5 = FUNC_4(VAR_3, VAR_4);

 return VAR_5;
}
