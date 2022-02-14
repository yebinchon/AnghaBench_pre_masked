
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_reg {int val; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_reg*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, char *VAR_2[], int VAR_3, const char *VAR_4)
{
 struct ch_reg VAR_5;

 (void) VAR_2;

 if (VAR_1 == VAR_3) {
  if (FUNC_0(VAR_4, VAR_0, &VAR_5) < 0)
   FUNC_1(1, "get qsets");
  FUNC_2("%u\n", VAR_5.val);
  return 0;
 }

 return -1;
}
