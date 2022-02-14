
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int rc_delrate; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline uint64_t
FUNC_1(struct tcp_bbr *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->r_ctl.rc_delrate);

 return (VAR_1);
}
