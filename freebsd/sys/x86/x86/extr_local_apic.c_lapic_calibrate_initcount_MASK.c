
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct lapic {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct lapic*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct lapic *VAR_5)
{
 u_long VAR_6;


 VAR_4 = 2;

 do {
  FUNC_3(VAR_4);
  FUNC_2(VAR_5, VAR_0);
  FUNC_0(1000000);
  VAR_6 = VAR_0 - FUNC_1(VAR_1);
  if (VAR_6 != VAR_0)
   break;
  VAR_4 <<= 1;
 } while (VAR_4 <= 128);
 if (VAR_4 > 128)
  FUNC_4("lapic: Divisor too big");
 if (VAR_2) {
  FUNC_5("lapic: Divisor %lu, Frequency %lu Hz\n",
      VAR_4, VAR_6);
 }
 VAR_3 = VAR_6;
}
