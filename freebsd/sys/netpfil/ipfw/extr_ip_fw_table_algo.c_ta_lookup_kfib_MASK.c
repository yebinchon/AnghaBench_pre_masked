
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct table_info {int data; } ;
struct nhop6_basic {int dummy; } ;
struct nhop4_basic {int dummy; } ;
struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct in_addr,int ,int ,struct nhop4_basic*) ;
 int FUNC_1 (int ,struct in6_addr*,int ,int ,int ,struct nhop6_basic*) ;

__attribute__((used)) static int
FUNC_2(struct table_info *VAR_1, void *VAR_2, uint32_t VAR_3,
    uint32_t *VAR_4)
{







 int VAR_5;

 VAR_5 = VAR_0;
 if (VAR_5 != 0)
  return (0);

 *VAR_4 = 0;

 return (1);
}
