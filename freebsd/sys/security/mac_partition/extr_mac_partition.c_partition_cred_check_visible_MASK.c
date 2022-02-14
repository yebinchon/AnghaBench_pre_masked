
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_1, struct ucred *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->cr_label, VAR_2->cr_label);

 return (VAR_3 == 0 ? 0 : VAR_0);
}
