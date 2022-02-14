
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2)
{
 int VAR_3 = 0;
 FUNC_1(VAR_0);
 FUNC_3(VAR_1, ((void*)0));
 FUNC_0(VAR_1);

 VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_0, ((void*)0));

 return VAR_3 ? 0 : 1;
}
