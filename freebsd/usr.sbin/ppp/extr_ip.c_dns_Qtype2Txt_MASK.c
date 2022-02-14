
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;


 char const* FUNC_0 (scalar_t__,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(u_short VAR_0)
{
  static char VAR_1[6];
  struct {
    u_short id;
    const char *txt;
  } VAR_2[] = {

    { 1, "A" }, { 2, "NS" }, { 3, "MD" }, { 4, "MF" }, { 5, "CNAME" },
    { 6, "SOA" }, { 7, "MB" }, { 8, "MG" }, { 9, "MR" }, { 10, "NULL" },
    { 11, "WKS" }, { 12, "PTR" }, { 13, "HINFO" }, { 14, "MINFO" },
    { 15, "MX" }, { 16, "TXT" }, { 17, "RP" }, { 18, "AFSDB" },
    { 19, "X25" }, { 20, "ISDN" }, { 21, "RT" }, { 22, "NSAP" },
    { 23, "NSAP-PTR" }, { 24, "SIG" }, { 25, "KEY" }, { 26, "PX" },
    { 27, "GPOS" }, { 28, "AAAA" }, { 252, "AXFR" }, { 253, "MAILB" },
    { 254, "MAILA" }, { 255, "*" }
  };
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < sizeof VAR_2 / sizeof *VAR_2; VAR_3++)
    if (VAR_2[VAR_3].id == VAR_0)
      return VAR_2[VAR_3].txt;

  return FUNC_0(VAR_0, VAR_1, sizeof VAR_1);
}
