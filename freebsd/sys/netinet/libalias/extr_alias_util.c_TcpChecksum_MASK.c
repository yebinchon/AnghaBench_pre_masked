
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef scalar_t__ u_char ;
struct tcphdr {int dummy; } ;
struct ip {int ip_hl; scalar_t__ ip_p; int ip_src; int ip_dst; int ip_len; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct ip*) ;
 int FUNC_2 (int ) ;

u_short
FUNC_3(struct ip *VAR_0)
{
 u_short *VAR_1;
 struct tcphdr *VAR_2;
 int VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = VAR_0->ip_hl << 2;
 VAR_4 = FUNC_2(VAR_0->ip_len) - VAR_3;

 VAR_2 = (struct tcphdr *)FUNC_1(VAR_0);
 VAR_1 = (u_short *) VAR_2;


 VAR_5 = VAR_4;
 VAR_6 = 0;
 while (VAR_5 > 1) {
  VAR_6 += *VAR_1++;
  VAR_5 -= 2;
 }
 if (VAR_5 == 1) {
  VAR_7 = 0;
  ((u_char *) & VAR_7)[0] = *(u_char *) VAR_1;
  ((u_char *) & VAR_7)[1] = 0;
  VAR_6 += VAR_7;
 }

 VAR_1 = (void *)&VAR_0->ip_dst;
 VAR_6 += *VAR_1++;
 VAR_6 += *VAR_1;
 VAR_1 = (void *)&VAR_0->ip_src;
 VAR_6 += *VAR_1++;
 VAR_6 += *VAR_1;
 VAR_6 += FUNC_0((u_short) VAR_4);
 VAR_6 += FUNC_0((u_short) VAR_0->ip_p);


 VAR_6 = (VAR_6 >> 16) + (VAR_6 & 0xffff);
 VAR_6 += (VAR_6 >> 16);


 return ((u_short) ~ VAR_6);
}
