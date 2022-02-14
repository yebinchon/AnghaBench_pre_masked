
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xive_cpu {int dummy; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_6, struct xive_cpu *VAR_7)
{
 s64 VAR_8;
 u32 VAR_9;

 if (VAR_4 == VAR_3)
  return;


 FUNC_0(VAR_5 + VAR_2);


 VAR_9 = VAR_4 + VAR_6;
 for (;;) {
  VAR_8 = FUNC_2(VAR_9, 0, 0);
  if (VAR_8 != VAR_0)
   break;
  FUNC_1(VAR_1);
 }
}
