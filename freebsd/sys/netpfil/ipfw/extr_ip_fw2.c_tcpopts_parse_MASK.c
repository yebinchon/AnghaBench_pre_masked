
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct tcphdr {int th_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;




 int FUNC_0 (int*) ;

__attribute__((used)) static int
FUNC_1(struct tcphdr *VAR_6, uint16_t *VAR_7)
{
 u_char *VAR_8 = (u_char *)(VAR_6 + 1);
 int VAR_9, VAR_10 = 0;
 int VAR_11 = (VAR_6->th_off << 2) - sizeof(struct tcphdr);

 for (; VAR_11 > 0; VAR_11 -= VAR_9, VAR_8 += VAR_9) {
  int VAR_12 = VAR_8[0];
  if (VAR_12 == VAR_4)
   break;
  if (VAR_12 == VAR_5)
   VAR_9 = 1;
  else {
   VAR_9 = VAR_8[1];
   if (VAR_9 <= 0)
    break;
  }

  switch (VAR_12) {
  default:
   break;

  case 132:
   VAR_10 |= VAR_0;
   if (VAR_7 != ((void*)0))
    *VAR_7 = FUNC_0(VAR_8 + 2);
   break;

  case 128:
   VAR_10 |= VAR_3;
   break;

  case 130:
  case 131:
   VAR_10 |= VAR_1;
   break;

  case 129:
   VAR_10 |= VAR_2;
   break;
  }
 }
 return (VAR_10);
}
