
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
FUNC_0(struct in_addr VAR_2,
    u_short VAR_3,
    int VAR_4)
{
 u_int VAR_5;

 VAR_5 = VAR_2.s_addr;
 if (VAR_4 != VAR_0)
  VAR_5 += VAR_3;
 VAR_5 += VAR_4;
 return (VAR_5 % VAR_1);
}
