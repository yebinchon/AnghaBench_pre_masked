
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;


 short VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 if (VAR_4 & VAR_0)
  VAR_2 |= 1;
 else if (VAR_4 & VAR_1)
  VAR_2 |= 2;
}
