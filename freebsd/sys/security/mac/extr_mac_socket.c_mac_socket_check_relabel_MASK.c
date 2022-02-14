
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct socket {int so_label; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ,int,struct ucred*,struct socket*,struct label*) ;
 int FUNC_1 (int ,struct ucred*,struct socket*,int ,struct label*) ;
 int FUNC_2 (struct socket*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_1, struct socket *VAR_2,
    struct label *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2);

 FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_2->so_label, VAR_3);
 FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
