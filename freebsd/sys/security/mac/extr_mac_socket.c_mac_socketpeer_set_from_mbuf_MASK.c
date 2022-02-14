
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_peerlabel; } ;
struct mbuf {int dummy; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ,struct mbuf*,struct label*,struct socket*,int ) ;
 struct label* FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_2(struct mbuf *VAR_2, struct socket *VAR_3)
{
 struct label *VAR_4;

 if (VAR_0 == 0)
  return;

 VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3,
     VAR_3->so_peerlabel);
}
