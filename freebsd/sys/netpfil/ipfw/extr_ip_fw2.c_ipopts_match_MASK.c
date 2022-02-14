
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ip {int ip_hl; } ;
typedef int ipfw_insn ;


 int VAR_0 ;

 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(struct ip *VAR_8, ipfw_insn *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 u_char *VAR_12 = (u_char *)(VAR_8 + 1);
 int VAR_13 = (VAR_8->ip_hl << 2) - sizeof (struct ip);

 for (; VAR_13 > 0; VAR_13 -= VAR_10, VAR_12 += VAR_10) {
  int VAR_14 = VAR_12[VAR_3];

  if (VAR_14 == VAR_0)
   break;
  if (VAR_14 == VAR_1)
   VAR_10 = 1;
  else {
   VAR_10 = VAR_12[VAR_2];
   if (VAR_10 <= 0 || VAR_10 > VAR_13)
    return 0;
  }
  switch (VAR_14) {

  default:
   break;

  case 131:
   VAR_11 |= VAR_4;
   break;

  case 129:
   VAR_11 |= VAR_6;
   break;

  case 130:
   VAR_11 |= VAR_5;
   break;

  case 128:
   VAR_11 |= VAR_7;
   break;
  }
 }
 return (FUNC_0(VAR_9, VAR_11));
}
