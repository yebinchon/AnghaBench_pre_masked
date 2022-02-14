
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char* const,char* const*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int,char*) ;
 int VAR_4 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_7(char * const VAR_5[])
{
 int VAR_6, VAR_7;
 pid_t VAR_8;

 VAR_8 = FUNC_3();

 if (VAR_8 < 0) {
  FUNC_4(VAR_4,
   "System error: `fork()` call failed (%d) - %s\n",
   VAR_3, FUNC_5(VAR_3));
  FUNC_2(-1);
 }

 if (VAR_8 == 0) {
  FUNC_1(VAR_5[0], VAR_5);
 }

 do {
  VAR_7 = FUNC_6(VAR_8, &VAR_6, VAR_2);
 } while (VAR_7 < 0 && (VAR_3 == VAR_0 || VAR_3 == VAR_1));

 return FUNC_0(VAR_6);
}
