
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
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static unsigned
FUNC_1(const char *VAR_7)
{
  if (!FUNC_0(VAR_7, "MYADDR", 6) && (VAR_7[6] == '\0' || VAR_7[6] == '/'))
    return VAR_5;
  if (!FUNC_0(VAR_7, "MYADDR6", 7) && (VAR_7[7] == '\0' || VAR_7[7] == '/'))
    return VAR_6;
  if (!FUNC_0(VAR_7, "HISADDR", 7) && (VAR_7[7] == '\0' || VAR_7[7] == '/'))
    return VAR_3;
  if (!FUNC_0(VAR_7, "HISADDR6", 8) && (VAR_7[8] == '\0' || VAR_7[8] == '/'))
    return VAR_4;
  if (!FUNC_0(VAR_7, "DNS0", 4) && (VAR_7[4] == '\0' || VAR_7[4] == '/'))
    return VAR_1;
  if (!FUNC_0(VAR_7, "DNS1", 4) && (VAR_7[4] == '\0' || VAR_7[4] == '/'))
    return VAR_2;

  return VAR_0;
}
