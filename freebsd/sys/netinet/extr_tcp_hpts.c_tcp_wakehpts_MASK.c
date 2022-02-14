
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_hpts_entry {int p_hpts_wake_scheduled; int ie_cookie; } ;


 int FUNC_0 (struct tcp_hpts_entry*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct tcp_hpts_entry *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->p_hpts_wake_scheduled == 0) {
  VAR_0->p_hpts_wake_scheduled = 1;
  FUNC_1(VAR_0->ie_cookie, 0);
 }
}
