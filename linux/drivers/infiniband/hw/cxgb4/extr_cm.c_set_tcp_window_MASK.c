
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int dummy; } ;
struct c4iw_ep {int rcv_win; int snd_win; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct c4iw_ep *VAR_2, struct port_info *VAR_3)
{
 VAR_2->snd_win = VAR_1;
 VAR_2->rcv_win = VAR_0;
 FUNC_0("snd_win %d rcv_win %d\n",
   VAR_2->snd_win, VAR_2->rcv_win);
}
