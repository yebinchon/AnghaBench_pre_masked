
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_label; } ;
struct mbuf {int dummy; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ,int,struct socket*,struct mbuf*) ;
 int FUNC_1 (int ,struct socket*,int ,struct mbuf*,struct label*) ;
 struct label* FUNC_2 (struct mbuf*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_3(struct socket *VAR_2, struct mbuf *VAR_3)
{
 struct label *VAR_4;
 int VAR_5;

 if (VAR_0 == 0)
  return (0);

 VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_1, VAR_2, VAR_2->so_label, VAR_3,
     VAR_4);
 FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3);

 return (VAR_5);
}
