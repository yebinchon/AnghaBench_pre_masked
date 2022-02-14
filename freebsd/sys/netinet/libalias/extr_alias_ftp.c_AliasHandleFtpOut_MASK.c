
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int th_off; int th_dport; } ;
struct TYPE_3__ {int s_addr; } ;
struct libalias {TYPE_1__ true_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct ip {int ip_hl; int ip_len; TYPE_2__ ip_src; } ;
struct alias_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct alias_link*) ;
 int VAR_6 ;
 int FUNC_1 (struct libalias*,struct ip*,struct alias_link*,int,int) ;
 scalar_t__ FUNC_2 (struct libalias*,char*,int) ;
 scalar_t__ FUNC_3 (struct libalias*,char*,int) ;
 scalar_t__ FUNC_4 (struct libalias*,char*,int) ;
 scalar_t__ FUNC_5 (struct libalias*,char*,int) ;
 int FUNC_6 (struct alias_link*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct ip*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(
    struct libalias *VAR_8,
    struct ip *VAR_9,
    struct alias_link *VAR_10,
    int VAR_11 )

{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 char *VAR_16;
 struct tcphdr *VAR_17;
 int VAR_18;


 VAR_17 = (struct tcphdr *)FUNC_7(VAR_9);
 VAR_12 = (VAR_9->ip_hl + VAR_17->th_off) << 2;
 VAR_13 = FUNC_8(VAR_9->ip_len);
 VAR_14 = VAR_13 - VAR_12;


 VAR_16 = (char *)VAR_9;
 VAR_16 += VAR_12;





 VAR_15 = FUNC_0(VAR_10);
 if (VAR_14 <= VAR_6 && !(VAR_15 & VAR_7)) {
  VAR_18 = VAR_5;

  if (FUNC_8(VAR_17->th_dport) == VAR_2) {



   if (FUNC_5(VAR_8, VAR_16, VAR_14))
    VAR_18 = VAR_4;
   else if (FUNC_4(VAR_8, VAR_16, VAR_14))
    VAR_18 = VAR_3;
  } else {



   if (FUNC_2(VAR_8, VAR_16, VAR_14))
    VAR_18 = VAR_0;
   else if (FUNC_3(VAR_8, VAR_16, VAR_14)) {
    VAR_18 = VAR_1;
    VAR_8->true_addr.s_addr = VAR_9->ip_src.s_addr;
   }
  }

  if (VAR_18 != VAR_5)
   FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11, VAR_18);
 }


 if (VAR_14) {
  VAR_16 = (char *)VAR_9;
  VAR_13 = FUNC_8(VAR_9->ip_len);

  if (VAR_16[VAR_13 - 2] == '\r' && VAR_16[VAR_13 - 1] == '\n')
   VAR_15 &= ~VAR_7;
  else
   VAR_15 |= VAR_7;
  FUNC_6(VAR_10, VAR_15);
 }
}
