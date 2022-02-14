
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(const struct in6_addr *VAR_0, int VAR_1)
{
 int VAR_2 = 0, VAR_3;
 const u_char *VAR_4 = (const u_char *)VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_4++) {
  if (*VAR_4 != 0xff)
   break;
  VAR_2 += 8;
 }
 if (VAR_3 < VAR_1) {
  switch (*VAR_4) {

  case 0xfe: do { VAR_2 += 7; break; } while (0); break;
  case 0xfc: do { VAR_2 += 6; break; } while (0); break;
  case 0xf8: do { VAR_2 += 5; break; } while (0); break;
  case 0xf0: do { VAR_2 += 4; break; } while (0); break;
  case 0xe0: do { VAR_2 += 3; break; } while (0); break;
  case 0xc0: do { VAR_2 += 2; break; } while (0); break;
  case 0x80: do { VAR_2 += 1; break; } while (0); break;

  }
 }
 return VAR_2;
}
