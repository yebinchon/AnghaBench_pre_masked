
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int flags; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct multipath*,unsigned long) ;
 scalar_t__ FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static bool FUNC_3(struct multipath *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1->flags);
 return FUNC_2(VAR_0, &VAR_2) || FUNC_1(VAR_1, VAR_2);
}
