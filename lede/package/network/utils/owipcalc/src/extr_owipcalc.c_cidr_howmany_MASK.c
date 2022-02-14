
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cidr {scalar_t__ prefix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(struct cidr *VAR_1, struct cidr *VAR_2)
{
 if (VAR_0)
  FUNC_0(" ");

 if (VAR_2->prefix < VAR_1->prefix)
  FUNC_0("0");
 else
  FUNC_0("%u", 1 << (VAR_2->prefix - VAR_1->prefix));

 return 1;
}
