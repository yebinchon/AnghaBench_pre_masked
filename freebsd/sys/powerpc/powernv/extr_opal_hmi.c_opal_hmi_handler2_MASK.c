
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trapframe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int
FUNC_4(struct trapframe *VAR_3)
{
 uint64_t VAR_4;
 int VAR_5;

 VAR_4 = 0;
 VAR_5 = FUNC_0(VAR_0, FUNC_3(&VAR_4));

 if (VAR_4 & VAR_1)
  FUNC_1("TOD/TB recovery failure");

 if (VAR_5 == VAR_2)
  return (0);

 FUNC_2("HMI handler failed!  OPAL error code: %d\n", VAR_5);

 return (-1);
}
