
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 iconv_t VAR_2;

 VAR_1 = 0;
 VAR_2 = FUNC_1("nonexisting", "foobar");

 if ((VAR_2 == (iconv_t)-1) && (VAR_1 == VAR_0))
  return (0);
 else {
  FUNC_0(VAR_2);
  return (1);
 }
}
