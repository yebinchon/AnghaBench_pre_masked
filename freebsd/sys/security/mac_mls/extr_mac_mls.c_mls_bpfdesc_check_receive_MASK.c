
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {int dummy; } ;
struct bpf_d {int dummy; } ;


 int VAR_0 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mac_mls*,struct mac_mls*) ;

__attribute__((used)) static int
FUNC_2(struct bpf_d *VAR_2, struct label *VAR_3,
     struct ifnet *VAR_4, struct label *VAR_5)
{
 struct mac_mls *VAR_6, *VAR_7;

 if (!VAR_1)
  return (0);

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_6, VAR_7))
  return (0);
 return (VAR_0);
}
