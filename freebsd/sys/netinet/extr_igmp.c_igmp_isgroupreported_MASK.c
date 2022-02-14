
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct in_addr const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline int
FUNC_3(const struct in_addr VAR_1)
{

 if (FUNC_1(VAR_1) ||
     ((!VAR_0 && FUNC_0(FUNC_2(VAR_1.s_addr)))))
  return (0);

 return (1);
}
