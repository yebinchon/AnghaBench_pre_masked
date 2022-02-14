
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vas_window {int winid; TYPE_1__* vinst; } ;
struct TYPE_2__ {scalar_t__ hvwc_bar_start; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct vas_window *VAR_1,
   u64 *VAR_2, int *VAR_3)
{
 u64 VAR_4;

 VAR_4 = VAR_1->vinst->hvwc_bar_start;
 *VAR_2 = VAR_4 + VAR_1->winid * VAR_0;
 *VAR_3 = VAR_0;
}
