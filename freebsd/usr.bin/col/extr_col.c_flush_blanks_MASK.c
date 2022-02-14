
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_4 = 0;
 VAR_6 = VAR_3;
 if (VAR_6 & 1) {
  if (VAR_2)
   VAR_4 = 1;
  else
   VAR_6++;
 }
 VAR_6 /= 2;
 for (VAR_5 = VAR_6; --VAR_5 >= 0;)
  FUNC_0('\n');
 if (VAR_4) {
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
  if (!VAR_6)
   FUNC_0('\r');
 }
 VAR_3 = 0;
}
