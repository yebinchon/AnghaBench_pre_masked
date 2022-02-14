
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int nonagle; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct tcp_sock *VAR_2, int VAR_3)
{
 return (VAR_3 & VAR_0) || (VAR_2->nonagle & VAR_1);
}
