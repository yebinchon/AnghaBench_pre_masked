
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef scalar_t__ LINENUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_5(off_t VAR_6, LINENUM VAR_7)
{
 size_t VAR_8;

 if (VAR_2 > VAR_6)
  FUNC_0("Internal error: seek %lld>%lld\n",
     (long long)VAR_2, (long long)VAR_6);
 if (VAR_5 && VAR_2 < VAR_6) {
  FUNC_1(VAR_4, VAR_2, VAR_0);
  FUNC_4("The text leading up to this was:\n--------------------------\n");
  while (FUNC_2(VAR_4) < VAR_6) {
   VAR_8 = FUNC_3(0);
   if (VAR_8 == 0)
    FUNC_0("Unexpected end of file\n");
   FUNC_4("|%s", VAR_1);
  }
  FUNC_4("--------------------------\n");
 } else
  FUNC_1(VAR_4, VAR_6, VAR_0);
 VAR_3 = VAR_7 - 1;
}
