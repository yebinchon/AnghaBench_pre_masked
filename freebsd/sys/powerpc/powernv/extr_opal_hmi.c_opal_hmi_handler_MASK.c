
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct trapframe *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 == VAR_1)
  return (0);

 FUNC_1("HMI handler failed!  OPAL error code: %d\n", VAR_3);

 return (-1);
}
