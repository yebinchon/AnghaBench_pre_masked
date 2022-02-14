
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_int ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(struct in_addr VAR_2, struct in_addr VAR_3,
    u_short VAR_4, u_short VAR_5, int VAR_6)
{
 u_int VAR_7;

 VAR_7 = VAR_2.s_addr;
 VAR_7 += VAR_3.s_addr;
 if (VAR_6 != VAR_0) {
  VAR_7 += VAR_4;
  VAR_7 += VAR_5;
 }
 VAR_7 += VAR_6;

 return (VAR_7 % VAR_1);
}
