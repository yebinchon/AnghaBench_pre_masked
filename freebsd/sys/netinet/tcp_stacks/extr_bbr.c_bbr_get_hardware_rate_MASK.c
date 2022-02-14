
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tcp_bbr {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_bbr*) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static uint64_t
FUNC_1(struct tcp_bbr *VAR_3)
{
 uint64_t VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 VAR_4 *= (uint64_t)VAR_2[VAR_0];
 VAR_4 /= (uint64_t)VAR_1;
 return(VAR_4);
}
