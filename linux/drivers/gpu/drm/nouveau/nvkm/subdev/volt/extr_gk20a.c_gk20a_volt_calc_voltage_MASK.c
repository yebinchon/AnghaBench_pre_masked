
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvb_coef {int dummy; } ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int,int,int,struct cvb_coef const*) ;

__attribute__((used)) static int
FUNC_2(const struct cvb_coef *VAR_0, int VAR_1)
{
 static const int VAR_2 = 1000;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, -10, 100, 10, VAR_0);
 VAR_3 = FUNC_0(VAR_3, VAR_2);

 return VAR_3 * 1000;
}
