
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ssif_info {int req_flags; scalar_t__ watch_timeout; int watch_timer; scalar_t__ stopping; } ;


 scalar_t__ FUNC_0 (struct ssif_info*) ;
 struct ssif_info* FUNC_1 (int ,struct timer_list*,int ) ;
 unsigned long* FUNC_2 (struct ssif_info*,unsigned long*) ;
 int FUNC_3 (struct ssif_info*,unsigned long*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,scalar_t__) ;
 struct ssif_info* VAR_1 ;
 int FUNC_5 (struct ssif_info*,unsigned long*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct ssif_info *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5, *VAR_6;

 if (VAR_4->stopping)
  return;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_4->watch_timeout) {
  FUNC_4(&VAR_4->watch_timer,
     VAR_0 + VAR_4->watch_timeout);
  if (FUNC_0(VAR_4)) {
   FUNC_5(VAR_4, VAR_6);
   return;
  }
  VAR_4->req_flags = 1;
 }
 FUNC_3(VAR_4, VAR_6);
}
