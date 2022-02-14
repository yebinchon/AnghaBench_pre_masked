
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef scalar_t__ int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int ,char*,int ,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(int64_t VAR_5)
{
 char VAR_6[7];
 int VAR_7;

 if (!VAR_4) {
  FUNC_3(" %6ju", (uintmax_t)FUNC_1(VAR_5));
  return;
 }
 VAR_7 = VAR_3 | VAR_2;
 if (VAR_5 != 0)
  VAR_7 |= VAR_1;
 FUNC_2(VAR_6, sizeof(VAR_6) - (VAR_5 < 0 ? 0 : 1),
     FUNC_0(VAR_5), "", VAR_0, VAR_7);
 (void)FUNC_3("%7s", VAR_6);
}
