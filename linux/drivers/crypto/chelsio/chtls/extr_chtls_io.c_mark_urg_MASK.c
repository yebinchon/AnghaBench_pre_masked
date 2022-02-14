
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int write_seq; int snd_up; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct tcp_sock *VAR_5, int VAR_6,
       struct sk_buff *VAR_7)
{
 if (FUNC_1(VAR_6 & VAR_0)) {
  VAR_5->snd_up = VAR_5->write_seq;
  FUNC_0(VAR_7)->flags = VAR_4 |
      VAR_1 |
      VAR_3 |
      VAR_2;
 }
}
