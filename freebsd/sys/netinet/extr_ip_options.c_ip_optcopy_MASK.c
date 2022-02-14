
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ip {int ip_hl; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int*,int*,int) ;

int
FUNC_3(struct ip *VAR_3, struct ip *VAR_4)
{
 u_char *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_5 = (u_char *)(VAR_3 + 1);
 VAR_6 = (u_char *)(VAR_4 + 1);
 VAR_9 = (VAR_3->ip_hl << 2) - sizeof (struct ip);
 for (; VAR_9 > 0; VAR_9 -= VAR_8, VAR_5 += VAR_8) {
  VAR_7 = VAR_5[0];
  if (VAR_7 == VAR_0)
   break;
  if (VAR_7 == VAR_1) {

   *VAR_6++ = VAR_1;
   VAR_8 = 1;
   continue;
  }

  FUNC_1(VAR_9 >= VAR_2 + sizeof(*VAR_5),
      ("ip_optcopy: malformed ipv4 option"));
  VAR_8 = VAR_5[VAR_2];
  FUNC_1(VAR_8 >= VAR_2 + sizeof(*VAR_5) && VAR_8 <= VAR_9,
      ("ip_optcopy: malformed ipv4 option"));


  if (VAR_8 > VAR_9)
   VAR_8 = VAR_9;
  if (FUNC_0(VAR_7)) {
   FUNC_2(VAR_5, VAR_6, VAR_8);
   VAR_6 += VAR_8;
  }
 }
 for (VAR_8 = VAR_6 - (u_char *)(VAR_4+1); VAR_8 & 0x3; VAR_8++)
  *VAR_6++ = VAR_0;
 return (VAR_8);
}
