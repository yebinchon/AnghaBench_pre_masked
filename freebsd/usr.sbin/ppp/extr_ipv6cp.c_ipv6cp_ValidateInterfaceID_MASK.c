
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ** u_char ;
struct ipv6cp {int **** his_ifid; int **** my_ifid; } ;
struct TYPE_2__ {int len; int id; } ;
struct fsm_opt {int *** data; TYPE_1__ hdr; } ;
struct fsm_decode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsm_decode*,struct fsm_opt*) ;
 int FUNC_1 (struct fsm_decode*,struct fsm_opt*) ;
 scalar_t__ FUNC_2 (int ***,int ***,int) ;
 int FUNC_3 (int **,int ***,int) ;
 int FUNC_4 (int ***,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct ipv6cp *VAR_2, u_char *VAR_3,
      struct fsm_decode *VAR_4)
{
  struct fsm_opt VAR_5;
  u_char VAR_6[VAR_0];

  FUNC_4(VAR_6, 0, VAR_0);

  if (FUNC_2(VAR_3, VAR_6, VAR_0) != 0
      && FUNC_2(VAR_3, *VAR_2->my_ifid, VAR_0) != 0)
    FUNC_3(VAR_2->his_ifid, VAR_3, VAR_0);

  VAR_5.hdr.id = VAR_1;
  VAR_5.hdr.len = VAR_0 + 2;
  FUNC_3(*VAR_5.data, &VAR_2->his_ifid, VAR_0);
  if (FUNC_2(VAR_3, *VAR_2->his_ifid, VAR_0) == 0)
    FUNC_0(VAR_4, &VAR_5);
  else
    FUNC_1(VAR_4, &VAR_5);
}
