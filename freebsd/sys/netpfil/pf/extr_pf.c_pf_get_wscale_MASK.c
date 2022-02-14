
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct tcphdr {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int sa_family_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct mbuf*,int,int*,int,int *,int *,int ) ;

__attribute__((used)) static u_int8_t
FUNC_1(struct mbuf *VAR_2, int VAR_3, u_int16_t VAR_4, sa_family_t VAR_5)
{
 int VAR_6;
 u_int8_t VAR_7[60];
 u_int8_t *VAR_8, VAR_9;
 u_int8_t VAR_10 = 0;

 VAR_6 = VAR_4 << 2;
 if (VAR_6 <= sizeof(struct tcphdr))
  return (0);
 if (!FUNC_0(VAR_2, VAR_3, VAR_7, VAR_6, ((void*)0), ((void*)0), VAR_5))
  return (0);
 VAR_8 = VAR_7 + sizeof(struct tcphdr);
 VAR_6 -= sizeof(struct tcphdr);
 while (VAR_6 >= 3) {
  switch (*VAR_8) {
  case 130:
  case 129:
   ++VAR_8;
   --VAR_6;
   break;
  case 128:
   VAR_10 = VAR_8[2];
   if (VAR_10 > VAR_1)
    VAR_10 = VAR_1;
   VAR_10 |= VAR_0;

  default:
   VAR_9 = VAR_8[1];
   if (VAR_9 < 2)
    VAR_9 = 2;
   VAR_6 -= VAR_9;
   VAR_8 += VAR_9;
   break;
  }
 }
 return (VAR_10);
}
