
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcp {int last_cong; int old_maxB; int undo_old_maxB; int maxRTT; int undo_maxRTT; int undo_last_cong; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(struct htcp *VAR_0)
{
 VAR_0->undo_last_cong = VAR_0->last_cong;
 VAR_0->undo_maxRTT = VAR_0->maxRTT;
 VAR_0->undo_old_maxB = VAR_0->old_maxB;
 VAR_0->last_cong = FUNC_0();
}
