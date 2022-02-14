
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 long FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 long VAR_7, VAR_8;





 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7 < 1) {
  FUNC_0("sysconf pages");
  VAR_7 = 1;
 }
 VAR_8 = FUNC_1(VAR_1);
 if (VAR_8 < 1) {
  FUNC_0("sysconf psize");
  VAR_8 = 4096;
 }
 VAR_4 = (unsigned long long) VAR_7 * (unsigned long long) VAR_8;
 VAR_3 = VAR_4 / 2;

 if (VAR_3 < 1024)
  VAR_3 = 1024;
}
