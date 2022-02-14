
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__ s6_addr; } ;


 int FUNC_0 (unsigned char const*,char const*,int) ;

int
FUNC_1(const struct in6_addr *VAR_0)
{
 static const char VAR_1[] =
  "\x00\x00\x00\x00\x00\x00\x00\x00"
  "\x00\x00\x00\x00\x00\x00\x00\x00";

 const unsigned char *VAR_2 = (const unsigned char *)VAR_0->s6_addr;
 return !FUNC_0(VAR_2, VAR_1, 8) ||
  ((VAR_2[0] & 0xfe) == 0xfc) ||
  (VAR_2[0] == 0xfe && (VAR_2[1] & 0xc0) == 0x80) ||
  (VAR_2[0] == 0xfe && (VAR_2[1] & 0xc0) == 0xc0) ||
  (VAR_2[0] == 0xff);
}
