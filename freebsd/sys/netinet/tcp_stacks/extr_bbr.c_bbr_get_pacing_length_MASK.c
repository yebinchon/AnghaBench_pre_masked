
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct tcp_bbr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_bbr*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct tcp_bbr *VAR_2, uint16_t VAR_3, uint32_t VAR_4, uint64_t VAR_5)
{
 uint64_t VAR_6, VAR_7, VAR_8;

 if (VAR_4 == 0)
  return (0);
 VAR_3 = FUNC_0(VAR_2, VAR_3);
 VAR_6 = (uint64_t)VAR_1 * (uint64_t)VAR_0;
 VAR_8 = VAR_4;
 VAR_7 = (VAR_8 * VAR_5 * VAR_3) / VAR_6;
 if (VAR_7 == 0)
  VAR_7 = 1;
 return ((uint32_t)VAR_7);
}
