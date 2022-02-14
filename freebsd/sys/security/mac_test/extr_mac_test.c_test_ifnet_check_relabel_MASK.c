
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct label {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct label*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_3, struct ifnet *VAR_4,
    struct label *VAR_5, struct label *VAR_6)
{

 FUNC_1(VAR_3->cr_label, VAR_0);
 FUNC_1(VAR_5, VAR_1);
 FUNC_1(VAR_6, VAR_1);
 FUNC_0(VAR_2);

 return (0);
}
