
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vas_window {int winid; TYPE_1__* vinst; } ;
struct TYPE_2__ {int paste_base_addr; int paste_win_id_shift; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct vas_window *VAR_1, u64 *VAR_2, int *VAR_3)
{
 int VAR_4;
 u64 VAR_5, VAR_6;

 VAR_5 = VAR_1->vinst->paste_base_addr;
 VAR_6 = VAR_1->vinst->paste_win_id_shift;
 VAR_4 = VAR_1->winid;

 *VAR_2 = VAR_5 + (VAR_4 << VAR_6);
 if (VAR_3)
  *VAR_3 = VAR_0;

 FUNC_0("Txwin #%d: Paste addr 0x%llx\n", VAR_4, *VAR_2);
}
