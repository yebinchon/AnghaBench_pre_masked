
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int FUNC_0 () ;
 int FUNC_1 (char const*,int,char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_2(
 mode_t VAR_0, mode_t VAR_1, const char *VAR_2, int VAR_3)
{

 if (!FUNC_0()) {
  VAR_0 &= 0600;
  VAR_1 &= 0600;
 }

 FUNC_1(
  VAR_2, VAR_3, "expected_mode != actual_mode", 1,
  "%07o", (int)VAR_0, (int)(VAR_1 & 0777));
}
