
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ lmce_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(void)
{
 u64 VAR_7;

 if (VAR_6.lmce_disabled)
  return 0;

 FUNC_0(VAR_5, VAR_7);





 if ((VAR_7 & (VAR_3 | VAR_2)) !=
     (VAR_3 | VAR_2))
  return 0;






 FUNC_0(VAR_4, VAR_7);
 if ((VAR_7 & (VAR_1 | VAR_0)) ==
     (VAR_1 | VAR_0))
  return 1;

 return 0;
}
