
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ieee754sp {int dummy; } ieee754sp ;
struct TYPE_2__ {int nan2008; } ;


 int FUNC_0 (union ieee754sp) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (union ieee754sp) ;

__attribute__((used)) static inline int FUNC_4(union ieee754sp VAR_2)
{
 int VAR_3;

 FUNC_2(FUNC_3(VAR_2));
 VAR_3 = (FUNC_0(VAR_2) & FUNC_1(VAR_0 - 1)) == FUNC_1(VAR_0 - 1);
 return VAR_1.nan2008 ^ VAR_3;
}
