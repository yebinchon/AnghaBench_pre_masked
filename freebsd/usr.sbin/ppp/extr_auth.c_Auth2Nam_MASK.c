
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;




 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(u_short VAR_0, u_char VAR_1)
{
  static char VAR_2[10];

  switch (VAR_0) {
  case 128:
    return "PAP";
  case 129:
    FUNC_0(VAR_2, sizeof VAR_2, "CHAP 0x%02x", VAR_1);
    return VAR_2;
  case 0:
    return "none";
  }
  return "unknown";
}
