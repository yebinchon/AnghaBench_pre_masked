
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_label; } ;
typedef int gid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_2, gid_t VAR_3, gid_t VAR_4,
 gid_t VAR_5)
{

 FUNC_1(VAR_2->cr_label, VAR_0);
 FUNC_0(VAR_1);

 return (0);
}
