
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int ti; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static bool FUNC_2(struct multipath *VAR_2, unsigned long VAR_3)
{
 return ((FUNC_1(VAR_0, &VAR_3) !=
   FUNC_1(VAR_1, &VAR_3)) &&
  FUNC_0(VAR_2->ti));
}
