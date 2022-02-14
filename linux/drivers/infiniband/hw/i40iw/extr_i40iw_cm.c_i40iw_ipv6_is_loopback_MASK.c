
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int u6_addr32; } ;
struct in6_addr {TYPE_1__ in6_u; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_3(u32 *VAR_0, u32 *VAR_1)
{
 struct in6_addr VAR_2;

 FUNC_0(VAR_2, VAR_1);
 return !FUNC_2(VAR_0, VAR_1, 16) || FUNC_1(&VAR_2);
}
