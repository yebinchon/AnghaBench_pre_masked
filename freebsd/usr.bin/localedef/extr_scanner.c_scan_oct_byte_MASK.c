
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_0, VAR_1, VAR_2;
 int VAR_3;

 VAR_3 = 0;

 VAR_0 = FUNC_1();
 if (!FUNC_0(VAR_0)) {
  FUNC_3("malformed octal digit");
  return (0);
 }
 VAR_3 = VAR_0 - '0';
 VAR_1 = FUNC_1();
 if (!FUNC_0(VAR_1)) {
  FUNC_3("malformed octal digit");
  return (0);
 }
 VAR_3 *= 8;
 VAR_3 += (VAR_1 - '0');
 VAR_2 = FUNC_1();
 if (!FUNC_0(VAR_2)) {
  FUNC_2(VAR_2);
 } else {
  VAR_3 *= 8;
  VAR_3 += (VAR_2 - '0');
 }
 return (VAR_3);
}
