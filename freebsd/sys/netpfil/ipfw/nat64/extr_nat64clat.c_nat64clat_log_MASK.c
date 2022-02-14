
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pfloghdr {char* ruleset; int ifname; void* subrulenr; void* rulenr; int dir; int action; int af; int length; } ;
struct mbuf {int dummy; } ;
typedef int sa_family_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pfloghdr*,int ,struct mbuf*) ;
 int FUNC_2 (struct pfloghdr*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct pfloghdr *VAR_4, struct mbuf *VAR_5, sa_family_t VAR_6,
    uint32_t VAR_7)
{
 static uint32_t VAR_8 = 0;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->length = VAR_1;
 VAR_4->af = VAR_6;
 VAR_4->action = VAR_3;
 VAR_4->dir = VAR_2;
 VAR_4->rulenr = FUNC_0(VAR_7);
 VAR_8++;
 VAR_4->subrulenr = FUNC_0(VAR_8);
 VAR_4->ruleset[0] = '\0';
 FUNC_3(VAR_4->ifname, "NAT64CLAT", sizeof(VAR_4->ifname));
 FUNC_1(VAR_4, VAR_0, VAR_5);
}
