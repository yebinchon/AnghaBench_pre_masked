
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct physical {int dummy; } ;
struct ipv6cp {int my_ifid; } ;
struct fsm_opt {int data; } ;
struct fsm {int reqid; int link; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct fsm_opt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipv6cp*,int ) ;
 int VAR_3 ;
 struct ipv6cp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (struct fsm*,int ,int ,int *,int,int ) ;
 struct physical* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct physical*) ;

__attribute__((used)) static void
FUNC_7(struct fsm *VAR_4)
{

  struct physical *VAR_5 = FUNC_4(VAR_4->link);
  struct ipv6cp *VAR_6 = FUNC_2(VAR_4);
  u_char VAR_7[VAR_1+2];
  struct fsm_opt *VAR_8;

  VAR_8 = (struct fsm_opt *)VAR_7;

  if ((VAR_5 && !FUNC_6(VAR_5)) || !FUNC_1(VAR_6, VAR_3)) {
    FUNC_5(VAR_8->data, VAR_6->my_ifid, VAR_1);
    FUNC_0(VAR_3, VAR_1 + 2, VAR_8);
  }

  FUNC_3(VAR_4, VAR_0, VAR_4->reqid, VAR_7, (u_char *)VAR_8 - VAR_7,
             VAR_2);
}
