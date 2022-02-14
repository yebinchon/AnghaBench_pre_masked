
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,char) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_2(uint32_t VAR_2, char *VAR_3, char *VAR_4)
{
 char *VAR_5;
 uint32_t VAR_6, VAR_7;

 if (VAR_2 != VAR_0 || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4[0]= '\0';
 VAR_5 = VAR_4;

 VAR_7 = VAR_3[0] << 8;
 VAR_7 += VAR_3[1];
 if (VAR_7 > VAR_1) {
  FUNC_1("Invalid bridge priority %d", VAR_7);
  return (((void*)0));
 } else
  VAR_5 += FUNC_0(VAR_5, "%d.", VAR_3[0]);

 VAR_5 += FUNC_0(VAR_5, "%2.2x", VAR_3[2]);

 for (VAR_6 = 1; VAR_6 < 6; VAR_6++)
  VAR_5 += FUNC_0(VAR_5, ":%2.2x", VAR_3[VAR_6 + 2]);

 return (VAR_4);
}
