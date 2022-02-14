
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;


 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,struct mac_mls*) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_0, struct label *VAR_1,
    struct mbuf *VAR_2, struct label *VAR_3)
{
 struct mac_mls *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_4, VAR_5);
}
