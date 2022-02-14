
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ip {int ip_off; int ip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct ip *VAR_4)
{







 if (VAR_3 && (VAR_4->ip_off & FUNC_1(VAR_0)) == FUNC_1(VAR_0))
  VAR_4->ip_id = 0;
 else if (VAR_1)
  VAR_4->ip_id = FUNC_2();
 else {
  FUNC_0(VAR_2, 1);
  VAR_4->ip_id = FUNC_1((*(uint64_t *)FUNC_3(VAR_2)) & 0xffff);
 }
}
