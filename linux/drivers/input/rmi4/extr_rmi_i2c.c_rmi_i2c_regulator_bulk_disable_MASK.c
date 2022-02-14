
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_i2c_xport {int supplies; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct rmi_i2c_xport *VAR_1 = VAR_0;

 FUNC_1(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
}
