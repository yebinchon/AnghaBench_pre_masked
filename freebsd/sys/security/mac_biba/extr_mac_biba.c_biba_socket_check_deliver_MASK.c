
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct mac_biba*,struct mac_biba*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2, struct label *VAR_3,
    struct mbuf *VAR_4, struct label *VAR_5)
{
 struct mac_biba *VAR_6, *VAR_7;
 int VAR_8;

 if (!VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_0(VAR_3);

 FUNC_1(VAR_2);
 VAR_8 = FUNC_3(VAR_6, VAR_7) ? 0 : VAR_0;
 FUNC_2(VAR_2);
 return (VAR_8);
}
