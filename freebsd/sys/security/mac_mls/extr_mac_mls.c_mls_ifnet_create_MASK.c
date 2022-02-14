
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int dummy; } ;
struct label {int dummy; } ;
struct ifnet {scalar_t__ if_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mac_mls* FUNC_0 (struct label*) ;
 int FUNC_1 (struct mac_mls*,int,int ,int *) ;
 int FUNC_2 (struct mac_mls*,int,int ,int *,int,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_3, struct label *VAR_4)
{
 struct mac_mls *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4);

 if (VAR_3->if_type == VAR_0)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 FUNC_1(VAR_5, VAR_6, 0, ((void*)0));
 FUNC_2(VAR_5, VAR_6, 0, ((void*)0), VAR_6, 0, ((void*)0));
}
