
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vas_window {int wcreds_max; scalar_t__ tx_win; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vas_window*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vas_window *VAR_8)
{
 u64 VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_3(VAR_8, FUNC_1(VAR_7));
 if (VAR_8->tx_win)
  VAR_11 = FUNC_0(VAR_6, VAR_9);
 else
  VAR_11 = FUNC_0(VAR_5, VAR_9);

 if (!VAR_11)
  return;
retry:
 if (VAR_8->tx_win) {
  VAR_9 = FUNC_3(VAR_8, FUNC_1(VAR_2));
  VAR_10 = FUNC_0(VAR_4, VAR_9);
 } else {
  VAR_9 = FUNC_3(VAR_8, FUNC_1(VAR_0));
  VAR_10 = FUNC_0(VAR_3, VAR_9);
 }

 if (VAR_10 < VAR_8->wcreds_max) {
  VAR_9 = 0;
  FUNC_5(VAR_1);
  FUNC_4(FUNC_2(10));
  goto retry;
 }
}
