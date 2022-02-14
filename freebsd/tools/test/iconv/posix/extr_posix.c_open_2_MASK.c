
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 iconv_t VAR_4[VAR_2];
 int VAR_5, VAR_6;

 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4[VAR_5] = FUNC_1("ASCII", "UTF8");
  if (VAR_4[VAR_5] == (iconv_t)-1)
   break;
 }

 VAR_6 = (VAR_4[VAR_5] == (iconv_t)-1) && ((VAR_3 == VAR_1) ||
     (VAR_3 == VAR_0)) ? 0 : 1;
 for (; VAR_5 > 0; VAR_5--)
  FUNC_0(VAR_4[VAR_5]);
 return (VAR_6);
}
