
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sendkey; scalar_t__ recvkey; int types; int policy; } ;
struct TYPE_3__ {char* file; } ;
struct radius {char* repstr; char* msrepstr; char* errstr; scalar_t__ ipv6routes; scalar_t__ routes; TYPE_2__ mppe; scalar_t__ vj; int mtu; int mask; int ip; scalar_t__ valid; TYPE_1__ cfg; } ;
struct prompt {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct prompt*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct prompt*,scalar_t__,char*,int) ;

void
FUNC_5(struct radius *VAR_0, struct prompt *VAR_1)
{
  FUNC_1(VAR_1, " Radius config:     %s",
                *VAR_0->cfg.file ? VAR_0->cfg.file : "none");
  if (VAR_0->valid) {
    FUNC_1(VAR_1, "\n                IP: %s\n", FUNC_0(VAR_0->ip));
    FUNC_1(VAR_1, "           Netmask: %s\n", FUNC_0(VAR_0->mask));
    FUNC_1(VAR_1, "               MTU: %lu\n", VAR_0->mtu);
    FUNC_1(VAR_1, "                VJ: %sabled\n", VAR_0->vj ? "en" : "dis");
    FUNC_1(VAR_1, "           Message: %s\n", VAR_0->repstr ? VAR_0->repstr : "");
    FUNC_1(VAR_1, "   MPPE Enc Policy: %s\n",
                  FUNC_2(VAR_0->mppe.policy));
    FUNC_1(VAR_1, "    MPPE Enc Types: %s\n",
                  FUNC_3(VAR_0->mppe.types));
    FUNC_1(VAR_1, "     MPPE Recv Key: %seceived\n",
                  VAR_0->mppe.recvkey ? "R" : "Not r");
    FUNC_1(VAR_1, "     MPPE Send Key: %seceived\n",
                  VAR_0->mppe.sendkey ? "R" : "Not r");
    FUNC_1(VAR_1, " MS-CHAP2-Response: %s\n",
                  VAR_0->msrepstr ? VAR_0->msrepstr : "");
    FUNC_1(VAR_1, "     Error Message: %s\n", VAR_0->errstr ? VAR_0->errstr : "");
    if (VAR_0->routes)
      FUNC_4(VAR_1, VAR_0->routes, "            Routes", 16);

    if (VAR_0->ipv6routes)
      FUNC_4(VAR_1, VAR_0->ipv6routes, "            IPv6 Routes", 16);

  } else
    FUNC_1(VAR_1, " (not authenticated)\n");
}
