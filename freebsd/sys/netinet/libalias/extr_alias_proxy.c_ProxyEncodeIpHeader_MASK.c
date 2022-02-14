
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_int ;
typedef int u_char ;
struct tcphdr {int th_sport; } ;
struct ip {int ip_hl; int ip_sum; scalar_t__ ip_len; int ip_dst; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct ip*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ip*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ip*) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(struct ip *VAR_4,
    int VAR_5)
{



 u_char VAR_6[8];






 (void)VAR_5;


 if (VAR_4->ip_hl > (0x0f - 2))
  return;


 {
  u_char *VAR_7;
  struct tcphdr *VAR_8;

  VAR_7 = (u_char *) VAR_4;
  VAR_7 += 20;
  FUNC_6(VAR_7 + 8, VAR_7, FUNC_7(VAR_4->ip_len) - 20);

  VAR_6[0] = 0x64;
  VAR_6[1] = 8;

  FUNC_6(&VAR_6[2], (u_char *) & VAR_4->ip_dst, 4);

  VAR_8 = (struct tcphdr *)FUNC_5(VAR_4);
  FUNC_6(&VAR_6[6], (u_char *) & VAR_8->th_sport, 2);

  FUNC_6(VAR_7, VAR_6, 8);
 }


 {
  int VAR_9;
  int VAR_10;
  u_short *VAR_11;

  VAR_11 = (u_short *) VAR_6;
  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
   VAR_10 -= *(VAR_11++);

  VAR_11 = (u_short *) VAR_4;
  VAR_10 += *VAR_11;
  VAR_4->ip_hl += 2;
  VAR_10 -= *VAR_11;

  VAR_10 += VAR_4->ip_len;
  VAR_4->ip_len = FUNC_4(FUNC_7(VAR_4->ip_len) + 8);
  VAR_10 -= VAR_4->ip_len;

  FUNC_0(VAR_10, VAR_4->ip_sum);
 }







}
