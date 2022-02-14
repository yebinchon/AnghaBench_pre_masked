
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct udphdr {int uh_dport; int uh_ulen; } ;
struct libalias {int dummy; } ;
struct ip {int ip_src; } ;
struct cu_header {scalar_t__ addr; } ;
struct alias_link {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,int ,int ,int ,int ,int) ;
 TYPE_1__ FUNC_1 (struct alias_link*) ;
 int FUNC_2 (struct alias_link*) ;
 int VAR_0 ;
 int FUNC_3 (struct alias_link*) ;
 struct udphdr* FUNC_4 (struct ip*) ;
 int FUNC_5 (int ) ;
 struct cu_header* FUNC_6 (struct udphdr*) ;

__attribute__((used)) static void
FUNC_7(struct libalias *VAR_1, struct ip *VAR_2, struct alias_link *VAR_3)
{
 struct udphdr *VAR_4 = FUNC_4(VAR_2);

 if (FUNC_5(VAR_4->uh_ulen) - sizeof(struct udphdr) >= sizeof(struct cu_header)) {
  struct cu_header *VAR_5;
  struct alias_link *VAR_6;

  VAR_5 = FUNC_6(VAR_4);
  if (VAR_5->addr)
   VAR_5->addr = (u_int32_t) FUNC_1(VAR_3).s_addr;

  VAR_6 = FUNC_0(VAR_1, VAR_2->ip_src, FUNC_2(VAR_3),
      VAR_4->uh_dport, 0, VAR_0, 1);


  if (VAR_6)
   FUNC_3(VAR_6);

 }
}
