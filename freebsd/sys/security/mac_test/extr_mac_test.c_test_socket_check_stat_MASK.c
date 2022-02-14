
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct label* cr_label; } ;
struct socket {int dummy; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct label*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct ucred *VAR_3, struct socket *VAR_4,
    struct label *VAR_5)
{

 FUNC_1(VAR_3->cr_label, VAR_0);
 FUNC_2(VAR_4);
 FUNC_1(VAR_5, VAR_1);
 FUNC_3(VAR_4);
 FUNC_0(VAR_2);

 return (0);
}
