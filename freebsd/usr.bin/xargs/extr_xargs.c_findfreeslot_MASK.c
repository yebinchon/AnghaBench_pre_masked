
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_1;

 if ((VAR_1 = FUNC_1(VAR_0)) < 0)
  FUNC_0(1, "internal error: no free pid slot");
 return (VAR_1);
}
