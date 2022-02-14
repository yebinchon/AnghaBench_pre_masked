
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mac_biba {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 struct mac_biba* FUNC_0 (struct label*) ;
 scalar_t__ FUNC_1 (struct mac_biba*,struct mac_biba*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_2, struct label *VAR_3,
    struct mbuf *VAR_4, struct label *VAR_5)
{
 struct mac_biba *VAR_6, *VAR_7;

 if (!VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_0(VAR_3);

 return (FUNC_1(VAR_6, VAR_7) ? 0 : VAR_0);
}
