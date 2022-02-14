
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int prefix ;
typedef int ipv6addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,char*,int) ;
 int FUNC_1 (char*,int,char*,char*,char const) ;
 char* FUNC_2 (char*,char const*,char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_2, const char *VAR_3, const uint8_t *VAR_4)
{
  uint8_t VAR_5[VAR_1];
  uint8_t VAR_6[VAR_1 + sizeof("/128") - 1];

  if (VAR_4) {
    FUNC_0(VAR_0, &VAR_4[2], VAR_5, sizeof(VAR_5));
    FUNC_1(VAR_6, sizeof(VAR_6), "%s/%d", VAR_5, VAR_4[1]);
  } else
    VAR_6[0] = '\0';
  return FUNC_2(VAR_2, VAR_3, VAR_6);
}
