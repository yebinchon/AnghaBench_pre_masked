
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip {int dummy; } ;
typedef scalar_t__ (* lima_poll_func_t ) (struct lima_ip*) ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline int FUNC_5(struct lima_ip *VAR_1, lima_poll_func_t VAR_2,
        int VAR_3, int VAR_4)
{
 ktime_t VAR_5 = FUNC_0(FUNC_2(), VAR_4);

 FUNC_3(VAR_3);
 while (1) {
  if (VAR_2(VAR_1))
   return 0;

  if (VAR_4 && FUNC_1(FUNC_2(), VAR_5) > 0)
   return -VAR_0;

  if (VAR_3)
   FUNC_4((VAR_3 >> 2) + 1, VAR_3);
 }
 return 0;
}
