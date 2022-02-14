
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int ip_dst; int ip_src; } ;
struct alias_data {int maxpktsize; int lnk; int * aport; int * sport; int * dport; } ;


 int FUNC_0 (struct libalias*,struct ip*,int ,int ) ;
 int FUNC_1 (struct libalias*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct libalias *VAR_2, struct ip *VAR_3, struct alias_data *VAR_4)
{

 if (FUNC_2(*VAR_4->dport) == VAR_1)
  FUNC_1(VAR_2, VAR_3->ip_src, VAR_3->ip_dst,
        *VAR_4->sport, *VAR_4->aport, VAR_0);
 else FUNC_0(VAR_2, VAR_3, VAR_4->lnk, VAR_4->maxpktsize);
 return (0);
}
