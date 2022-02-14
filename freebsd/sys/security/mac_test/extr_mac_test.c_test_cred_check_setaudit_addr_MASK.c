
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
struct auditinfo_addr {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2,
    struct auditinfo_addr *VAR_3)
{

 FUNC_1(VAR_2->cr_label, VAR_0);
 FUNC_0(VAR_1);

 return (0);
}
