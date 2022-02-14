
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 struct mac_lomac* FUNC_0 (struct label*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static int
FUNC_2(struct inpcb *VAR_2, struct label *VAR_3,
    struct mbuf *VAR_4, struct label *VAR_5)
{
 struct mac_lomac *VAR_6, *VAR_7;

 if (!VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_0(VAR_3);

 return (FUNC_1(VAR_6, VAR_7) ? 0 : VAR_0);
}
