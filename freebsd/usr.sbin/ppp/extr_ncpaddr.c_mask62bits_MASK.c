
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int dummy; } ;



__attribute__((used)) static int
FUNC_0(const struct in6_addr *VAR_0)
{
  const u_char VAR_1[] = { 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe };
  const u_char *VAR_2, *VAR_3, *VAR_4;
  int VAR_5, VAR_6;

  VAR_3 = (const u_char *)VAR_0;
  for (VAR_5 = 0, VAR_4 = VAR_3 + 16; VAR_3 < VAR_4 && *VAR_3 == 0xff; VAR_3++)
    VAR_5 += 8;

  if (VAR_3 < VAR_4) {
    for (VAR_2 = VAR_1, VAR_6 = 0; VAR_2 < VAR_1 + sizeof VAR_1; VAR_2++, VAR_6++)
      if (*VAR_2 == *VAR_3) {
        VAR_5 += VAR_6;
        break;
      }
  }

  return VAR_5;
}
