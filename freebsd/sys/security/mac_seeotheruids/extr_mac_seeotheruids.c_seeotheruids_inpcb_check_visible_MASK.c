
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct label {int dummy; } ;
struct inpcb {int inp_cred; } ;


 int FUNC_0 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_0, struct inpcb *VAR_1,
    struct label *VAR_2)
{

 return (FUNC_0(VAR_0, VAR_1->inp_cred));
}
