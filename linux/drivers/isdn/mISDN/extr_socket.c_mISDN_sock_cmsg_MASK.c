
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tv ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct __kernel_old_timeval {int dummy; } ;
struct TYPE_2__ {int cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct msghdr*,int ,int,int,struct __kernel_old_timeval*) ;
 int FUNC_2 (struct sk_buff*,struct __kernel_old_timeval*) ;

__attribute__((used)) static inline void
FUNC_3(struct sock *VAR_2, struct msghdr *VAR_3, struct sk_buff *VAR_4)
{
 struct __kernel_old_timeval VAR_5;

 if (FUNC_0(VAR_2)->cmask & VAR_0) {
  FUNC_2(VAR_4, &VAR_5);
  FUNC_1(VAR_3, VAR_1, VAR_0, sizeof(VAR_5), &VAR_5);
 }
}
