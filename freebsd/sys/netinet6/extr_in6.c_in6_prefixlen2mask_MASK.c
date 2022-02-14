
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int* s6_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,int) ;
 int FUNC_1 (int ,char*,int) ;

void
FUNC_2(struct in6_addr *VAR_1, int VAR_2)
{
 u_char VAR_3[8] = {0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff};
 int VAR_4, VAR_5, VAR_6;


 if (0 > VAR_2 || VAR_2 > 128) {
  FUNC_1(VAR_0, "in6_prefixlen2mask: invalid prefix length(%d)\n",
      VAR_2);
  return;
 }

 FUNC_0(VAR_1, sizeof(*VAR_1));
 VAR_4 = VAR_2 / 8;
 VAR_5 = VAR_2 % 8;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_1->s6_addr[VAR_6] = 0xff;
 if (VAR_5)
  VAR_1->s6_addr[VAR_4] = VAR_3[VAR_5 - 1];
}
