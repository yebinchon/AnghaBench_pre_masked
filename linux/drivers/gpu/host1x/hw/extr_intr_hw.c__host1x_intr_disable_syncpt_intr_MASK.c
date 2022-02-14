
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct host1x*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct host1x *VAR_0,
          unsigned int VAR_1)
{
 FUNC_3(VAR_0, FUNC_0(VAR_1 % 32),
  FUNC_2(VAR_1 / 32));
 FUNC_3(VAR_0, FUNC_0(VAR_1 % 32),
  FUNC_1(VAR_1 / 32));
}
