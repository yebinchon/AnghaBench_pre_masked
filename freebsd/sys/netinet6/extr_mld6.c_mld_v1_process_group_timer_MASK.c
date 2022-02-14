
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_multi_head {int dummy; } ;
struct in6_multi {scalar_t__ in6m_timer; int in6m_state; } ;


 int FUNC_0 () ;





 int FUNC_1 () ;





 int FUNC_2 (struct in6_multi_head*,struct in6_multi*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct in6_multi_head *VAR_2, struct in6_multi *VAR_3)
{
 int VAR_4;

 FUNC_0();
 FUNC_1();

 if (VAR_3->in6m_timer == 0) {
  VAR_4 = 0;
 } else if (--VAR_3->in6m_timer == 0) {
  VAR_4 = 1;
 } else {
  VAR_0 = 1;
  return;
 }

 switch (VAR_3->in6m_state) {
 case 132:
 case 129:
 case 135:
 case 134:
 case 128:
 case 137:
  break;
 case 131:
  if (VAR_4) {
   VAR_3->in6m_state = 135;
   FUNC_2(VAR_2, VAR_3, VAR_1);
  }
  break;
 case 136:
 case 130:
 case 133:
  break;
 }
}
