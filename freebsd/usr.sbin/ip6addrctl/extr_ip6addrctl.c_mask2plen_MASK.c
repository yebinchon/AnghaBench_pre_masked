
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;



__attribute__((used)) static int
FUNC_0(struct sockaddr_in6 *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 u_char *VAR_3, *VAR_4;

 VAR_1 = 0;
 VAR_4 = (u_char *)(VAR_0 + 1);
 for (VAR_3 = (u_char *)(&VAR_0->sin6_addr); VAR_3 < VAR_4; VAR_3++) {
  if (VAR_2 && *VAR_3) {
   goto bad;
  }

  switch (*VAR_3 & 0xff) {
  case 0xff:
   VAR_1 += 8;
   break;
  case 0xfe:
   VAR_1 += 7;
   VAR_2++;
   break;
  case 0xfc:
   VAR_1 += 6;
   VAR_2++;
   break;
  case 0xf8:
   VAR_1 += 5;
   VAR_2++;
   break;
  case 0xf0:
   VAR_1 += 4;
   VAR_2++;
   break;
  case 0xe0:
   VAR_1 += 3;
   VAR_2++;
   break;
  case 0xc0:
   VAR_1 += 2;
   VAR_2++;
   break;
  case 0x80:
   VAR_1 += 1;
   VAR_2++;
   break;
  case 0x00:
   VAR_2++;
   break;
  default:
   goto bad;
   break;
  }
 }
 return(VAR_1);

  bad:
 return(-1);
}
