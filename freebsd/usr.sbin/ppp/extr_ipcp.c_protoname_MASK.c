
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (int,int *,int ) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
  static struct {
    int id;
    const char *txt;
  } VAR_1[] = {

    { 1, "IPADDRS" },
    { 2, "COMPPROTO" },
    { 3, "IPADDR" },
    { 129, "PRIDNS" },
    { 130, "PRINBNS" },
    { 131, "SECDNS" },
    { 132, "SECNBNS" }
  };
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < sizeof VAR_1 / sizeof *VAR_1; VAR_2++)
    if (VAR_1[VAR_2].id == VAR_0)
      return VAR_1[VAR_2].txt;

  return FUNC_0(VAR_0, ((void*)0), 0);
}
