
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 struct device* FUNC_2 (int ,int *,int ,int *,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_2(VAR_1, ((void*)0), FUNC_0(VAR_0, VAR_2), ((void*)0),
       "cpu%d", VAR_2);
 return FUNC_1(VAR_3);
}
