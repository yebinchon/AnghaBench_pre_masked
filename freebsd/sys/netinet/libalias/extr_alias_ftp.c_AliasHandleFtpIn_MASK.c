
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int th_off; int th_dport; } ;
struct libalias {scalar_t__ true_port; int true_addr; } ;
struct ip {int ip_hl; int ip_len; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (struct libalias*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct alias_link*) ;
 int FUNC_2 (struct alias_link*) ;
 int FUNC_3 (struct alias_link*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct libalias*,char*,int) ;
 scalar_t__ FUNC_5 (struct libalias*,char*,int) ;
 int FUNC_6 (struct alias_link*,int) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct ip*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct libalias *VAR_5,
    struct ip *VAR_6,
    struct alias_link *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12;
 struct tcphdr *VAR_13;


 VAR_13 = (struct tcphdr *)FUNC_8(VAR_6);
 VAR_8 = (VAR_6->ip_hl + VAR_13->th_off) << 2;
 VAR_9 = FUNC_9(VAR_6->ip_len);
 VAR_10 = VAR_9 - VAR_8;


 VAR_12 = (char *)VAR_6;
 VAR_12 += VAR_8;





 VAR_11 = FUNC_3(VAR_7);
 if (VAR_10 <= VAR_3 && (VAR_11 & VAR_4) == 0 &&
     FUNC_9(VAR_13->th_dport) == VAR_0 &&
     (FUNC_5(VAR_5, VAR_12, VAR_10) != 0 ||
      FUNC_4(VAR_5, VAR_12, VAR_10) != 0)) {





  FUNC_0(VAR_5, FUNC_2(VAR_7), VAR_5->true_addr,
      FUNC_1(VAR_7), FUNC_7(VAR_0 - 1),
      FUNC_7(VAR_5->true_port), VAR_1, VAR_2);
 }

 if (VAR_10) {
  VAR_12 = (char *)VAR_6;
  VAR_9 = FUNC_9(VAR_6->ip_len);


  if (VAR_12[VAR_9 - 2] == '\r' && VAR_12[VAR_9 - 1] == '\n')
   VAR_11 &= ~VAR_4;
  else
   VAR_11 |= VAR_4;
  FUNC_6(VAR_7, VAR_11);
       }
}
