
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xive_q {int dummy; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, struct xive_q *VAR_3, u8 VAR_4)
{
 s64 VAR_5;


 for (;;) {
  VAR_5 = FUNC_1(VAR_2, VAR_4, 0, 0, 0);
  if (VAR_5 != VAR_0)
   break;
  FUNC_0(VAR_1);
 }
 if (VAR_5)
  FUNC_2("Error %lld disabling queue for prio %d\n", VAR_5, VAR_4);
}
