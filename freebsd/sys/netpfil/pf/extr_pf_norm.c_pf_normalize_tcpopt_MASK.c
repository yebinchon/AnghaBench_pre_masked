
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_char ;
struct tcphdr {int th_off; int th_sum; } ;
struct pf_rule {int max_mss; } ;
struct mbuf {int dummy; } ;
typedef int sa_family_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,int,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*,int ,int ,int ,int ) ;
 int FUNC_4 (struct mbuf*,int,int*,int,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct pf_rule *VAR_3, struct mbuf *VAR_4, struct tcphdr *VAR_5,
    int VAR_6, sa_family_t VAR_7)
{
 u_int16_t *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;
 int VAR_13 = 0;
 u_char VAR_14[VAR_2];
 u_char *VAR_15 = VAR_14;

 VAR_9 = VAR_5->th_off << 2;
 VAR_11 = VAR_9 - sizeof(struct tcphdr);

 if (VAR_11 > 0 && !FUNC_4(VAR_4, VAR_6 + sizeof(*VAR_5), VAR_14, VAR_11,
     ((void*)0), ((void*)0), VAR_7))
  return (VAR_13);

 for (; VAR_11 > 0; VAR_11 -= VAR_12, VAR_15 += VAR_12) {
  VAR_10 = VAR_15[0];
  if (VAR_10 == VAR_0)
   break;
  if (VAR_10 == VAR_1)
   VAR_12 = 1;
  else {
   if (VAR_11 < 2)
    break;
   VAR_12 = VAR_15[1];
   if (VAR_12 < 2 || VAR_12 > VAR_11)
    break;
  }
  switch (VAR_10) {
  case 128:
   VAR_8 = (u_int16_t *)(VAR_15 + 2);
   if ((FUNC_2(*VAR_8)) > VAR_3->max_mss) {
    VAR_5->th_sum = FUNC_3(VAR_4,
        VAR_5->th_sum, *VAR_8, FUNC_0(VAR_3->max_mss), 0);
    *VAR_8 = FUNC_0(VAR_3->max_mss);
    VAR_13 = 1;
   }
   break;
  default:
   break;
  }
 }

 if (VAR_13)
  FUNC_1(VAR_4, VAR_6 + sizeof(*VAR_5), VAR_9 - sizeof(*VAR_5), VAR_14);

 return (VAR_13);
}
