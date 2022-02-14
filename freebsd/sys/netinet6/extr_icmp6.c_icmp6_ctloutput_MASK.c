
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int sopt_level; int sopt_dir; int sopt_name; int sopt_valsize; } ;
struct socket {int dummy; } ;
struct inpcb {struct icmp6_filter* in6p_icmp6filt; } ;
struct icmp6_filter {int dummy; } ;
typedef int ic6f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int VAR_3 ;


 int FUNC_4 (struct sockopt*,struct icmp6_filter*,int,int) ;
 int FUNC_5 (struct sockopt*,struct icmp6_filter*,int) ;
 struct inpcb* FUNC_6 (struct socket*) ;

int
FUNC_7(struct socket *VAR_4, struct sockopt *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 struct inpcb *VAR_8 = FUNC_6(VAR_4);
 int VAR_9, VAR_10, VAR_11;

 if (VAR_5) {
  VAR_9 = VAR_5->sopt_level;
  VAR_10 = VAR_5->sopt_dir;
  VAR_11 = VAR_5->sopt_name;
  VAR_7 = VAR_5->sopt_valsize;
 } else
  VAR_9 = VAR_10 = VAR_11 = VAR_7 = 0;

 if (VAR_9 != VAR_3) {
  return VAR_0;
 }

 switch (VAR_10) {
 case 128:
  switch (VAR_11) {
  case 130:
      {
   struct icmp6_filter VAR_12;

   if (VAR_7 != sizeof(VAR_12)) {
    VAR_6 = VAR_1;
    break;
   }
   VAR_6 = FUNC_4(VAR_5, &VAR_12, VAR_7, VAR_7);
   if (VAR_6 == 0) {
    FUNC_2(VAR_8);
    *VAR_8->in6p_icmp6filt = VAR_12;
    FUNC_3(VAR_8);
   }
   break;
      }

  default:
   VAR_6 = VAR_2;
   break;
  }
  break;

 case 129:
  switch (VAR_11) {
  case 130:
      {
   struct icmp6_filter VAR_13;

   FUNC_0(VAR_8);
   VAR_13 = *VAR_8->in6p_icmp6filt;
   FUNC_1(VAR_8);
   VAR_6 = FUNC_5(VAR_5, &VAR_13, sizeof(VAR_13));
   break;
      }

  default:
   VAR_6 = VAR_2;
   break;
  }
  break;
 }

 return (VAR_6);
}
