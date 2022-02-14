
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vas_window {int winid; scalar_t__ tx_win; } ;


 int FUNC_0 (char*,char*,int ,char*,void*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct vas_window *VAR_0, char *VAR_1,
   void *VAR_2, u64 VAR_3)
{
 if (VAR_3)
  FUNC_0("%swin #%d: %s reg %p, val 0x%016llx\n",
    VAR_0->tx_win ? "Tx" : "Rx", VAR_0->winid, VAR_1,
    VAR_2, VAR_3);
}
